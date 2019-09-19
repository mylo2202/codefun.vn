#include <stdio.h>

int main()
{
    int a[100], n, i, k, j, m;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n-1; i++);
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
    printf("%d%d", a[n-1], a[2]);
}
