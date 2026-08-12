#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int nota[n], aux = 0, soma = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nota[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nota[j] > nota[j + 1])
            {
                aux = nota[j];
                nota[j] = nota[j + 1];
                nota[j + 1] = aux;
            }
        }
    }

    for (int i = 1; i < n - 1; i++)
    {

        soma += nota[i];
    }

    printf("%d", soma);

    return 0;
}