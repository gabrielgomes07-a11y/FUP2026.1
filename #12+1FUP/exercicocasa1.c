#include <stdio.h>

int main(){
    int num;
  
    scanf("%d", &num);

    for (int count = 1; count <= num; count++) {
        int div = 0;
        for (int i = 1; i <= count; i++) {
            if (count % i == 0) {
                div++;
            }
        }
        if (div == 2) {
            printf("%d ", count);
        }
    }
    printf("\n");

    return 0;
}