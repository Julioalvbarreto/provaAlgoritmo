#include <stdio.h>

int main()
{
    float h;
    char sexo = {1};

    scanf("%f", &h);
    scanf("%s", &sexo);

    if (sexo == 'M')
    {
        printf("O seu peso ideal eh: %.1f\n", (72.7 * h) - 58);
    }
    else
    {
        printf("O seu peso ideal eh: %.1f\n", (62.1 * h) - 44.7);
    }

    return 0;
}