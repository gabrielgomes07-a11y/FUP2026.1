#include <stdio.h>
int main()
{
    char text[101];
    scanf("%[^\n]", text);

    int ind, qtd, count = 0;
    scanf("%d %d", &ind, &qtd);

    char saida[100];

    for (int i = 0; text[i] != '\0'; i++)
    {
        count++;
    }

    if (ind < 0)
    {
        ind = 0;
    }
    if (qtd < 0)
    {
        qtd = 0;
    }

    int end = ind + qtd;
    if (end > count)
    {
        end = count;
    }

    int j = 0;
    for (int i = ind; i < end; i++, j++)
    {
        saida[j] = text[i];
    }
    saida[j] = '\0';

    printf("%s", saida);

    return 0;
}