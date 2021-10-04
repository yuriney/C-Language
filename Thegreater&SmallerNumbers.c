#include<stdio.h>
int main(){

    int i;
    float nota =0;
    float maior, menor;

    for(i=0;i<3;i++){

        scanf("%f",&nota);
        
        if(i == 0){
            maior = nota;
            menor = nota;
        }

        else if(nota > maior){
            maior = nota;
        }


        else if(nota < menor){
            menor = nota;
        }
    }

    printf("Maior = [%.1f]\nMenor = [%.1f]",maior,menor);
    return 0;
}