#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("\n%d %d %d\n", a, b, c);

    if (a > b && a > c)
    {
        printf("o maior eh a");
    }
    else if (b > a && b > c)
    {
        printf("o maior eh b");
    }
    else if (c > a && c > b)
    {
        printf("o maior eh c");
    }
    return 0;
}