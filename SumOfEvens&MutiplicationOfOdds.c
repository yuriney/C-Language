#include <stdio.h>

int main(){

    int num1, num2, soma = 0, mutiplicacao = 1,i=0;

    scanf("%d %d", &num1, &num2);

    while(num1 <= num2){
        i = num1;

        if (i % 2 == 0){

            soma += i;

        }

        else{

            mutiplicacao *= i;

        }
        num1++;
    }

    printf("Soma dos pares: %d \nmutiplicacao dos impares: %d\n", soma,mutiplicacao);

    return 0;
}