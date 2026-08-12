#include <stdio.h>


int main()
{
    int a, b, c, AUX;
    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    printf("Digite o valor de b:\n");
    scanf("%d", &b);
    printf("Digite o valor de c:\n");
    scanf("%d", &c);

    if (((a != b) || (a != c)) && ((b != c) || (b != a)) && ((c != a) || (c != b)))
    {
        if (a > b)
        {
            AUX = a;
            a = b;
            b = AUX;
        }
        if (b > c)
        {
            AUX = b;
            b = c;
            c = AUX;
        }
        if (a > b)
        {
            AUX = a;
            a = b;
            b = AUX;
        }

        printf("A ordem crescente e:\n %d %d %d", a, b, c);
    }

    else
    {
        printf("Os numeros nao podem ser iguais. Tente novamente.\n");

            int a, b, c, AUX;
            printf("Digite o valor de a:\n");
            scanf("%d", &a);
            printf("Digite o valor de b:\n");
            scanf("%d", &b);
            printf("Digite o valor de c:\n");
            scanf("%d", &c);

            if (((a != b) || (a != c)) && ((b != c) || (b != a)) && ((c != a) || (c != b)))
            {
                if (a > b)
                {
                    AUX = a;
                    a = b;
                    b = AUX;
                }
                if (b > c)
                {
                    AUX = b;
                    b = c;
                    c = AUX;
                }
                if (a > b)
                {
                    AUX = a;
                    a = b;
                    b = AUX;
                }

                printf("A ordem crescente e:\n %d %d %d", a, b, c);
            }
    }

    return 0;
}
