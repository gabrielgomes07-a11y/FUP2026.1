#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long num[n + 1], mostra_num;

    if (n >= 1)
        num[1] = 1;
    if (n >= 2)
        num[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        num[i] = num[i - 1] + num[i - 2];
    }

    mostra_num = num[n];

    printf("%lld", mostra_num);

    return 0;
}