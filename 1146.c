#include <stdio.h>
int main()
{
    int num, ct = 1;
    while (ct == 1)
    {
        scanf("%d",&num);
        if (num <= 0)
        {
            break;
        }
        int i;
        for (i = 1; i <= num; i++)
        {
/*             if (i == 1)
            {
                printf("1\n");
            } */

                printf("%d", i);
                if (i != num)
                {
                printf(" ");
                }
        }
        printf("\n");
       
        
    }
    return 0;
}