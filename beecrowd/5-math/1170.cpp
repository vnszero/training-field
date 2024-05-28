#include <iostream>
using namespace std;
int main()
{
    int N, days;
    float C;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> C;
        days = 0;
        while(C > 1.0) {
            C /= 2;
            days++;
        }
        cout << days << " dias" << endl;
    }
}