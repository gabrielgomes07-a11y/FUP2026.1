#include <stdio.h>

int main()
{
    float altura1, altura2, alturan;
    float somaa = 0;
    int continuar = 0;
    int count = 0;
    float med;

    printf("Digite a altura do primeiro individuo:\n");
    scanf("%f", &altura1);
    printf("digite a altura do segundo individuo:\n");
    scanf("%f", &altura2);

    count += 2;
    somaa = somaa + altura1 + altura2;

    printf("Deseja continuar? (1 para sim, 0 para nao)\n");
    scanf("%d", &continuar);

    while(continuar == 1)
    {

        printf("Digite a altura do proximo individuo:\n");
        scanf("%f", &alturan);
        count++;
        somaa = somaa + alturan;
        printf("Deseja continuar? (1 para sim, 0 para nao)\n");
        scanf("%d", &continuar);
            
    }
    
    med = somaa / count;
    printf("A media das alturas e:\n %f", med);

    return 0;
}
