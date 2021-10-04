#include <stdio.h>
int main()
{
    int x, y, contador = 0, impares = 0;
    scanf("%d %d", &x, &y);
    contador = (y + 1);
    while (contador < x)
    {
        if (contador % 2 != 0)
        {
            impares += y;
        }
        y += 1;

        contador++;
    }
    printf("%d", impares);
    return 0;
}