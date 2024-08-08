#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int r1, x1, y1;
    int r2, x2, y2;
    double distance;
    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
    {
        distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        if (distance + r2 > r1)
        {
            cout << "MORTO" << endl;
        }
        else
        {
            cout << "RICO" << endl;
        }
    }
}