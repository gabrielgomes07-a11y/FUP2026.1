#include <stdio.h>

int main() {

    char ent;
    int i;
    scanf(" %c", &ent);
    
    switch (ent)
    {
    case '+':

        scanf("%d", &i);

        for (int j = 0; j <= 9; j++)
        {
            printf("%d + %d = %d\n", i, j, i + j);
        }
        
        break;

    case '-':

        scanf("%d", &i);

        for (int j = 0; j <= 9; j++)
        {
            printf("%d - %d = %d\n", i, j, i - j);
        }
        
        break;

    case '*':

        scanf("%d", &i);

        for (int j = 0; j <= 9; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        
        break;

    case '/':

        scanf("%d", &i);

        for (int j = 1; j <= 9; j++)
        {
            printf("%d / %d = %.2f\n", i, j, (float)i / j);
        }
        
        break;
    
    default:

        printf("Operação inválida.\n");
        break;
    }

    return 0;

}