#include<stdio.h>

int main(){
    int value;

    scanf("%d",&value);

    if(value > 0){
        printf("Positivo");
    }
    else if(value < 0){
        printf("Negativo");
    }
    else{
        printf("0 eh um numero neutro");
    }
    return 0;
}