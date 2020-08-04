using System;
using System.Linq;
using System.Collections.Generic;

class DrinkingSong
{
    static void Main()
    {
        int n = Convert.ToInt32(Console.ReadLine());
        string beverage = Console.ReadLine().ToLower();

        int i = n;

        while (i > 0)
        {   
            if (i != 1)
            {
                Console.WriteLine(String.Format("{0} bottles of {1} on the wall, {0} bottles of {1}.", i, beverage));
            }
            else 
            {
                Console.WriteLine(String.Format("{0} bottle of {1} on the wall, {0} bottle of {1}.", i, beverage));
            }
            
            i--;

            if (i > 1)
            {
                Console.WriteLine(String.Format("Take one down, pass it around, {0} bottles of {1} on the wall.", i, beverage));
            }
            else if (i == 1)
            {
                Console.WriteLine(String.Format("Take one down, pass it around, {0} bottle of {1} on the wall.", i, beverage));
            }
            else
            {
                Console.WriteLine("Take it down, pass it around, no more bottles of {0}.", beverage);
            }

            Console.WriteLine();
            
        }
        
        
    }
}
