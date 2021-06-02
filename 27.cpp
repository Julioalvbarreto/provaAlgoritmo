#include <stdio.h>
int main()
{

    float ipi, cod1, val1, quant1, cod2, val2, quant2, total;
    scanf("%f %f %f %f %f %f %f", &ipi, &cod1, &val1, &quant1, &cod2, &val2, &quant2, &total);

    total = ((val1 * quant1) + (val2 * quant2)) * ((ipi / 100) + 1);
    printf("%.2f", total);

    return 0;
}