#include <stdio.h>

int main()
{
    int n;
    char a;
    scanf("%c", &a);
    scanf("%d", &n);
    if(a>='a' && a<='z' && a+n<='z')
        printf("%c", a+n);
    else
        printf("%c", a+n-26);
}
