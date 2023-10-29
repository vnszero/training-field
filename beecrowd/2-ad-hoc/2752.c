#include <stdio.h>
int main(){
    // Crie uma variável para armazenar 50 caracteres;
    char var[50];

    // Atribua a variável anterior a frase: "AMO FAZER EXERCICIO NO URI";
    sprintf(var, "AMO FAZER EXERCICIO NO URI");

    // Mostre na primeira linha o carácter <, o valor armazenado na variável com o formato "%s" e o carácter >;
    printf("<%s>\n", var);

    // Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%30s" e o carácter >;
    printf("<%30s>\n", var);

    // Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%.20s" e o carácter >;
    printf("<%.20s>\n", var);

    // Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%-20s" e o carácter >;
    printf("<%-20s>\n", var);

    // Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%-30s" e o carácter >;
    printf("<%-30s>\n", var);

    // Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%.30s" e o carácter >;
    printf("<%.30s>\n", var);

    // Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%30.20s" e o carácter >;
    printf("<%30.20s>\n", var);

    // Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%-30.20s" e o carácter >;
    printf("<%-30.20s>\n", var);

    return 0;
}