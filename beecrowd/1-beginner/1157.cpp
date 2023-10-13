#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    cout << "1" << endl;
    for (int i=2; i<=N; i++)
    {
        if (N%i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}