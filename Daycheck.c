#include<stdio.h>
int main(){
    int data;
    int dia;

    scanf("%d",&data);
    if(data == 1){
        printf("Domingo");
    }
    else if(data == 2){
        printf("Segunda");
    }
    else if(data == 3){
        printf("Terça");
    }
    else if(data == 4){
        printf("Quarta");
    }
    else if(data == 5){
        printf("Quinta");
    }
    else if(data == 6){
        printf("Sexta");
    }
    else if(data == 7){
        printf("Sabado");
    }
    return 0;
}