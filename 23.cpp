#include <stdio.h>

int main()
{

    int a, b, c, i;
    scanf("%d %d %d", &a, &b, &c);
    if (a > (b + c))
    {
        printf("%d %d %d\n", a, b, c);
    }
    else
    {
        printf("%d\n", b * c / 2);
    }

    return 0;
}