#include <stdio.h>
#include <math.h>

int formula_maluca(int A[], int n)
{
    int valor = 0;

    for (int i = 0; i < n / 2; i++)
    {
        valor += pow(A[i] - A[n - 1 - i], 2);
    }

    return valor;
}

int main()
{
    int num;
    scanf("%d", &num);

    int vet[num], valor_maluco = 0;

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &vet[i]);
    }

    valor_maluco = formula_maluca(vet, num);

    printf("%d", valor_maluco);

    return 0;
}