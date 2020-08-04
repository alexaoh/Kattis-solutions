using System;
using System.Linq;
using System.Collections.Generic;

// Makes no sense right now!

class Sort
{
    static void Main()
    {
        var nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        var nums2 = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

        int[] counts = new int[nums[1]];
        List<int> sorted = new List<int>();

        foreach (var item in nums2)
        {
            counts[item-1] += 1;   
        }

        while (counts.Length != 0)
        {
            int max = counts.Max();
            for (int j = 0; j < max; j++)
            {
                sorted.Add(Array.FindIndex(counts, e => e == max)+1); // Not working as it should? Cannot understand why?!
            }

            counts = counts.Where(val => val != max).ToArray();
        }

        foreach (var item in sorted)
        {
            Console.Write(item+" ");
        }
    }

    static bool predicate(int max)
    {

    }
}
