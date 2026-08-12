#include <stdio.h>

int main()
{
    int n, aux = 0;

    scanf("%d", &n);

    for (int i = 1; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            aux += i;
        }
    }

    if (aux == n)
    {
        printf("E perfeito");
    }

    else
    {
        printf("Nao e perfeito");
    }

    return 0;
}