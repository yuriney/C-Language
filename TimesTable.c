#include<stdio.h>
int main(){

    int i;
    int num;

    printf("insira numero da tabuada");
    scanf("%d",&num);

    printf("tabuada de %d:\n",num);

    for(i=0;i<=10;i++){
        
        printf("%d X %d = %d\n",num,i,num*i);
        
    }
    return 0;
}