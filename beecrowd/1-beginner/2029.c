#include <stdio.h>
#define PI 3.14

int main() {
    float V, D;
    float H, A;

    while (1) {
        if(scanf("%f", &V) == EOF){
            break;
        } else {
            scanf("%f", &D);
            A = PI * (D / 2) * (D / 2);
            H = V / A;

            printf("ALTURA = %.2f\n", H);
            printf("AREA = %.2f\n", A);
        }
    }
    return 0;
}