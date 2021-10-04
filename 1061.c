#include <stdio.h>

int main (){
    long long int d1 = 0,h1= 0,m1= 0,s1= 0,t1= 0;
    long long int d2= 0, h2= 0, m2= 0, s2= 0, t2= 0;
    long long int dif= 0, ds= 0, h= 0,j= 0;
    long long int df= 0, hf= 0, mf= 0, sf= 0;
    scanf("%llu %llu %llu %llu", &d1, &h1, &m1, &s1);
    scanf("%llu %llu %llu %llu", &d2, &h2, &m2, &s2);
    t1=(86400-((h1 * 3600)+(m1 * 60)+s1));
    t2=((h2 * 3600)+(m2 * 60)+s2);
    dif = (d2 - d1);
        if( dif > 2){
            t1=(86400-((h1 * 3600)+(m1 * 60)+s1));
            t2=((h2 * 3600)+(m2 * 60)+s2);
            h = (dif - 1);
            j = h * 86400;
            ds = j + t1 + t2;
            df = (ds/86400);
            hf = (ds%86400)/3600;
            mf = ((ds%86400)%3600)/60;
            sf = (((ds%86400)%3600)%60);
         printf("%llu dia(s)\n%llu hora(s)\n%llu minuto(s)\n%llu segundos(s)\n",df,hf,mf,sf);
        }
        else if(dif == 1){
            t1=(86400-((h1 * 3600)+(m1 * 60)+s1));
            t2=((h2 * 3600)+(m2 * 60)+s2);
            ds = t1 + t2;
            df = (ds/86400);
            hf = (ds%86400)/3600;
            mf = ((ds%86400)%3600)/60;
            sf = (((ds%86400)%3600)%60);
         printf("%llu dia(s)\n%llu hora(s)\n%llu minuto(s)\n%llu segundos(s)\n",df,hf,mf,sf);
        }
        else if (dif == 2){
            t1=(86400-((h1 * 3600)+(m1 * 60)+s1));
            t2=((h2 * 3600)+(m2 * 60)+s2);
            ds = t1 + t2 + 86400;
            df = (ds/86400);
            hf = (ds%86400)/3600;
            mf = ((ds%86400)%3600)/60;
            sf = (((ds%86400)%3600)%60);
         printf("%llu dia(s)\n%llu hora(s)\n%llu minuto(s)\n%llu segundos(s)\n",df,hf,mf,sf);
        }
        else if(dif == 0){
            t1=((h1 * 3600)+(m1 * 60)+s1);
            t2=((h2 * 3600)+(m2 * 60)+s2);
            ds = t2 - t1;
            df = (ds/86400);
            hf = (ds%86400)/3600;
            mf = ((ds%86400)%3600)/60;
            sf = (((ds%86400)%3600)%60);
            /* printf("%llu %llu %llu\n",ds, t2, t1); */
         printf("%llu dia(s)\n%llu hora(s)\n%llu minuto(s)\n%llu segundos(s)\n",df,hf,mf,sf);
        }
    return 0;
}