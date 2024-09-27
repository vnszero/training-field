#include <iostream>
using namespace std;
int main()
{
    int Cv, Ce, Cs, Fv, Fe, Fs;
    cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;
    char out;
    if (Cv * 3 + Ce > Fv * 3 + Fe)
    {
        out = 'C';
    }
    else if (Cv * 3 + Ce < Fv * 3 + Fe)
    {
        out = 'F';
    }
    else if (Cs > Fs)
    {
        out = 'C';
    }
    else if (Cs < Fs)
    {
        out = 'F';
    }
    else
    {
        out = '=';
    }
    cout << out << endl;
    return 0;
}