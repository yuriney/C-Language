#include<stdio.h>
int main(){
    
    int X,i, impares = 0;
    scanf("%d",&X);

    for(impares=0; impares <6;impares++){
        if(X % 2 != 0){
            printf("%d\n",X);
        }else{
            impares--;
        }
        X++;
    }

 /*    while (impares < 6)
    {
        if (X % 2 != 0)
        {
            printf("%d\n",X);
            impares+=1;
        }
        X++;
    }
     */
    return 0;
}