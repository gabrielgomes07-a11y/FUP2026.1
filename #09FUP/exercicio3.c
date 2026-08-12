 #include <stdio.h>
 
 int main()
 {
    int num1;
    printf("Digite um numero:\n");
    scanf("%d", &num1);
    
    if(num1 % 4 == 0 && num1 % 100 != 0 || num1 % 400 == 0)
    {
        printf("O ano e bissexto\n");
    }
    else
    {
        printf("O ano nao e bissexto\n");
    }    

    return 0;
 }
 