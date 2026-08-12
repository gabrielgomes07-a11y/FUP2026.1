#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if (((a != b) || (a != c)) && ((b != c) || (b != a)) && ((c != a) || (c != b)))
    {
        if ((a < b) && (a < c))
        {
            printf("%d, %d, %d", a, b, c);
        }

        if ((b < a) && (b < c))
        {
            printf("%d, %d, %d", b, a, c);
        }

        if (((c < a) && (c < b)) && ((a < b)))
        {
            printf("%d, %d, %d", c, a, b);
        }
        
    }
    
    

    return 0;
}
