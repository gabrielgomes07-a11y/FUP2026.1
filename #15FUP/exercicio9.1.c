#include <stdio.h>

int main(){
    int x, y, resto;

    scanf("%d %d", &x, &y);
    resto = x % y;

    while (resto != 0)
    {
        x = y;
        y = resto;
        resto = x % y;
    }
    printf("MDC: %d\n", y);
    return 0;
}