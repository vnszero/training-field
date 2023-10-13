#include <stdio.h>
#include <math.h>
int verifica_primo(long long int X){
    if(X==1){
        return 1;
    }
    long long int i;
    for(i=2; i<=sqrt(X); i++){
        if(X%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int N;
    long long int X;
    scanf("%d", &N);
    while(N>0){
        scanf("%lld", &X);
        if(verifica_primo(X)==1){
            printf("Not Prime\n");
        }else{
            printf("Prime\n");
        }
        N--;
    }
    return 0;
}