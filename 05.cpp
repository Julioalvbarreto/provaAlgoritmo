#include <stdio.h>

int main()
{
    double A, B, C, x;

    printf("escrevas as notas: \n");
    scanf("%lf %lf %lf", &A, &B, &C);

    x = (A * 2.0 + B * 3.0 + C * 5.0) / 10;
    printf("MEDIA = %.1lf\n", x);

    return 0;
}