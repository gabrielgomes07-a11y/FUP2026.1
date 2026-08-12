#include <stdio.h>

int main()
{

    int n, x, y, s;
    char c;

    scanf("%d", &n);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf(" %c", &c);
    scanf("%d", &s);

    if ((n < 0) || s > 1000)
    {
        printf("Valores invalidos");
        return 1;
    }

    else
    {

        switch (c)
        {
        case 'U':
            for (int i = 0; i < s; i++)
            {
                x = x - 1;

                if (x < 0)
                {
                    x = n - 1;
                }
            }

            printf("(%d, %d)\n", x, y);
            break;

        case 'D':
            for (int i = 0; i < s; i++)
            {
                y = y + 1;

                if (y >= n)
                {
                    y = 0;
                }
            }

            printf("(%d, %d)\n", x, y);
            break;

        case 'L':
            for (int i = 0; i < s; i++)
            {
                y = y - 1;

                if (y < 0)
                {
                    y = n - 1;
                }
            }

            printf("(%d, %d)\n", x, y);
            break;

        case 'R':
            for (int i = 0; i < s; i++)
            {
                x = x + 1;

                if (x >= n)
                {
                    x = 0;
                }
            }
            printf("(%d, %d)\n", x, y);
            break;

        default:

            printf("Comando invalido");
            break;
        }
    }

    return 0;
}