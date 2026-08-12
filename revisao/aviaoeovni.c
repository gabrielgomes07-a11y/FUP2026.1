#include <stdio.h>

int main()
{

    int N, D, A, S = 0;

    scanf("%d %d %d", &N, &D, &A);

    while (A != D)
    {
        A++;
        S++;

        if (A > N)
        {
            A = 1;
        }
    }

    printf("%d", S);

    return 0;
}