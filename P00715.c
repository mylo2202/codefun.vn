#include <stdio.h>

int main()
{
    int n, m, a[1000][1000], i, j, x1, y1, x2, y2, s=0;
    scanf("%d%d", &n, &m);
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            scanf("%d", &a[i][j]);
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    for(i=x1; i<=x2; i++)
        for(j=y1; j<=y2; j++)
            s=s+a[i][j];
    printf("%d", s);
}
