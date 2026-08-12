#include <stdio.h>

int main() {

    int n;
    int entrada;
    int max;
    int min;
    

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &entrada);

    for (int i = 1; i <= entrada; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (i == 1) {
            max = n;
            min = n;
        }
        if (n > max)
        {
            max = n;
        }

        if (n < min)
        {
            min = n;
        }
    }

    printf("O maior numero e: %d, e o menor numero e: %d\n", max, min);
    
    return 0;
}