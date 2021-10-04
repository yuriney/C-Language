#include <stdio.h>

int main(void) {
  int num1 = 0;
  int num2 = 1;
  int soma = 0;
  int numFat = 500;

  int i = 0;
  printf("0 1");
  while(soma < 500){
    printf(" %d", soma);
    soma = num1 + num2;

    num1 = num2;
    num2 = soma;
    i++;
  }
  printf("\n");
  return 0;
}
