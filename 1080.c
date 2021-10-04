#include<stdio.h>
int main(){
    int While =0, For =0, Else=0, Printf;
    for(For=1; For < 101; For++){
        scanf("%d", &Printf);
        if (Printf > While)
        {
           While = Printf;
           Else = For;
        }
        
    }
    printf("%d,%d\n", While, Else);
    return 0;
}