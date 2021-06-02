#include <stdio.h>
#include <math.h>

int main()
{

    int x1, x2, y1, y2, d;
    printf("digite os valores de x1, x2, y1 e y2:");
    scanf("\n%d %d %d %d", &x1, &x2, &y1, &y2);
    d = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    printf("o valor eh: %d\n", d);

    return 0;
}