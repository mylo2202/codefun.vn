#include <stdio.h>

int main()
{
    int n, i, a[100], j, k, m, h=0;
    scanf("%d", &n);
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
    for(i=2; i<=n; i++)
        if(a[i-1]!=a[i])
            h++;
    printf("%d", h+1);
}
