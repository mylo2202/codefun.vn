#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;
    scanf("%c %c", &a, &b);
    if(a>='a' && a<='z' && b>='a' && b<='z')
    {
        printf("%d", abs(a-b)-1);
    }
}
