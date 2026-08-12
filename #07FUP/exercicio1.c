#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;
    int c1, c2, c3, c4, cf;
    int C1, C2, C3;
    int verifica = 0;

    printf("Digite os numeros inteiros separadamente\n");
    scanf("%d %d %d", &a, &b, &c);

    c1 = (a>0) && (b>0) && (c>0);
    c2 = ((a+b)>c) && (c> ((a-b)<0? -(a-b):(a-b)));
    c3 = ((a+c)>b) && (b> ((a-c)<0? -(a-c):(a-c)));
    c4 = ((b+c)>a) && (a> ((b-c)<0? -(b-c):(b-c)));
    cf = c1 && c2 && c3 && c4;
    C1 = ((a) == (b)) && ((b) == (c));
    C2 = ((a) != (b)) && ((b) != (c)) && ((a) != (c));
    C3 = (((a) == (b)) && (a) != (c)) || (((b) == (c)) && (b) != (a)) || (((a) == (c)) && (b) != (a));

    if (cf > 0){

        printf("O triangulo existe");
        verifica = verifica + 1;

    }
    else{

        printf("O triangulo nao existe.");
        verifica = verifica;

    }
    
    if (verifica == 1)
    {
        
        if (C1 > 0)
        {
            printf(" e e um triangulo equilatero.");
        }
        
        if (C2 > 0)
        {
            printf(" e e um triangulo escaleno.");
        }

        if (C3 > 0)
        {
            printf(" e e um triangulo isoceles.");
        }
        
        
    }
    
    return 0;
}