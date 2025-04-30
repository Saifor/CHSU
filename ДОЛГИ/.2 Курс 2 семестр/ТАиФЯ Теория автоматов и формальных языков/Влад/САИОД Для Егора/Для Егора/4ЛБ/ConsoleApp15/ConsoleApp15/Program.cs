using System.ComponentModel;
using System.Diagnostics;
using System.Text;


class TreeeNode
{
    public string word;
    public int count;
    public TreeeNode left;
    public TreeeNode right;
    public TreeeNode(string Word)
    {
        word = Word;
        count = 1;
        left = null;
        right = null;
    }
}
class BinTree
{
    private StringBuilder alf = new StringBuilder();
    private TreeeNode root;
    public void AddToTree(string word)
    {
        root = AddTree(word, root);
    }
    private TreeeNode AddTree(string word, TreeeNode node)
    {
        if(node == null)
        {
            return new TreeeNode(word);
        }
        int comp = string.Compare(word, node.word, StringComparison.OrdinalIgnoreCase);
        if(comp < 0)
        {
            node.left = AddTree(word, node.left);
        }
        else if(comp > 0)
        {
            node.right = AddTree(word, node.right);
        }
        else
        {
            node.count++;
        }
        return node;
    }
    public int Search(string word)
    {
        return SearchWord(root, word);
    }
    private int SearchWord(TreeeNode node,string word)
    {
        if(node == null)
        {
            return 0;
        }
        int compRes = string.Compare(word, node.word, StringComparison.OrdinalIgnoreCase);
        if(compRes < 0)
        {
            return SearchWord(node.left, word);
        }
        else if(compRes > 0)
        {
            return SearchWord(node.right, word);
        }
        else
        {
            return node.count;
        }
    }
    public void PrintAlf()
    {
        Console.WriteLine("Слова в алфавитном порядке:");
        PrintAlfR(root);
    }
    private void PrintAlfR(TreeeNode node)
    {
        if(node != null)
        {
            PrintAlfR(node.left);
            string f = node.word + ": " + node.count;
            alf.AppendLine(f);
            Console.WriteLine($"{node.word}: {node.count}");
            PrintAlfR(node.right);
        }
    }
    private List<(string Word, int Count)> GetAllWords()
    {
        var words = new List<(string, int)>();
        GetAllWordsR(root, words);
        return words;
    }
    private void GetAllWordsR(TreeeNode node, List<(string, int)> word)
    {
        if(node != null)
        {
            GetAllWordsR(node.left, word);
            word.Add((node.word, node.count));
            GetAllWordsR(node.right, word);
        }
    }
    public List<(string, int)> sort(String s)
    {
        var sor = GetAllWords();
        if(s == ">")
        {
            for (int i = 0; i < sor.Count; i++)
            {
                for (int j = i; j < sor.Count; j++)
                {                    
                    if (sor[i].Count < sor[j].Count)
                    {
                        var tmp = sor[i];
                        sor[i] = sor[j];
                        sor[j] = tmp;
                    }
                }
            }
            string[] fi = new string[sor.Count];
            using (File.Create("sort.txt")) { }
            for (int i = 0; i < sor.Count(); i++)
            {
                fi[i] = sor[i].Word + ": " + sor[i].Count;
            }
            File.AppendAllLines("sort.txt", fi);
        }
        else if(s == "<")
        {
            for (int i = 0; i < sor.Count; i++)
            {
                for (int j = i; j < sor.Count; j++)
                {
                    if (sor[i].Count > sor[j].Count)
                    {
                        var tmp = sor[i];
                        sor[i] = sor[j];
                        sor[j] = tmp;
                    }
                }
            }
            string[] fi = new string[sor.Count];
            using (File.Create("sort.txt")) { }
            for(int i = 0; i < sor.Count(); i++)
            {
                fi[i] = sor[i].Word + ": " + sor[i].Count;
            }
            File.AppendAllLines("sort.txt", fi);
        }
        else
        {
            sor.Clear();
            sor.Add(("Извини, я воспринимаю только '<' и '>'",0));
        }
        return sor;
    }
    public List<(string Word, int Count)> LenFilter(int len)
    {
        var Filter = new List<(string,int)>();
        var words = GetAllWords();
        foreach(var w in words)
        {
            if (w.Word.Length == len)
            {
                Filter.Add(w);
            }
        }
        CreateLenFile(Filter);
        return Filter;
    }
    private void CreateLenFile(List<(string Word, int Count)> sor)
    {
        string[] fi = new string[sor.Count];
        for (int i = 0; i < sor.Count(); i++)
        {
            fi[i] = sor[i].Word + ": " + sor[i].Count;
        }
        using (File.Create("Len.txt")) { }
        File.AppendAllLines("Len.txt", fi);
    }
    public void CreateAlf()
    {
        using (File.Create("alf.txt")) { }
        File.WriteAllText("alf.txt", alf.ToString());  
    }
}
class Program
{
    static void Main(string[] args)
    {
        ConsoleKey trigger = new ConsoleKey();
        ConsoleKey button = new ConsoleKey();
        int count = 0;
        string fileName = " ";

        while (trigger != ConsoleKey.Escape)
        {
            if (count == 0)
            {
                Console.Write("Введите имя файла (без расширения): ");
                fileName = Console.ReadLine() + ".txt";
            }
            else
            {
                Console.WriteLine("Использовать старый файл? (Y - да, N - нет)");
                button = Console.ReadKey().Key;
                Console.Clear();
                if (button == ConsoleKey.N)
                {
                    Console.Write("Введите имя файла (без расширения): ");
                    fileName = Console.ReadLine() + ".txt";
                }
            }

            var tree = new BinTree();
            using (var fileStream = File.OpenRead(fileName))
            using (var streamReader = new StreamReader(fileStream))
            {
                string line;
                while ((line = streamReader.ReadLine()) != null)
                {
                    var wordBuilder = new StringBuilder();
                    foreach (char c in line)
                    {
                        if (char.IsLetter(c))
                        {
                            wordBuilder.Append(char.ToLower(c));
                        }
                        else if (wordBuilder.Length > 0)
                        {
                            tree.AddToTree(wordBuilder.ToString());
                            wordBuilder.Clear();
                        }
                    }
                    if (wordBuilder.Length > 0)
                    {
                        tree.AddToTree(wordBuilder.ToString());
                    }
                }
            }

            Console.WriteLine("1 - вывод в алфавитном порядке; 2 - вывод в порядке частоты использования(по возрастанию);" +
                " 3 - вывод в порядке частоты использования(по убыванию); 4 - поиск слова; 5 - фильтрация по длине");

            button = Console.ReadKey().Key;
            Console.Clear();

            switch (button)
            {
                case ConsoleKey.D1:
                    tree.PrintAlf();
                    tree.CreateAlf();
                    Console.WriteLine();
                    break;
                case ConsoleKey.D2:
                    var sorted = tree.sort("<");
                    foreach (var g in sorted)
                    {
                        Console.WriteLine($"{g.Item1}: {g.Item2}");
                    }
                    break;
                case ConsoleKey.D3:
                    var sorted1 = tree.sort(">");
                    foreach (var g in sorted1)
                    {
                        Console.WriteLine($"{g.Item1}: {g.Item2}");
                    }
                    break;
                case ConsoleKey.D4:
                    Console.Write("Введите искомое слово:");
                    string nameWord = Console.ReadLine();
                    Console.WriteLine(tree.Search(nameWord) > 0 ?
                        $"Слово {nameWord} встречается {tree.Search(nameWord)} раз(а)" :
                        $"Слово {nameWord} не найдено");
                    break;
                case ConsoleKey.D5:
                    Console.Write("Введите размер слова: ");
                    var n = int.Parse(Console.ReadLine());
                    var tmp = tree.LenFilter(n);
                    if (tmp.Count == 0)
                    {
                        Console.WriteLine("Слов с заданным размером не найдено");
                    }
                    else
                    {
                        foreach (var i in tmp)
                        {
                            Console.WriteLine($"{i.Word}: {i.Count}");
                        }
                    }
                    break;
                default:
                    Console.WriteLine("Такую функцию выполнить я не могу :-(");
                    break;
            }

            Console.WriteLine("\nНажмите Escape для завершения или любую другую клавишу для продолжения");
            trigger = Console.ReadKey().Key;
            count++;
            Console.Clear();
        }
    }
}