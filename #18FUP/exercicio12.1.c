#include <stdio.h>

int main() {

    float nota[10];
    float min, max;
    float media = 0;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);    
    }

    for (int i = 1; i < 10; i++)
    {
        if (i == 1) {
            max = nota[i];
            min = nota[i];
        }
        if (nota[i] > max)
        {
            max = nota[i];
        }

        if (nota[i] < min)
        {
            min = nota[i];
        }
    }

    for (int i = 0; i < 10; i++)
    { 
        media = media + nota[i];
    }

    media = media / 10;

    printf("A nota maxima e: %.2f\n", max);
    printf("A nota minima e: %.2f\n", min);
    printf("A media das notas e: %.2f\n", media);
    for (int i = 0; i < 10; i++)
    { 
        if (nota[i] > media)
        {
            count++;
        }
    }
    printf("A quantidade de alunos com nota acima da media e: %d\n", count);



    return 0;

}