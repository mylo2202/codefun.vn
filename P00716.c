#include <stdio.h>

int main()
{
    int n, m, i, j, a[100][100], s=0;
    scanf("%d%d", &n, &m);
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            scanf("%d", a[i][j]);
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            if((i+j)%2==0)
                s=s+a[i][j];
    printf("%d", s);
}
