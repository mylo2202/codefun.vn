#include <stdio.h>

int main()
{
    int n, i, a[200];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    if(n%2==0)
        printf("%d", a[n/2]);
    else
        printf("%d", a[(n-1)/2]);
}
