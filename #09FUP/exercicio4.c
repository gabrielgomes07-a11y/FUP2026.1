#include <stdio.h>
#include <math.h>

int main()
{
    double temp, f, c;
    char unidade;

    printf("Digite a temperatura\n");
    scanf("%lf", &temp); 

    printf("Digite a unidade de temperatura (C para Celsius, F para Fahrenheit)\n");
    scanf(" %c", &unidade);

    if (unidade == 'F')
    {
        c = ((temp - 32) * 5)/9;
        printf("A temperatura em Celsius é: %lf\n", c);
    }
    else if (unidade == 'C')
    {
        f = ((temp * 9)/5) + 32;
        printf("A temperatura em Fahrenheit é: %lf\n", f);
    }
    else
    {
        printf("Unidade inválida!\n");
    }



    return 0;
}
