using System.ComponentModel;
using System.IO;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Xml.Linq;
using Library;
using Library.XY;
using Prog;

namespace GraphBuilder;

public partial class MainWindow : Window
{
    public MainWindow()
    {
        InitializeComponent();
    }

    private void Button_Click(object sender, RoutedEventArgs e)
    {
        Drawer.Children.Clear();
        XYcreator r = new XYcreator();
        r.Generate();
        var grd = r.GetDict();
        var lines = r.GetLines();
        var fil = r.TextFile();

        foreach (var lineCoords in lines)
        {
            var line = new Line
            {
                X1 = lineCoords.x1 + 30,
                Y1 = lineCoords.y1 + 15,
                X2 = lineCoords.x2 + 15,
                Y2 = lineCoords.y2 + 15,
                Stroke = Brushes.Black,
                StrokeThickness = 2,
            };
            Drawer.Children.Add(line);
        }

        foreach (var keys in grd.Keys)
        {
            foreach (var (x, y) in grd[keys])
            {
                var container = new Grid();
                var ellips = new Ellipse
                {
                    Width = 30,
                    Height = 30,
                    Fill = Brushes.White,
                    Stroke = Brushes.Black,
                    StrokeThickness = 2
                };
                var textBlock = new TextBlock
                {
                    Text = keys.ToString(),
                    HorizontalAlignment = HorizontalAlignment.Center,
                    VerticalAlignment = VerticalAlignment.Center,
                    FontSize = 12,
                    FontWeight = FontWeights.Bold
                };
                container.Children.Add(ellips);
                container.Children.Add(textBlock);
                Canvas.SetLeft(container, x);
                Canvas.SetTop(container, y);
                Drawer.Children.Add(container);
                UpdateCanvasSize(container);
            }
        }

        Program prog = new Program();
        var results = prog.Main();
        First.Text = results.Count == 0
            ? "Трубы, которые можно заменять:\nНет труб для замены"
            : "Трубы, которые можно заменять:\n" +
              string.Join("\n", results.Select(p => $"{p.Item1} {p.Item2}"));
    }

    private void UpdateCanvasSize(UIElement newElement)
    {
        double maxX = Drawer.Children.OfType<UIElement>()
            .Max(e => Canvas.GetLeft(e) + e.RenderSize.Width);

        double maxY = Drawer.Children.OfType<UIElement>()
            .Max(e => Canvas.GetTop(e) + e.RenderSize.Height);

        if (maxX > Drawer.ActualWidth)
        {
            Drawer.Width = maxX + 35;
        }

        if (maxY > Drawer.ActualHeight)
        {
            Drawer.Height = maxY + 35;
        }
    }
}