#include <stdio.h>

int main()
{
    int v[10], v1[10], v2[10];
    int i;

    for (i = 0; i < 10; i++)
    {

        scanf("%d", &v[i]);
    }

    for (i = 0; i < 10; i++)
    {

        if ((v[i] % 2) != 0)
        {
            v1[i] = v[i];
            
        }
        if ((v[i] % 2) == 0)
        {
            v2[i] = v[i];
            
        }
    }
    for (i = 0; i < 10; i++)
    {
        if ((v[i] % 2) != 0)
        {
            printf("v1 impares = %d\n", v1[i]);
        }
    }
    for (i = 0; i < 10; i++)
    {
        if ((v[i] % 2) == 0)
        {
            printf("v1 pares = %d\n", v2[i]);
        }
    }
    return 0;
}