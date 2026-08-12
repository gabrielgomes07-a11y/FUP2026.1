#include <stdio.h>

int main()
{
    char cand;
    int counta = 0;
    int countb = 0;
    int nulos = 0;
    int votos = 0;

    do
    {
        printf("Deseja votar no candidato A ou B?\n");
        scanf(" %c", &cand);

        switch (cand)
        {
        case 'a':

            counta++;
            votos++;
            break;

        case 'b':
            
            countb++;
            votos++;
            break;

        case 's':
            votos = votos;
            break;

        default:
            nulos++;
            votos++;
            break;
        }

    }
    while (cand != 's');



    printf("Votos Validos:%d\n", votos);
    printf("A quantidade de votos dos candidatos:\n A:%d\n B:%d\n NULOS:%d\n", counta, countb, nulos);
    

    if (counta > countb && counta > (votos/2))
    {
        printf("O candidato eleito e A.");
    }

    else if (countb > counta && countb > (votos/2))
    {
        printf("O candidato eleito e B.");
    }

    else
    {
        printf("Nenhum candidato eleito. proximo pleito sera marcado.");
    }
    
    
    return 0;
}
