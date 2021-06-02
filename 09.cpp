#include <stdio.h>
int main()
{

    float n1, n2, n3, media;
    printf("digite as 3 notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    if (media >= 6)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado");
    }
    return 0;
}