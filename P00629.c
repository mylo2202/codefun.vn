#include <stdio.h>

int main()
{
    int n, i, a[100], b[100], j, k, m;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        scanf("%d", &b[i]);
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
    for(i=1; i<=n-1; i++)
        {
            k=i;
            for(j=i+1; j<=n; j++)
                if(b[j]<b[k])
                    k=j;
            if(k!=i)
                {
                    m=b[i];
                    b[i]=b[k];
                    b[k]=m;
                }
        }
    for(i=1; i<=n; i++)
        {
            if(a[i]!=b[i])
                {
                    printf("NO");
                    break;
                }
            else
                if(i==n)
                    printf("YES");
        }
}
