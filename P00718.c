#include <stdio.h>

int main()
{
    int n, m, i, j, a[100][100], max, f=0;
    scanf("%d%d", &n, &m);
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            scanf("%d", &a[i][j]);
    max=a[1][1];
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            if(a[i][j]>max)
                max=a[i][j];
    printf("%d", max);
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            if(a[i][j]==max)
                f++;
    printf("%d", f);
}
