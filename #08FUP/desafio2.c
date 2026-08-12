#include <stdio.h>
#include <math.h>


int main()
{

    float ap1, ap2, t, nota, AF, notaf;
    int afv = 0;

    printf("Digite suas notas separadamente:\n");
    scanf("%f %f %f", &ap1, &ap2, &t);

    nota = (ap1+ap2+t)/3;

    if (nota >= 7)
    {
        printf("Aprovado.");
    }
    else{
        printf(nota >= 4 && nota < 7?"Em avaliacao final." : "Reprovado.");

    }

    if (nota >= 4 && nota <7)
    {
        afv = 1;

        if (afv == 1)
        {
            printf("Digite sua nota da AF:\n");
            scanf("%f", &AF);
            if (AF < 4)
            {
                printf("Voce esta reprovado:(.");
            }
            else{

                printf("Voce esta aprovado em af");
                afv = afv + 1;
            }
        

        }

    }

    if (afv == 2)
    {
        notaf = (nota + AF)/2;
        if (notaf > 5 )
        {
           printf(" e esta aprovado por media final minima.");
        }
        else{

            printf(" mas voce esta reprovado por media minima.");

        }
        
    }
    
    
    


    return 0;
}
