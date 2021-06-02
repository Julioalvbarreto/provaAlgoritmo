#include <stdio.h>
int main()
{

    int cod, quant;
    scanf("%d %d", &cod, &quant);
    if (cod == 100)
    {
        printf("%.2f", 1.20 * quant);
    }
    if (cod == 101)
    {
        printf("%.2f", 1.30 * quant);
    }
    if (cod == 102)
    {
        printf("%.2f", 1.50 * quant);
    }
    if (cod == 103)
    {
        printf("%.2f", 1.20 * quant);
    }
    if (cod == 104)
    {
        printf("%.2f", 1.30 * quant);
    }
    if (cod == 105)
    {
        printf("%.2f", 1.00 * quant);
    }
}