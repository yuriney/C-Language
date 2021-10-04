#include <stdio.h>
int main()
{
    int v1[2];
    int y1[2];
    int sum = 0;
    int i = 0;

    for (i = 0; i < 2; i++)
    {
        printf("insira 2 numeros reais para v1\n");
        scanf("%d", &v1[i]);
    }

    for (i = 0; i < 2; i++)
    {
        printf("insira 2 numeros reais para y1\n");
        scanf("%d", &y1[i] );
    }

    for (i = 0; i < 2; i++)
    {
        int mtl = v1[i]*y1[i];
        sum += mtl;
    }
    printf("%d", sum);
    return 0;
}