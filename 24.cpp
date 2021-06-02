#include <stdio.h>

int main()
{
    int dia, diafim, hora, horafim;

    scanf("%d", &dia);
    scanf("%d", &hora);
    scanf("%d", &diafim);
    scanf("%d", &horafim);

    hora = horafim - hora;
    dia = diafim - dia;

    if (hora < 0)
    {
        hora += 24;
        dia--;
    }

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);

    return 0;
}