#include <stdio.h>
int main()
{

    int a, b, c, R, S, D;
    printf("escreva os valores de a, b, c:\n");
    scanf("%d %d %d", &a, &b, &c);
    S = (b + c) * (b + c);
    R = (a + b) * (a + b);
    D = (R + S) / 2;

    printf("o calculo eh %d\n", D);

    return 0;
}