#include <stdio.h>
#include <math.h>

int contar_algarismos(int n)
{
    int count = 0;
    if (n == 0)
        return 1;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

void invertidos(int n)
{
    int invertido = 0;
    int count = contar_algarismos(n);

    if (n == 0)
    {
        printf("0 ");
        return;
    }

    while (n != 0)
    {
        int digit = n % 10;
        printf("%d ", digit);
        invertido = invertido + digit * (int)pow(10, count - 1);
        count--;
        n = n / 10;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    invertidos(n);
    printf("\n");
    return 0;
}