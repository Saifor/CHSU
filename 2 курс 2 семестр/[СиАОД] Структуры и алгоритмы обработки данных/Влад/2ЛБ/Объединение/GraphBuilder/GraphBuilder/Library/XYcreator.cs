using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Library;
using System.Text.Json;
using Library.TextReader;
using System.Security.Cryptography.Xml;
using System.Windows.Controls;

namespace Library.XY
{
    class XYcreator
    {
        Dictionary<int, List<(int, int)>> dct = new Dictionary<int, List<(int, int)>>();
        List<(int x1, int y1, int x2, int y2)> lines = new List<(int x1, int y1, int x2, int y2)>();
        public int[,] TextFile()
        {
            Reader rd = new Reader();
            var gr = rd.Read();
            return gr;
        }
        public void Generate()
        {
            Random rand = new Random();
            var gr = TextFile();
            int X1 = 5;
            int X2 = 150;
            int Y = 5;
            int step = 70;
            int currX = 0;
            int count = 0;
            bool flag = false;
            for (int i = 0; i < gr.GetLength(0); i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    if (!dct.ContainsKey(gr[i, j]))
                    {
                        if (count == 0)
                        {
                            currX = X1 + gr[i, j] * rand.Next(1, 10);
                        }
                        else
                        {
                            currX = X2 + gr[i, j] * rand.Next(5, 25) + rand.Next(50, 90);
                            Y += step + rand.Next(50, 150);
                        }
                        dct[gr[i, j]] = new List<(int, int)>();
                        dct[gr[i, j]].Add((currX, Y));
                        flag = true;
                    }
                    if (flag == true)
                    {
                        count += 1;
                        flag = false;
                    }
                    if (count > 1)
                    {
                        count = 0;
                    }
                }
            }
            CreateLines();
        }
        private void CreateLines()
        {
            var gr = TextFile();
            bool flag = true;
            int X = 0;
            int Y = 0;
            int X2 = 0;
            int Y2 = 0;
            for (int i = 0; i < gr.GetLength(0); i++)
            {
                foreach (var key in dct.Keys)
                {
                    if (key == gr[i, 0] || key == gr[i, 1])
                    {
                        foreach (var (x, y) in dct[key])
                        {
                            if (flag)
                            {
                                X = x;
                                Y = y;
                                flag = false;
                            }
                            else
                            {
                                X2 = x;
                                Y2 = y;
                                flag = true;
                            }
                        }
                    }
                }
                lines.Add((X, Y, X2, Y2));
            }
        }
        public int GetSizeOfDictionary()
        {
            return dct.Count;
        }
        public List<(int x1, int y1, int x2, int y2)> GetLines()
        {
            return lines;
        }
        public Dictionary<int, List<(int, int)>> GetDict()
        {
            return dct;
        }
    }
}
