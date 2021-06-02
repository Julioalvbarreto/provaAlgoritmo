#include <stdio.h>
#include <string.h>

int main()
{

    int cod;            //codigo
    long int mon, mon2; // money, new money
    scanf("%d %ld", &cod, &mon);

    switch (cod)
    {
    case 101:
        printf("antigo salario: %ld reais\n", mon);
        mon2 = mon + (mon * 0.1);
        printf("novo salario: %ld reais\n", mon2);
        printf("a diferenca de ambos eh: %ld reais\n", mon2 - mon);
        break;
    case 102:
        printf("antigo salario: %ld reais\n", mon);
        mon2 = mon + (mon * 0.2);
        printf("novo salario: %ld reais\n", mon2);
        printf("a diferenca de ambos eh: %ld reais\n", mon2 - mon);
        break;
    case 103:
        printf("antigo salario: %ld reais\n", mon);
        mon2 = mon + (mon * 0.3);
        printf("novo salario: %ld reais\n", mon2);
        printf("a diferenca de ambos eh: %ld reais\n", mon2 - mon);
        break;
    default:
        printf("antigo salario: %ld reais\n", mon);
        mon2 = mon + (mon * 0.4);
        printf("novo salario: %ld reais\n", mon2);
        printf("a diferenca de ambos eh: %ld reais\n", mon2 - mon);
    }

    return 0;
}