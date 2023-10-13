#include <bits/stdc++.h>
#define MAX_NOTAS 6
#define MAX_MOEDAS 6
using namespace std;
int main()
{
    double n;
    double N;
    int notas[MAX_NOTAS] = {100, 50, 20, 10, 5, 2};
    int notas_usadas[MAX_NOTAS] = {0,0,0,0,0,0};
    int moedas[MAX_MOEDAS] = {100, 50, 25, 10, 5, 1};
    int moedas_usadas[MAX_MOEDAS] = {0,0,0,0,0,0};
    float valor_real[MAX_MOEDAS] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    cin >> n;
    N = n*100;
    int nota=0, moeda=0;
    while (N > 0)
    {
        if (nota < MAX_NOTAS){
            if (N >= notas[nota]*100)
            {
                N -= notas[nota]*100;
                notas_usadas[nota]++;
            }
            else
            {
                nota++;
            }
        }
        else if(moeda < MAX_MOEDAS)
        {
            if (N >= moedas[moeda])
            {
                N -= moedas[moeda];
                moedas_usadas[moeda]++;
            }
            else
            {
                moeda++;
            }
        }
        else
        {
            break;
        }
    }
    cout << "NOTAS:" << endl;
    for (int i=0; i<MAX_NOTAS; i++)
    {
        printf("%d nota(s) de R$ %d.00\n", notas_usadas[i], notas[i]);
    }
    cout << "MOEDAS:" << endl;
    for (int i=0; i<MAX_MOEDAS; i++)
    {
        printf("%d moeda(s) de R$ %.2lf\n", moedas_usadas[i], valor_real[i]);
    }
    return 0;
}