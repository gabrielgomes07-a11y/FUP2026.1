#include <stdio.h>

int main()
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d + %d = %d\n", i, j, i + j);
        }

        printf("\n");
        
    }
    
    return 0;
}
