#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int T[n], jedi = 0, sith = 0;

    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &T[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            if (i <= (n / 2))
            {
                jedi += T[i];
            }

            else
            {
                sith += T[i];
            }
        }

        if (jedi > sith)
        {
            printf("Jedi");
        }
        else if (jedi == sith)
        {
            printf("Empate");
        }
        else
        {
            printf("Sith");
        }
    }

    else
    {
        printf("Luta injusta.");
    }

    return 0;
}