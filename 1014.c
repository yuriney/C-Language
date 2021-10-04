#include <stdio.h>

int main() {

    int X;
    double Y;

    scanf("%d",&X);
    scanf("%lf",&Y);

    double media = X/Y;

    printf("%.3lf km/l \n", media);

    return 0;
}
