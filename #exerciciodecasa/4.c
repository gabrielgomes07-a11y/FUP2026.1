#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num = 0;

    scanf("%d", &num);

    int vet[num];
    int aux;

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}