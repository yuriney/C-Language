#include <stdio.h>
int main()
{
    int idade = 1;
    int pessoas = 0;
    float media = 0;
    int menor = 0, maior = 0;

    while (idade != 0)
    {

        scanf("%d", &idade);
        if (idade == 0)
        {
            break;
        }

        pessoas++;
        media += idade;
        if (menor > idade)
        {
            menor = idade;
        }
        else if (maior < idade)
        {
            maior = idade;
        }
    }
    media = media / pessoas;
    printf("Pessoas [%d]\nMedia de idade [%.1f]\nmaior idade[%d]\nmenor idade[%d}", pessoas, media, maior, menor);
    return 0;
}