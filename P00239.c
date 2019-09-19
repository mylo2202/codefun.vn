#include <stdio.h>

int main()
{
    int i, n;
    char c[100];
    scanf("%d", &n);
    gets(c);
    for(i=1; i<=n; i++)
        puts(c);
}
