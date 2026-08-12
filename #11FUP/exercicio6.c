#include <stdio.h>

int main()
{
    int num1, num2;
    int soma, subtracao, multiplicacao;
    float divisao;
    char op;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);
    printf("Digite a operacao (+, -, *, /):\n");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        soma = num1 + num2;
        printf("Soma: %d\n", soma);
        break;
    case '-':
        subtracao = num1 - num2;
        printf("Subtracao: %d\n", subtracao);
        break;
    case '*':
        multiplicacao = num1 * num2;
        printf("Multiplicacao: %d\n", multiplicacao);
        break;
    case '/':
        if (num2 != 0)
        {
            divisao = (float)num1 / num2;
            printf("Divisao: %.2f\n", divisao);
        }

        else if (num1 == 0 && num2 == 0)
        {
            printf("Indeterminacao: 0 dividido por 0!\n");
        }

        else
        {
            printf("Erro: Divisao por zero!\n");
        }
        break;
    
    default:
        printf("Operacao invalida!\n");
        break;
    }

    return 0;
}
