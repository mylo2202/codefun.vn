#include <stdio.h>

int main()
{
    int n, i, a[200];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    printf("%d", a[n]);
}
