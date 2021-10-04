#include<stdio.h>
int main(){
    int dia, diaf, hora, horaf, minuto, minutof, segundo, segundof;
    scanf("%d %d %d %d %d %d %d %d",&dia, &diaf, &hora, &horaf, &minuto, &minutof, &segundo, &segundof);
    dia = diaf - dia;
    hora = horaf - hora;
    minuto = minutof - minuto;
    segundo = segundof - segundo;
    
    if(hora < 0){
        hora += 24;
    }
    if (minuto < 0){
        minuto += 60;
    }
    if (segundo < 0){
        segundo += 60;
    }
    printf("%d dia(s)\n %d hora(s)\n %d minuto %d segundo(s)\n",dia, hora,minuto,segundo);
    return 0;
}