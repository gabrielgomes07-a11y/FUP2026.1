#include <stdio.h>

int main()
{

    int f, p;
    char saque;

    scanf("%c %d", &saque, &f);

    switch (saque)
    {
    case 'c':
        p = ((f * 18) - 80) / 10;

        if (p < 150)
        {
            printf("Fraco, nem passou");
        }

        else if (p < 180)
        {
            printf("Perfeito");
        }

        else if (p < 210)
        {
            printf("Satisfeito");
        }

        else
        {
            printf("Muito forte, bola fora");
        }

        break;

    case 'b':
        p = ((f * 20) - 80) / 10;

        if (p < 150)
        {
            printf("Fraco, nem passou");
        }

        else if (p < 180)
        {
            printf("Perfeito");
        }

        else if (p < 210)
        {
            printf("Satisfeito");
        }

        else
        {
            printf("Muito forte, bola fora");
        }

        break;

    default:
        break;
    }

    return 0;
}