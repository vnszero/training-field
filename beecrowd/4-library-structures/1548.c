struct a
{
    int nota;
    int pos_atual;
    int pos_inicial;
}typedef aluno;

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

#include <stdio.h>
#include <stdlib.h>
int main(){
    int N, M;
    scanf("%d", &N);
    while (N>0)
    {
        scanf("%d", &M);
        int *fila = malloc(M*sizeof(int));
        int *fila_copia = malloc(M*sizeof(int));
        int pos = 0;
        int cont = 0;

        //ler entrada
        while (M>0)
        {
            //leitura
            int entrada;
            scanf("%d", &entrada);
            
            fila[pos] = entrada;

            fila_copia[pos] = entrada;

            pos++;
            M--;
        }

        //ordenar fila
        qsort(fila, pos, sizeof(int), cmpfunc);

        //comparar filas
        for(int i = 0; i<pos; i++){
            if(fila_copia[i] == fila[i]){
                cont++;
            }
        }

        printf("%d\n", cont);

        free(fila);
        free(fila_copia);
        N--;
    }
    
    return 0;
}