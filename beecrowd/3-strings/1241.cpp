#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    bool state;
    string A, B;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        state = true;
        cin >> A >> B;
        if (A.length() < B.length())
        {
            cout << "nao encaixa" << endl;
            state = false;
        }
        else
        {
            int l = A.length()-1;
            for (int j=B.length()-1; j>=0; j--)
            {
                if (A[l] != B[j])
                {
                    cout << "nao encaixa" << endl;
                    state = false;
                    break;
                }
                l--;
            }
        }
        if (state)
        {
            cout << "encaixa" << endl;
        }
    }
}