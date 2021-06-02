#include <stdio.h>
int main()
{

    int x, cred;
    scanf("%d", &x);

    if (x > 0 && x <= 200)
    {
        printf("%d\n", x);
        printf("Nenhum credito\n");
    }
    if (x >= 201 && x <= 400)
    {
        printf("%d\n", x);
        x += x * 0.2;
        printf("%d\n", x);
    }
    if (x > 400 && x <= 600)
    {
        printf("%d\n", x);
        x += x * 0.3;
        printf("%d\n", x);
    }
    if (x > 601)
    {
        printf("%d\n", x);
        x += x * 0.4;
        printf("%d\n", x);
    }

    /*
    switch (x)
    {
    case x > 0 && x < 200:
        printf("%d\n", x);
        printf("Nenhum credito\n");
        break;

    case x > 201 && x < 400:
        printf("%d", x);
        printf("%d", x * 0.2);
        break;

    case x > 400 && x < 600:
        printf("%d", x);
        printf("%d", x * 0.3);
        break;

    case x > 601:
        printf("%d", x);
        printf("%d", x * 0.4);
        break;
    }*/
    return 0;
}