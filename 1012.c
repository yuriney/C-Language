#include <stdio.h>

int main() {
    int f1 = 1, f2 = 0, F = 0;

    while (F < 611) {
        printf("%d ", F);
        if (F == 0)        
            printf("1 ");
        F = f1 + f2;
        f2 = f1;
        f1 = F;
    }

    return 0;
}