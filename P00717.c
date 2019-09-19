#include <stdio.h>

int main()
{
    int n, i, j, a[100][100], p=1;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            scanf("%d", &a[i][j]);
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            p=p*a[i][j];
    for(i=1; i<=n; i++)
        for(j=n; j>=1; j--)
            p=p*a[i][j];
    if(n%2!=0 && a[(n+1)/2][(n+1)/2]!=0)
        p=p/a[(n+1)/2][(n+1)/2];
    printf("%d", p);
}
