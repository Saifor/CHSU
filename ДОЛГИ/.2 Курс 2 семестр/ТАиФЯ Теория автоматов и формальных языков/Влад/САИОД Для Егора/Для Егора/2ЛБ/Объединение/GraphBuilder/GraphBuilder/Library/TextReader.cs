using System;
using System.IO;

namespace Library.TextReader
{
    class Reader
    {
        string[] gr;
        int[,] graph;
        int size;

        public int[,] Read()
        {
            // Читаем файл (первая строка - количество городов)
            gr = File.ReadAllLines("input.txt");
            size = gr.Length-1;
            
            // Создаем массив только с номерами городов (1 колонка)
            graph = new int[size, 2];
            
            for(int i = 0; i < size; i++)
            {
                // Записываем номера городов (i+1)
                var tmp = gr[i+1].Split();
                graph[i, 0] = int.Parse(tmp[0]);
                graph[i, 1] = int.Parse(tmp[1]);
            }
            return graph;
        }

        public string[] GetGr()
        {
            // Возвращаем только первую строку (количество городов)
            return new string[] { gr[0] };
        }
    }
}