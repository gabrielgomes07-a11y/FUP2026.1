#include <stdio.h>

int main() {

    int x, y;
    long long int pow = 1;
    scanf("%d %d", &x, &y);

    for (int i = 0; i < y; i++) {
        pow *= x;
    }
    printf("%lld", pow);


    return 0;

}