#include <stdio.h>

int main()
{
    int i, n;
    char c[127];
    scanf("%d %s", &n, &c);
    for(i=1; i<=n; i++)
        printf("%s\n", c);
}
