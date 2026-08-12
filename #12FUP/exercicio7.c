#include <stdio.h>

int main()
{
    int n;
    int count = 2;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    while (count <= n)
    {
        printf("%d ", count);
        count++;
    }

    return 0;
}
