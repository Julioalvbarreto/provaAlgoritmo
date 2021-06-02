#include <stdio.h>
int main()
{

    int x;
    float n1, n2, n3, media;
    printf("\n1 = aritmetica\n2 = ponderada\n3 = harmonica\n");
    scanf("%d", &x);
    scanf("\n%f %f %f", &n1, &n2, &n3);

    if (x == 1)
    {
        media = (n1 + n2 + n3) / 3;
        printf("%.1f\n", media);
    }
    else if (x == 2)
    {
        media = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10;
        printf("%.1f\n", media);
    }
    else if (x == 3)
    {
        printf("infelizmente o programa esta com provlemas nesse departamento, volte mais tarde :(\n");
    }

    return 0;
}