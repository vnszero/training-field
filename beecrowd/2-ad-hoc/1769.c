#include <stdio.h>

int check_cpf(int cpf[]);
int main ()
{
    char cpf[11+3];
    int num[4];
    int cpf_only_numbers[11];

    while (scanf("%s", cpf) != -1)
    {
        int j = 0;
        for (int i = 0; i < 14; i++)
        {
            if (cpf[i] != '.' && cpf[i] != '-')
            {
                cpf_only_numbers[j] = cpf[i] - 48;
                j++;
            }
        }

        if (check_cpf(cpf_only_numbers))
        {
            printf("CPF valido\n");
        }
        else
        {
            printf("CPF invalido\n");
        }
    }
    return 0;
}

int check_cpf(int cpf[])
{
    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        sum += cpf[i] * (i+1);
    }
    sum %= 11;
    if (sum == 10)
    {
        sum = 0;
    }

    if (sum != cpf[9])
    {
        return 0;
    }

    sum = 0;

    for (int i = 0; i < 9; i++)
    {
        sum += cpf[i] * (10 - i - 1);
    }
    sum %= 11;
    if (sum == 10)
    {
        sum = 0;
    }

    if (sum != cpf[10])
    {
        return 0;
    }

    return 1;
}
