using System;
using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Lab_5
{
    internal class HashTable
    {
        private readonly int a;
        private readonly int c;
        private readonly List<int>[] Data;
        /// <summary>
        /// Конструктор для больших таблиц
        /// </summary>
        /// <param name="amount">количество классов в таблице</param>
        public HashTable(int amount, int a, int c)
            : this(amount)
        {
            this.a = a;
            this.c = c;
        }
        /// <summary>
        /// Конструктор для маленьких таблиц
        /// </summary>
        /// <param name="amount">количество классов в таблице</param>
        public HashTable(int amount)
        {
            Data = new List<int>[amount];
            for (int i = 0; i < amount; i++)
                Data[i] = new List<int>();
        }
        /// <summary>
        /// Поиск по таблице
        /// </summary>
        /// <param name="value">Искомый эоемент</param>
        /// <returns> Номер элемента в таблице или - 1 если его нет </returns>
        public int Get(int value)
        {
            int finded = Hash(value);
            for (int i = 0; i < Data[finded].Count; i++)
            {
                if (Data[finded][i] == value)
                    return finded;
            }
            return -1;
        }
        /// <summary>
        /// Добалвение элемента в таблицу
        /// </summary>
        /// <param name="value"></param>
        public void Set(int value)
        {
            if (Get(value) != -1) return;
            Data[Hash(value)].Add(value);
        }
        /// <summary>
        /// Вывод всей таблицы на экран
        /// </summary>
        public void Show()
        {
            // если таблица большая, не выводить
            if (Data.Length > 30)
                return;
            for (int i = 0; i < Data.Length; i++)
            {
                Console.Write($"{i} [");
                for (int j = 0; j < Data[i].Count - 1; j++)
                {
                    Console.Write($"{Data[i][j]}, ");
                }
                if (Data[i].Count != 0)
                    Console.Write(Data[i][Data[i].Count - 1]);
                Console.WriteLine("]");
            }
        }
        /// <summary>
        /// Поиск общего числа коллизий
        /// </summary>
        /// <returns></returns>
        public int CollisionsAmount()
        {
            int answer = 0;
            for (int i = 0; i < Data.Length; i++)
                if (Data[i].Count > 1)
                    answer += Data[i].Count - 1;
            return answer;
        }
        /// <summary>
        /// Поиск самой длинной цепочки коллизий
        /// </summary>
        /// <returns></returns>
        public string CollisionLargest()
        {
            int answer = 0;
            for (int i = 0; i < Data.Length; i++)
                if (Data[i].Count > answer)
                    answer = Data[i].Count;
            return $"{Data[answer]}";
        }
        /// <summary>
        /// Поиск процента заполнения
        /// </summary>
        /// <returns></returns>
        public int FillingPercent()
        {
            float answer = 0;
            for (int i = 0; i < Data.Length; i++)
                if (Data[i].Count != 0)
                    answer++;

            return (int)(answer / Data.Length * 100);
        }
        /// <summary>
        /// само хеширование
        /// </summary>
        /// <param name="x">Хешируемый элемент</param>
        /// <returns></returns>
        private int Hash(int x)
        {
            if (Data.Count() <= 30)
                x = x % Data.Length;
            else
                x = (a * x + c) % Data.Length;
            return x;
        }
    }
}

namespace Lab_5
{
    internal static class Program
    {
        static void Main()
        {
            while (true)
            {
                Console.Write("Введите число классов в таблице: ");
                int size = int.Parse(Console.ReadLine()), a, c, tmp;
                HashTable table;
                if (size >= 30)
                {
                    Console.WriteLine("Введите переменную a: ");
                    a = int.Parse(Console.ReadLine());
                    Console.WriteLine("Введите переменную c: ");
                    c = int.Parse(Console.ReadLine());
                    table = new(size, a, c);
                }
                else
                    table = new(size);
                Console.Write("Выберите файл (1, 2 или 3) для чтения: ");
                tmp = int.Parse(Console.ReadLine());
                using StreamReader stream = new StreamReader($"{tmp}.txt");
                string line;
                while ((line = stream.ReadLine()) != null)
                {
                    string[] ints = line.Split(' ');
                    for (int i = 0; i < ints.Length; i++)
                        table.Set(int.Parse(ints[i]));
                }
                table.Show();
                Console.Write("Введите искомый элемент: ");
                tmp = int.Parse(Console.ReadLine());
                tmp = table.Get(tmp);
                if (tmp == -1)
                    Console.WriteLine("В таблице нет такого элемента");
                else
                    Console.WriteLine($"Данный элемент находится на позиции {tmp}");
                Console.WriteLine($"Общее число коллизий: {table.CollisionsAmount()} ");
                Console.WriteLine($"Самая длинная цепочка коллизий: {table.CollisionLargest()} ");
                Console.WriteLine($"Процент заполняемости: {table.FillingPercent()}% ");
                Console.WriteLine("Повторить? (Y/N)");
                string yes = Console.ReadLine();
                if (yes != "Y")
                    return;
                Console.Clear();
            }
        }
    }
}
