#include <stdio.h>
#include <stdlib.h>

/*int polinomio(int num, int base_de_origem)
{
    int decimal = 0;
    int base = 1;

    while (num > 0)
    {
        int digito = num % 10;
        decimal += digito * base;
        base *= base_de_origem;
        num /= 10;
    }

    return decimal;
}*/

void conversor1(int num, int base)
{
    int vetnum[255];
    int count = 0;

    if (num == 0)
    {
        printf("0\n");
        return;
    }

    while (num > 0)
    {
        vetnum[count] = num % base;
        num = num / base;
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        if (vetnum[i] >= 10)
            printf("%c", vetnum[i] + 55);
        else
            printf("%d", vetnum[i]);
    }

    printf("\n");
}

int main()
{
    char number1[255];

    int number, base_origem, base_destino;

    scanf("%s", number1);

    scanf("%d %d", &base_origem, &base_destino);

    number = strtol(number1, NULL, base_origem); // converte string em bases

    conversor1(number, base_destino);

    return 0;
}