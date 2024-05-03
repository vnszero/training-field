#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    float L = 12.0;
    float D, VF, VG;
    float H;
    float TF, TG;
    
    while(cin >> D >> VF >> VG)
    {
        H = sqrt(L*L + D*D);

        TF = L/VF;
        TG = H/VG;

        if (TG <= TF)
        {
            cout << 'S' << endl;
        }
        else
        {
            cout << 'N' << endl;
        }
    }
    
    return 0;
}