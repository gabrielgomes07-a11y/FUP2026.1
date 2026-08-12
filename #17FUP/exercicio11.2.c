#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    if (n < 0) {
        printf("Nao existe raiz real.");
        return 0;
    }

    int raiz = 0;
    while ((long long)(raiz + 1) * (raiz + 1) <= n) {
        raiz++;
    }

    printf("%d\n", raiz);
    return 0;
}

