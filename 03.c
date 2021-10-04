#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6, total = 0;
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);

    if (n1 % 2 == 0)
    {
        total += 1;
    }
    if (n2 % 2 == 0)
    {
        total += 1;
    }
    if (n3 % 2 == 0)
    {
        total += 1;
    }
    if (n4 % 2 == 0)
    {
        total += 1;
    }
    if (n5 % 2 == 0)
    {
        total += 1;
    }
    if (n6 % 2 == 0)
    {
        total += 1;
    }
    printf("%d valores pares\n", total);

    return 0;
}