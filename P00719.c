#include <stdio.h>

int main()
{
    int n, m, i, j, a[100][100], s=0, max, k;
    scanf("%d%d", &n, &m);
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            scanf("%d", a[i][j]);
    j=1;
    for(i=1; i<=n; i++)
        s=s+a[i][j];
    max=s;
    for(j=2; j<=m; j++)
        {
            for(i=1; i<=n; i++)
                {
                    s=0;
                    s=s+a[i][j];
                }
            if(s>max)
                {
                    max=s;
                    k=j;
                }
        }
    printf("%d%d", max, k);
}
