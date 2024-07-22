#include <iostream>

using namespace std;

int main()
{
    int N[2], D[2], V[2];
    cin >> N[0] >> D[0] >> V[0];
    cin >> N[1] >> D[1] >> V[1];
    if ((float) D[0]/V[0] < (float) D[1]/V[1])
    {
        cout << N[0] << endl;
    }
    else
    {
        cout << N[1] << endl;
    }
    return 0;
}