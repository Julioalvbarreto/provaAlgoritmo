#include <stdio.h>

int main()
{

    int i, a, b, c;
    scanf("%d %d %d %d", &i, &a, &b, &c);

    if (i == 1)
    {
        if (a > b && a > c && b > c)
        {
            printf("%d %d %d\n", c, b, a);
        }

        else if (a > b && a > c && c > b)
        {
            printf("%d %d %d\n", b, c, a);
        }

        else if (b > a && b > c && a > c)
        {
            printf("%d %d %d\n", c, a, b);
        }

        else if (b > a && b > c && c > a)
        {
            printf("%d %d %d\n", a, c, b);
        }

        else if (c > a && c > b && b > a)
        {
            printf("%d %d %d\n", a, b, c);
        }

        else if (c > a && c > b && a > b)
        {
            printf("%d %d %d\n", b, a, c);
        }
    }

    if (i == 2)
    {

        if (a < b && a < c && b < c)
        {
            printf("%d %d %d\n", c, b, a);
        }

        else if (a < b && a < c && c < b)
        {
            printf("%d %d %d\n", b, c, a);
        }

        else if (b < a && b < c && a < c)
        {
            printf("%d %d %d\n", c, a, b);
        }

        else if (b < a && b < c && c < a)
        {
            printf("%d %d %d\n", a, c, b);
        }

        else if (c < a && c < b && b < a)
        {
            printf("%d %d %d\n", a, b, c);
        }

        else if (c < a && c < b && a < b)
        {
            printf("%d %d %d\n", b, a, c);
        }
    }

    if (i == 3)
    {

        if (a < b && a < c && b < c)
        {
            printf("%d %d %d\n", b, c, a);
        }

        else if (a < b && a < c && c < b)
        {
            printf("%d %d %d\n", c, b, a);
        }

        else if (b < a && b < c && a < c)
        {
            printf("%d %d %d\n", a, c, b);
        }

        else if (b < a && b < c && c < a)
        {
            printf("%d %d %d\n", c, a, b);
        }

        else if (c < a && c < b && b < a)
        {
            printf("%d %d %d\n", b, a, c);
        }

        else if (c < a && c < b && a < b)
        {
            printf("%d %d %d\n", a, b, c);
        }
    }

    return 0;
}