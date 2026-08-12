#include <stdio.h>

int main(){
    int x, y, i, mdc;
    scanf("%d %d", &x, &y);
    
    i = 1;
    while(i <= x && i <= y){
        if(x % i == 0 && y % i == 0){
            mdc = i;
        }
        i++;
    }
    printf("MDC: %d\n", mdc);


}
