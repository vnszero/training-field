#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string row;
    getline(cin, row);
    for (int i=0; i<N; i++)
    {
        getline(cin, row);
        for (int j=(row.length()/2 - 1); j>=0; j--)
        {
            cout << row[j];
        }
        for (int k=(row.length() - 1); k>=row.length()/2; k--)
        {
            if (row[k] != '\r')
            {
                cout << row[k];
            }
        }
        cout << endl;
    }
}