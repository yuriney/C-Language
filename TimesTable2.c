#include<stdio.h>
int main(){

    int i=0;
    int num;

    printf("insira numero da tabuada\n");
    scanf("%d",&num);

    printf("tabuada de %d:\n",num);

    while(i <= 10){
        
        printf("%d X %d = %d\n",num,i,num*i);
        i++;
    }
    return 0;
}