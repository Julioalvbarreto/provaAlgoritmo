#include <stdio.h>
int main()
{

    int day, dayf, min, minf, hor, horf;
    scanf("%d %d %d", &day, &min, &hor);    //iicial
    scanf("%d %d %d", &dayf, &minf, &horf); //final
    hor = horf - hor;
    min = minf - min;
    printf("comecou dia %d\n terminou dia %d\n %d hora(s)\n %d minuto(s)\n", day, dayf, hor, min);

    return 0;
}