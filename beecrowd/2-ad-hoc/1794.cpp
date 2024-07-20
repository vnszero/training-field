#include <iostream>

using namespace std;

int main()
{
    int N, LA, LB, SA, SB;
    cin >> N;
    cin >> LA >> LB;
    cin >> SA >> SB;
    if (N >= LA && N <= LB && N >= SA && N <= SB)
    {
        cout << "possivel" << endl;
    }
    else
    {
        cout << "impossivel" << endl;
    }
}