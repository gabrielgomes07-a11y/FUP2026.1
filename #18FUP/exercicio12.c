#include <stdio.h>

int main() {

    int nota[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &nota[i]);
    }

    for (int i = 0; i < 5; i++)
    { 
        printf("A nota do aluno %d e: %d\n", i + 1, nota[i]);
    }
    
    return 0;

}