#include<stdio.h>

int main(){
    float alt, peso;
    double imc;
    scanf("%f %f", &alt, &peso);
    imc = (peso/(alt*alt))*10000;

    if(imc <= 18.5){
        printf("Seu IMC: %0.2lf - Magreza\n", imc);
    }
    else if(imc >= 18.5 && imc < 25){
        printf("Seu IMC: %0.2lf - Saudavel\n", imc);
    }
    else if(imc >= 25.0 && imc < 30){
        printf("Seu IMC: %0.2lf - Sobrepeso\n", imc);
    }
    else if(imc >= 30.0 && imc < 35){
         printf("Seu IMC: %0.2lf - Obesidade moderada\n", imc);
    }
     else if(imc >= 35.0 && imc < 40){
         printf("Seu IMC: %0.2lf - Obesidade clinica\n", imc);
    }
    else if(imc >= 40) {
         printf("Seu IMC: %0.2lf - Obesidade morbida\n", imc);
    }
    
    return 0;
}
