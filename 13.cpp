#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("o maior eh o primeiro");
    }
    else if (b > a && b > c)
    {
        printf("o maior eh o segundo");
    }
    else if (c > a && c > b)
    {
        printf("o maior eh o terceiro");
    }
    return 0;
}