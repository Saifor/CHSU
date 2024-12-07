using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Program
{
    static List<List<int>> GenerateCombinations(int n)
    {
        List<List<int>> combinations = new List<List<int>>();

        // Генерируем двоичные числа от 0 до 2^n - 1
        for (int i = 0; i < Math.Pow(2, n); i++)
        {
            List<int> combination = new List<int>();

            // Перебираем биты числа i
            for (int j = 0; j < n; j++)
            {
                if ((i & (1 << j)) != 0)
                {
                    combination.Add(j);
                }
            }

            combinations.Add(combination);
        }

        return combinations;
    }
    static void Main()
    {
        // Читаем текстовый файл
        string[] lines = File.ReadAllLines("input.txt");
        if (lines.Length == 0 || lines.Length == 1)
        {
            Console.WriteLine("Должно быть 2 строки");
            return;
        }

        // Приводим строки к нижнему регистру и удаляем пробелы
        string firstLine = lines[0].ToLower().Replace(" ", "");
        string secondLine = lines[1].ToLower().Replace(" ", "");

        // Если строки равны, выводим это на консоль и завершаем программу
        if (firstLine == secondLine)
        {
            Console.WriteLine("Строки изначально равны");
            return;
        }

        if (firstLine.Length < secondLine.Length)
        {
            Console.WriteLine("Невозможно привести к одинаковому виду");
        }

        int n = firstLine.Length;
        if (n > 20)
        {
            Console.WriteLine("Ошибка выполнения, элементов должно быть меньше или рав-но 20");
        }
        else
        {
            // Генерируем все возможные комбинации вычеркнутых символов
            List<List<int>> combinations = GenerateCombinations(n);

            // Проверяем каждую комбинацию
            using (StreamWriter file = new StreamWriter("output.txt"))
            {
                foreach (List<int> combination in combinations)
                {
                    string modifiedLine = firstLine;

                    // Вычеркиваем символы по номерам из комбинации
                    foreach (int index in combination.OrderByDescending(i => i))
                    {
                        modifiedLine = modifiedLine.Remove(index, 1);
                    }

                    // Если получили вторую строку, записываем комбинацию в текстовый файл
                    if (modifiedLine == secondLine)
                    {
                        // Добавляем +1 к каждому элементу комбинации перед записью в файл
                        List<string> adjustedCombination = combination.Select(x => (x + 1).ToString()).ToList();
                        file.WriteLine(string.Join(" ", adjustedCombination));
                    }
                }
            }
            // Генерация всех возможных комбинаций вычеркнутых символов
        }
    }
}
