using System;
using System.Linq;

class BatterUp
{
    static void Main()
    {
        int n = Convert.ToInt32(Console.ReadLine());
        // The above number is not really needed in the code when using foreach.
        var nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        var s = 0;
        var len = 0;
        foreach (int item in nums)
        {
            if (item != -1)
            {
                s += item;
                len++;
            }
        }
        Console.WriteLine((Decimal)s/len);
    }
}
