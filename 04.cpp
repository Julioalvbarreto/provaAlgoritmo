#include <stdio.h>

int main()
{
    int day, month, year;
    printf("digite sua idade em dias:\n");
    scanf("%d", &day);
    year = (day / 365);
    month = (day % 365) / 30;
    day = (day % 365) % 30;
    printf("anos: %d \nmeses: %d \ndias: %d\n", year, month, day);

    return 0;
}