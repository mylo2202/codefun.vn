#include <stdio.h>
#include <math.h>

int main()
{
    int a[1000], b[1000], m, n, i, sa, sb, s;
    scanf("%d%d", &m, &n);
    for(i=1; i<=m; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        scanf("%d", &b[i]);
    if(a[1]!=0 && b[1]!=0)
        {
            sa=0; sb=0;
            for(i=m; i>=1; i--)
                sa=sa+a[i]*pow(10, m-i);
            for(i=n; i>=1; i--)
                sb=sb+b[i]*pow(10, n-i);
            s=sa+sb;
            printf("%d", s);
        }
}
