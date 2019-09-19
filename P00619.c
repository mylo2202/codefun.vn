#include <stdio.h>

int main()
{
    int n, i, a[20];
    scanf("%d", &n);
    a[1]=1; a[2]=1;
    for(i=3; i<=n; i++)
        a[i]=a[i-2]+a[i-1];
    for(i=1; i<=n; i++)
        printf("%d", a[i]);
}
