#include <stdio.h>
int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        if (x % y == 0)
        {
            printf("sao multiplos");
        }
        else
        {
            printf("nao sao multiplos");
        }
    }
    else
    {
        if (y % x == 0)
        {
            printf("sao multiplos");
        }
        else
        {
            printf("nao sao multiplos");
        }
    }
    return 0;
}