#include<stdio.h>
#include <string.h>
#include <ctype.h> 
int main(){

    char horario[11];
    char cp[11];

    scanf("%s", horario);
    int i = 0;
    while (i <= strlen(horario))
    {
        cp[i] = (char) toupper(horario[i]);
        i++;
    }
    

    if((strcmp("MATUTINO",cp) == 0) ||(strcmp("M",cp) == 0) ){
        printf("Bom Dia!");
    }
    else if((strcmp("VESPERTINO",cp) == 0) ||(strcmp("V",cp) == 0) ){
        printf("Boa tarde!");
    }
    else if((strcmp("NOTURNO",cp) == 0) ||(strcmp("N",cp) == 0) ){
        printf("Boa noite!");
    }
    return 0;
}