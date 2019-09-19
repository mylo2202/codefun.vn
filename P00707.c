#include <stdio.h>

int main()
{
    int n, i, a[30000], b[30000];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        b[i]=a[n-i+1];
    for(i=1; i<=n; i++)
        printf("%d", b[i]);
}
