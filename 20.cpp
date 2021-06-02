#include <stdio.h>
int main()
{

    int quant, cod;
    scanf("%d %d", &cod, &quant);

    switch (cod)
    {
    case 1001:
        printf("%.2f\n", 5.32 * quant);
        break;

    case 1324:
        printf("%.2f\n", 6.45 * quant);
        break;

    case 6548:
        printf("%.2f\n", 2.37 * quant);
        break;

    case 987:
        printf("%.2f\n", 5.32 * quant);
        break;

    case 7623:
        printf("%.2f\n", 6.45 * quant);
        break;
    }
    return 0;
}