#include <bits/stdc++.h>
using namespace std;
int str_to_number(string number)
{
    int sum=0;
    int factor=1;
    for(int k=3; k>=0; k--)
    {
        sum += (number[k] - 48)*factor;
        factor *= 10;
    }
    return sum;
}

int main()
{
    vector <string> rows;
    int i;
    for (i=0; i<4; i++)
    {
        string row;
        cin >> row;
        rows.push_back(row);
    }

    i = 0;
    vector <int> M;

    for (int j=0; rows[i][j]!='\0'; j++)
    {
        ostringstream column;
        column << rows[i][j] << rows[i+1][j] << rows[i+2][j] << rows[i+3][j];
        M.push_back(str_to_number(column.str()));
    }

    int F;
    int L;
    char c;

    F = M[0];
    L = M[M.size()-1];
    
    for (int l=1; l<M.size()-1; l++)
    {
        c = (F*M[l] + L)%257;
        cout << c;
    }
    cout << endl;
}