#include <stdio.h>

int main()
{

    int p;
    int s;
    int e;
    int chegou;
    int ps = 0;

    scanf("%d", &p);
    scanf("%d", &s);
    scanf("%d", &e);

    while (ps < p)
    {
        chegou = ps + s;

        if (chegou >= p)
        {
            printf("%d saiu", chegou - s);
            break;
        }
        else
        {
            printf("%d %d\n", ps, chegou);
            ps = chegou - e;
        }
    }

    return 0;
}