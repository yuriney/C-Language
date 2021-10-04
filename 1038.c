#include <stdio.h>

int main(){
    int id, qntd;
    double preco;
    double total;
    scanf("%d %d",&id,&qntd);
    

    if(id == 1){
        preco = 4.0;
    }
     if(id == 2){
        preco = 4.5;
    }
     if(id == 3){
        preco = 5;
    }
     if(id == 4){
        preco = 2;
    }
     if (id == 5){
        preco = 1.5;
    }
    
     total = preco * qntd;
    printf("Total: R$%.2lf\n",total);
    return 0;
}