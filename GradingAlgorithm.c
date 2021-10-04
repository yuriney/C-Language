#include<stdio.h>
int main(){

    int i;
    float soma = 0, nota = 0;
    float media = 0;
    for(i=0;i<4;i++){

        scanf("%f",&nota);
        soma += nota;
    }

    media = soma/4;
    printf("media = %.1f", media);

    return 0;
}