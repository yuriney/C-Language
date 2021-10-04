#include<stdio.h>
int main(){
    int v1[2];
    int y1[2];
    int v[2];
    int h = 0;
    int h1 = 0;
    int i;

    for (i=0;i<2;i++){
        printf("insira 2 numeros reais para v1\n");
        scanf("%d",&v1[i]);
    }

    for (i=0;i<2;i++){
        printf("insira 2 numeros reais para y1\n");
        scanf("%d",&y1[i]);
    }

    for (i=0;i<2;i++){
        v[i] = v1[i] * y1[i];
        h += v[i];
    }
    printf("%d",h);
    return 0;
}