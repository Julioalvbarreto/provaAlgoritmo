#include <stdio.h>
int main()
{
    float p;
    scanf("%f", &p);

    if (p >= 0.3 && p < 0.4)
    {
        printf("as industrias do 1o grupo sao intimadas a suspenderem suas atividades\n");
    }
    else if (p >= 0.4 && p < 0.5)
    {
        printf("as empresas do 1o e 2o grupo sao intimadas a suspenderem suas atividades\n");
    }
    else if (p >= 0.5)
    {
        printf("todos os 3 grupos devem paralisar suas atividades");
    }
    else
    {
        printf("tudo tranquilo\n");
    }

    return 0;
}