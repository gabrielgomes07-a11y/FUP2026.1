#include <stdio.h>

int main()
{
    float nota;
    

    printf("Digite sua nota:\n");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10)
    {
        printf("nota invalida");
        return 0;
    }
    
    int a = (int)nota;
    
    switch (a)
    {
        case 10:
        case 9:{
            printf("aprovado com indice excelente.");
            break;
        }
        case 8:
        case 7:{
            printf("aprovado com indice bom.");
            break;
        }

        case 6:
        case 5:{
            printf("aprovado com indice regular.");
            break;
        }
        default:
            printf("reprovado.");
            break;
    }
    
    return 0;
}
