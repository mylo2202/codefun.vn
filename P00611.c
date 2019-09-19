#include <stdio.h>

int main()
{
    int n, i, k, a[10000], b[10000];
    scanf("%d%d", &n, &k);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        {
            if(i+k<=n)
                b[i+k]=a[i];
            else
                b[i+k-n]=a[i];
        }
    for(i=1; i<=n; i++)
        printf("%d", b[i]);
}
