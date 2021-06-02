#include <stdio.h>
int main()
{

    int dist, imp;
    float car;
    printf("digite o valor do carro: \n");
    scanf("%f", &car);

    dist = car * 0.28;
    imp = car * 0.45;

    printf("o valor final eh: %.2f\n", car + dist + imp);

    return 0;
}