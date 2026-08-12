#include <stdio.h>

int main()
{
    int n, lim_i, lim_s;

    scanf("%d %d %d", &n, &lim_i, &lim_s);

    int vet[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if ((vet[i] >= lim_i) && (vet[i] <= lim_s))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}