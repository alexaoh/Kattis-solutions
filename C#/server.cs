using System;
using System.Collections.Generic;
using System.Linq;

class Server
{
    static void Main()
    {
        string line1 = Console.ReadLine();
        string line2 = Console.ReadLine();

        var line1Arr = line1.Split(' ').Select(Int32.Parse).ToList();
        var line2Arr = line2.Split(' ').Select(Int32.Parse).ToList();


        int sum = 0;
        int last = 0;
        int index = 0;
        foreach (var num in line2Arr)
        {   
            last = num;
            sum = sum + num;
            if (sum > line1Arr[1])
            {
                break;
            }
            index = index + 1;

        }

        Console.WriteLine(index);

    }
}
