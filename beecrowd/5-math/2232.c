#include <stdio.h>
#include <stdlib.h>
int main(){
    int T;
    int N;
    unsigned long long S=0;
    scanf("%d", &T);
    unsigned long long linha = 1;
    while(T>0){
        S = 0;
        linha = 1;
        scanf("%d", &N);
        for(int i=0; i<N; i++){
            linha *= 2;
        }
        S += linha-1;
        T--;
        printf("%u\n", S);
    }
}