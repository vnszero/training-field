#include <stdio.h>
#include <math.h>
int main(){
    int N;
    double H, C, L;
    double low_hip;
    double area;
    while(scanf("%d", &N) != EOF){
        scanf("%lf %lf %lf", &H, &C, &L);

        low_hip = sqrt(pow(H,2) + pow(C,2));

        area = low_hip*L;
        area = N*area;
        area = area/10000;
        printf("%.4lf\n", area);
    }
    return 0;
}