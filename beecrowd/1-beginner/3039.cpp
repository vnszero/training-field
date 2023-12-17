#include <iostream>
#include <string>
#define F 0
#define M 1
using namespace std;
int main()
{
    int N;
    int toys[2] = {0,0};
    string name;
    char S;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> name >> S;
        if (S == 'F')
        {
            toys[F]++;
        }
        else
        {
            toys[M]++;
        }
    }
    cout << toys[M] << " carrinhos" << endl;
    cout << toys[F] << " bonecas" << endl;
    return 0;
}