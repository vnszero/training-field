#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main() {
    int N, M;
    int A, B;

    while(cin >> N >> M)
    {
        if (N == 0 && M == 0)
        {
            break;
        }

        vector<string> rows;
        for (int i=0; i<N; i++)
        {
            string row;
            cin >> row;
            rows.push_back(row);
        }

        cin >> A >> B;

        for (int i=0; i<N; i++)
        {
            for (int width=0; width<A/N; width++)
            {
                for (int j=0; j<M; j++)
                {
                    for (int height=0; height<B/M; height++)
                    {
                        cout << rows[i][j];
                    }
                }
                cout << endl;
            }
        }
        cout << endl;
    }
}