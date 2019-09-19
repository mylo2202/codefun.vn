#include <stdio.h>

int main()
{
    float a, b;
    char c;
    scanf("%f%f %c", &a, &b, &c);
    if(c=='+' || c=='-' || c=='*' || c=='/')
        {
            if(c=='+')
                printf("%f", a+b);
            if(c=='-')
                printf("%f", a-b);
            if(c=='*')
                printf("%f", a*b);
            if(c=='/')
                printf("%.2f", a/b);
        }
}
