#include <stdio.h>
int main()
{
    int V[10];
    int i;
    int c;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &V[i]);
        c = V[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (V[i] < 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", V[i]);
        }
    }
    return 0;
}