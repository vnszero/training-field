using System;
using System.Globalization;

class URI
{
    static void Main()
    {
        double r = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
        
        double area = 3.14159 * Math.Pow(r, 2);
        
        Console.WriteLine("A={0:F4}", area.ToString("F4", CultureInfo.InvariantCulture));
    }
}
