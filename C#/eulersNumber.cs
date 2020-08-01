using System;
using System.Linq;

class EulersNumber
{
    static void Main()
    {
        string inp = Console.ReadLine();
        ulong n = UInt64.Parse(inp);

        decimal sum = 1.0M;
        decimal factorial = 1.0M;
        for (ulong i = 1; i <= n; i++)
        {   
            factorial *= i;
            sum += (Decimal)1/factorial;
        }

        Console.WriteLine(sum.ToString("F17"));

    }

    static ulong fact(ulong n)
    {
        ulong fac = Convert.ToUInt64(n);
        while (n > 1)
        {   
            fac *= (n-1);
            n--;
        }
        return fac;
    }
}
