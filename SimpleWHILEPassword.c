#include<stdio.h>
int main(){

    int senha;
    
    scanf("%d",&senha);
    while(senha != 5555){

        printf("Senha incorreta\nTente novamente\n");
        scanf("%d",&senha);
    }
    if(senha == 5555){
        printf("senha correta");
    }

    return 0;
}