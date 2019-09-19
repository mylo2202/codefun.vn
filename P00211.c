#include <stdio.h>

int main()
{
    int n, i, a[10000], x, j, m;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    j=0; m=0;
    for(i=1; i<=n; i++)
        if(j<x)
            {
                m++;
                if(a[i]%2==0)
                    j++;
            }
    for(i=1; i<=m; i++)
        printf("%d", a[i]);
}
