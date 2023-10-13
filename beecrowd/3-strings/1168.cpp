#include <iostream>
using namespace std;
#define ONE 2
#define TWO 5
#define THREE 5
#define FOUR 4
#define FIVE 5
#define SIX 6
#define SEVEN 3
#define EIGHT 7
#define NINE 6
#define ZERO 6

int main(){
    int N;
    string V;
    int r;
    int sum;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> V;
        sum = 0;
        for (int j=0; V[j] != '\0'; j++)
        {
            switch (V[j])
            {
            case '1':
                sum += ONE;
                break;
            case '2':
                sum += TWO;
                break;
            case '3':
                sum += THREE;
                break;
            case '4':
                sum += FOUR;
                break;
            case '5':
                sum += FIVE;
                break;
            case '6':
                sum += SIX;
                break;
            case '7':
                sum += SEVEN;
                break;
            case '8':
                sum += EIGHT;
                break;
            case '9':
                sum += NINE;
                break;
            default:
                sum += ZERO;
                break;
            }
        }
        cout << sum << " leds" << endl;
    }
    return 0;
}