#include <stdio.h>

int main() {

    char ent;
    scanf(" %c", &ent);

    switch (ent)
    {
    case '+':

        for (int i = 0; i <= 9; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d + %d = %d\n", i, j, i + j);
            }

            printf("\n");
        
        }
        
        break;

    case '-':

        for (int i = 0; i <= 9; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d - %d = %d\n", i, j, i - j);
            }

            printf("\n");
        
        }
        
        break;

    case '*':

        for (int i = 0; i <= 9; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d * %d = %d\n", i, j, i * j);
            }

            printf("\n");
        
        }
        
        break;

    case '/':

        for (int i = 1; i <= 9; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d / %d = %.2f\n", i, j, (float)i / j);
            }

            printf("\n");
        
        }
        
        break;
    
    default:

        printf("Operação inválida.\n");
        break;
    }

}