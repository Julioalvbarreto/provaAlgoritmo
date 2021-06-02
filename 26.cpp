#include <stdio.h>
int main()
{

    int n, cem, cinq, vinte, dez, cinco, dois, um;
    scanf("%d", &n);

    cem = n / 100;
    n = n - cem * 100;

    cinq = n / 50;
    n = n - cinq * 50;

    vinte = n / 20;
    n = n - vinte * 20;

    dez = n / 10;
    n = n - dez * 10;

    cinco = n / 5;
    n = n - cinco * 5;

    dois = n / 2;
    n = n - dois * 2;

    um = n;

    printf("\n %d notas de 100", cem);
    printf("\n %d notas de 50", cinq);
    printf("\n %d notas de 20", vinte);
    printf("\n %d notas de 10", dez);
    printf("\n %d notas de 5", cinco);
    printf("\n %d notas de 2", dois);
    printf("\n %d notas de 1", um);

    printf("\n\n");

    return 0;
}