#include<stdio.h>
int main(){
    int Int;
    while(Int != 2002){
        scanf("%d", &Int);
        if (Int == 2002)
        {
            printf("Acesso Permitido\n");
        }
        else{
            printf("Senha Invalida\n");
        }
        
    }
    return 0;
}