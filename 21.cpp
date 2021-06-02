#include <stdio.h>
#include <string.h>

int main()
{

    char cod[10];
    int quant;

    scanf("%s", cod);
    scanf("%d", &quant);

    if (strcmp(cod, "ABCD") == 0)
    {
        printf("%.2f\n", 5.30 * quant);
    }
    else if (strcmp(cod, "XYPK") == 0)
    {
        printf("%.2f\n", 6.00 * quant);
    }
    else if (strcmp(cod, "KLMP") == 0)
    {
        printf("%.2f\n", 3.20 * quant);
    }
    else if (strcmp(cod, "QRST") == 0)
    {
        printf("%.2f\n", 2.50 * quant);
    }
    else
    {
        printf("CODIGO INVALIDO\n");
    }

    return 0;
}