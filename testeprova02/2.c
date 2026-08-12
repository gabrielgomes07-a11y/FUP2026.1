#include <stdio.h>

int main()
{
    float nota;
    scanf("%f", &nota);

    if ((nota >= 0) && (nota <= 10))
    {
        if (nota >= 7)
        {
            printf("Aprovado");
        }

        else if (nota < 4)
        {
            printf("Reprovado");
        }

        else
        {
            printf("O aluno esta de AF");
        }
    }

    return 0;
}