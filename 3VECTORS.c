#include<stdio.h>
int main(){
    int a[10];
    int b[10];
    int c[10];
    int i;


    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
        c[i] = a[i]-b[i];
    }
    for(i=0;i<10;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}