#include <stdio.h>

int main()
{

    int C, A;

    scanf("%d %d", &C, &A);

    int div = A / (C - 1);

    int resultt = div * (C - 1);
    int resultf = div;

    if (resultt < A)
    {
        resultf = div + 1;
    }

    printf("%d", resultf);

    return 0;
}