#include <stdio.h>
int main()
{

    float n1, n2, n3, nota;
    int cod;
    scanf("%d", &cod);
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        nota = ((n1 * 4) + (n2 * 3) + (n3 * 3)) / 10;
        printf("%d\n", cod);
        printf("notas: %.1f, %.1f e %.1f\n", n1, n2, n3);
        printf("media: %.1f\n", nota);
        if (nota >= 5)
        {
            printf("APROVADO\n");
        }
        else
        {
            printf("REPROVADO\n");
        }
    }
    if (n2 > n1 && n2 > n3)
    {
        nota = ((n2 * 4) + (n1 * 3) + (n3 * 3)) / 10;
        printf("%d\n", cod);
        printf("notas: %.1f, %.1f e %.1f\n", n1, n2, n3);
        printf("media: %.1f\n", nota);
        if (nota >= 5)
        {
            printf("APROVADO\n");
        }
        else
        {
            printf("REPROVADO\n");
        }
    }
    if (n3 > n2 && n3 > n1)
    {
        nota = ((n3 * 4) + (n2 * 3) + (n1 * 3)) / 10;
        printf("%d\n", cod);
        printf("notas: %.1f, %.1f e %.1f\n", n1, n2, n3);
        printf("media:%.1f\n", nota);
        if (nota >= 5)
        {
            printf("APROVADO\n");
        }
        else
        {
            printf("REPROVADO\n");
        }
    }

    return 0;
}