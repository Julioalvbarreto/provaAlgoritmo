#include <stdio.h>
int main()
{

    int year, month, day;
    printf("escreva sua idade em anos, meses e dias\n");
    scanf("%d %d %d", &year, &month, &day);
    day = (day + (year * 365) + (month * 30));

    printf("sua idade em dias eh: %d\n", day);

    return 0;
}