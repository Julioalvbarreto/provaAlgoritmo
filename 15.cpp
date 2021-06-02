#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    if (x >= 0)
    {
        printf("Positivo e ");
    }
    if (x < 0)
    {
        printf("Negativo e ");
    }
    if (x % 2 == 0)
    {
        printf("par\n");
    }
    if (x % 2 != 0)
    {
        printf("impar\n");
    }

    return 0;
}