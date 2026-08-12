#include <stdio.h>

int main()
{
    float altura;
    float somaa = 0;
    int count = 0;
    int n;
    float med;

    printf("Digite a quantidade de pessoas:\n");
    scanf("%d", &n);
    
    while (count < n)
    {
        printf("Digite a altura:\n");
        scanf("%f", &altura);
        count++;
        somaa = somaa + altura;
    }

    med = somaa / n;
    printf("A media das alturas e:\n %f", med);

    return 0;
}
