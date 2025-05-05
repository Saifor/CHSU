using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
namespace Prog;
class Program
{
    public List<(int, int)> Main()
    {
        try
        {
            string[] inputLines = ReadInputFile("INPUT.TXT");
            if (inputLines.Length == 0)
            {
                return new List<(int, int)>();
            }

            if (!TryParseApartmentCount(inputLines[0], out int N))
            {
                return new List<(int, int)>();
            }

            var pipes = ParsePipes(inputLines, N);
            var uniquePipes = RemoveDuplicatePipes(pipes);
            var replaceablePipes = FindReplaceablePipes(uniquePipes, N);

            return replaceablePipes;
        }
        catch (Exception)
        {
            return new List<(int, int)>();
        }
    }

    private static string[] ReadInputFile(string filePath)
    {
        try
        {
            return File.ReadAllLines(filePath);
        }
        catch (FileNotFoundException)
        {
            return new string[0];
        }
    }

    private static bool TryParseApartmentCount(string line, out int N)
    {
        N = 0;
        if (!int.TryParse(line, out N) || N <= 0 || N > 30)
        {
            return false;
        }
        return true;
    }

    private static List<(int, int)> ParsePipes(string[] inputLines, int apartmentCount)
    {
        var pipes = new List<(int, int)>();

        for (int i = 1; i < inputLines.Length; i++)
        {
            string[] parts = inputLines[i].Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
            if (parts.Length != 2) continue;

            if (int.TryParse(parts[0], out int a) && int.TryParse(parts[1], out int b) &&
                a > 0 && b > 0 && a <= apartmentCount && b <= apartmentCount)
            {
                pipes.Add((Math.Min(a, b), Math.Max(a, b)));
            }
        }

        return pipes;
    }

    private static List<(int, int)> RemoveDuplicatePipes(List<(int, int)> pipes)
    {
        return pipes.Distinct().ToList();
    }

    private static List<(int, int)> FindReplaceablePipes(List<(int, int)> pipes, int apartmentCount)
    {
        var replaceablePipes = new List<(int, int)>();

        foreach (var pipe in pipes)
        {
            var tempGraph = pipes.Where(p => p != pipe).ToList();
            if (!AreConnected(tempGraph, pipe.Item1, pipe.Item2, apartmentCount))
            {
                replaceablePipes.Add(pipe);
            }
        }

        return replaceablePipes.OrderBy(p => p.Item1).ThenBy(p => p.Item2).ToList();
    }

    private static bool AreConnected(List<(int, int)> graph, int start, int end, int apartmentCount)
    {
        if (start == end) return true;

        var visited = new bool[apartmentCount + 1];
        var queue = new Queue<int>();
        queue.Enqueue(start);
        visited[start] = true;

        while (queue.Count > 0)
        {
            int current = queue.Dequeue();

            foreach (var pipe in graph)
            {
                if (pipe.Item1 == current && !visited[pipe.Item2])
                {
                    if (pipe.Item2 == end) return true;
                    visited[pipe.Item2] = true;
                    queue.Enqueue(pipe.Item2);
                }
                else if (pipe.Item2 == current && !visited[pipe.Item1])
                {
                    if (pipe.Item1 == end) return true;
                    visited[pipe.Item1] = true;
                    queue.Enqueue(pipe.Item1);
                }
            }
        }

        return false;
    }
}