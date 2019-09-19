#include <stdio.h>

int main()
{
    int n, i, p, q, a[200], j, m=0;
    scanf("%d", &n);
    scanf("%d", &p);
    if(p<=n && p>=0)
        for(i=1; i<=p; i++)
            scanf("%d", &a[i]);
    scanf("%d", &q);
    if(q<=n && q>=0)
        for(i=1; i<=q; i++)
            scanf("%d", &a[p+i]);
    for(i=1; i<=n; i++)
        for(j=1; j<=p+q; j++)
            {
                if(a[j]==i)
                    m++;
            }
    if(m-1>=n)
        printf("WIN");
    else
        printf("LOSE");
}
