#include <stdio.h>

int num_primo(int a)
{

    int cond1, cond2, cond3, cond4, cond5;
    int primo;

    cond1 = a >= 0;
    cond2 = a % 2 != 0;
    cond3 = (a % 3 == 0) || (a % 7 == 0);
    cond4 = (a / 100) > 0.1;
    cond5 = (a % 10 != 3) && (a % 10 != 7);

    if (cond1 && cond2 && cond3 && cond4 && cond5)
    {

        primo = 1;
    }

    else
    {
        primo = 0;
    }

    return primo;
}

int main()
{
    int num;
    scanf("%d", &num);

    printf("%d", num_primo(num));

    return 0;
}