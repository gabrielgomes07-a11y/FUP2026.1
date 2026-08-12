#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fatores(int *num, int vet[])
{
    char linha[256];
    *num = 0;

    fgets(linha, sizeof(linha), stdin);

    char *token = strtok(linha, " \t\n");
    while (token != NULL)
    {
        sscanf(token, "%d", &vet[*num]);
        (*num)++;
        token = strtok(NULL, " \t\n");
    }
}

int main()
{
    int num;
    int vet[100];
    int aux;

    fatores(&num, vet);

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