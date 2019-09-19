#include <stdio.h>

int main()
{
    int n, i, s=1, a[100];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        s=s*a[i];
    printf("%d", s);
}
