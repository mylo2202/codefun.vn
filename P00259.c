#include <stdio.h>

int main()
{
    int n, i, a[100], j, k, m, o, s=0;
    scanf("%d%d", &n, &o);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n-1; i++)
        {
            k=i;
            for(j=i+1; j<=n; j++)
                if(a[j]<a[k])
                    k=j;
            if(k!=i)
                {
                    m=a[i];
                    a[i]=a[k];
                    a[k]=m;
                }
        }
    for(i=n; i>=n-o+1; i--)
        s=s+a[i];
    printf("%d", s);
}
