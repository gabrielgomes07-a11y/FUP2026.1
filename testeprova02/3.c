#include <stdio.h>

int main()
{
    float x, pow = 0;
    int n;

    scanf("%f %d", &x, &n);

    if (n == 0)
    {
        if (x == 0)
        {
            printf("Indeterminado");
        }

        else
        {
            pow = 1;
        }
    }

    else if (n == 1)
    {
        pow = x;
    }

    else if (n == 2)
    {
        pow = x * x;
    }

    else
    {
        pow = x * x;

        for (int i = 3; i < n; i++)
        {

            pow = pow * x;
        }
    }

    printf("%.2f", pow);

    return 0;
}