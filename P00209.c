#include <stdio.h>

int main()
{
    int n, i, x, a[100], j, k, m;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
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
    i=1;
    while(i<=n)
        {
            if(a[i]==x)
                {
                    printf("%d", i);
                    break;
                }
            i++;
        }
}
