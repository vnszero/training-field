#include <iostream>
using namespace std;
int main(){
    int N, S;
    int cont=0;
    int mov;
    cin >> N >> S;
    while (cont <= N)
    {
        cin >> mov;
        S += mov;
        cont++;
    }
    cout << S << endl;
}