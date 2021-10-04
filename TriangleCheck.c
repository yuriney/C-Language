#include<stdio.h>
int main(){

    int lado1,lado2,lado3;
    scanf("%d,%d,%d", &lado1,&lado2,&lado3);

    if((lado1+lado2)>lado3 || (lado1+lado3)>lado2 || (lado3+lado2)>lado1){
        
        if(lado1==lado2 && lado2==lado3){
            printf("este eh um triangulo: equilatero");
        }
        else if(lado1==lado2 || lado1==lado3 || lado2==lado3){
            printf("este eh um triangulo: Isosceles");
        }
        else if((lado1 != lado2) && (lado1 != lado3) && (lado3 != lado2)){
            printf("este eh um triangulo: Escaleno");
        }
        else{
            printf("fudeu");
        }
    }
    else{
        printf("Nao e um triangulo");
    }
    return 0;
}