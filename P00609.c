#include <stdio.h>

int main()
{
    int n, i, j, a[100][100], s=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            scanf("%d", a[i][j]);
    i=1; j=1;
    while(1<=i<=n && 1<=j<=n)
        {
            s=s+a[i][j];
            i++; j++;
        }
    i=1; j=n;
    while(1<=i<=n && 1<=j<=n)
        {
            s=s+a[i][j];
            i++; j--;
        }
    if(n%2!=0)
        s=s-a[(n+1)/2][(n+1)/2];
    printf("%d", s);
}
