/*
6. Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em
segundos e mostre-o expresso em horas, minutos e segundos.
*/
#include <stdio.h>
int main()
{

    int seg, min, hor;
    printf("digite a duracao do evento em segundos: \n");
    scanf("%d", &seg);
    hor = seg / 3600;
    seg = seg % 3600;
    min = seg / 60;
    seg = seg % 60;
    printf("%d:%d:%d", hor, min, seg);

    return 0;
}