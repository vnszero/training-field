#include <iostream>
#include <string>
using namespace std;

string mirror(int j);

int main()
{
    int C, B, E;
    cin >> C;
    for (int i = 0; i < C; i++)
    {
        cin >> B >> E;
        for (int j = B; j <= E; j++)
        {
            cout << j;
        }
        for (int j = E; j >= B; j--)
        {
            cout << mirror(j);
        }
        cout << endl;
    }
    return 0;
}

string mirror(int j)
{ 
    string out = "";
    while(j > 0)
    {
        out += to_string(j%10);
        j /= 10;
    }
    return out;
}