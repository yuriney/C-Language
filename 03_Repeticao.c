#include <stdio.h>

int main(){
    int i, num, ct_pares = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%d",&num);
        if (num % 2 == 0)
        {
            ct_pares++;
        }
        
    }
    printf("%d numeros pares\n",ct_pares);
    
    return 0;
}