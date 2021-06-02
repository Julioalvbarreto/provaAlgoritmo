#include <stdio.h>
int main()
{

    int a, b, c, d, e, f, x, y;

    printf("digites os valores para a, b, c, d, e e f");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    x = (c * e) - (b * f) / (a * e) - (b * d);
    y = (a * f) - (c * d) / (a * e) - (b * d);

    printf("x e y sao respectivamente: %d %d", x, y);

    return 0;
}