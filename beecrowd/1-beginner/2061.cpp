#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N, M;
    string action;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> action;
        if(!action.compare("fechou"))
        {
            N += 1;
        }
        else
        {
            N -= 1;
        }
    }
    cout << N << endl;
}