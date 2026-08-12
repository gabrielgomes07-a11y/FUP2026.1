#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n], venc = 0, player[n], aux = 0, desc = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        player[i] = i;

        if ((a[i] < 10) && (b[i] < 10))
        {
            desc++;
        }
    }

    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - j - 1; k++)
        {
            int idx1 = player[k];
            int idx2 = player[k + 1];
            int valid1 = (a[idx1] >= 10) || (b[idx1] >= 10);
            int valid2 = (a[idx2] >= 10) || (b[idx2] >= 10);

            if ((!valid1 && valid2) ||
                (valid1 == valid2 &&
                 (((a[idx1] >= b[idx1] ? a[idx1] - b[idx1] : b[idx1] - a[idx1]) >
                   (a[idx2] >= b[idx2] ? a[idx2] - b[idx2] : b[idx2] - a[idx2]))) ||
                  (((a[idx1] >= b[idx1] ? a[idx1] - b[idx1] : b[idx1] - a[idx1]) ==
                    (a[idx2] >= b[idx2] ? a[idx2] - b[idx2] : b[idx2] - a[idx2])) &&
                   idx1 > idx2))))
            {
                aux = player[k];
                player[k] = player[k + 1];
                player[k + 1] = aux;
            }
        }
    }

    if (desc == n)
    {
        printf("sem ganhador");
    }

    else
    {
        printf("%d", player[0]);
    }

    return 0;
}