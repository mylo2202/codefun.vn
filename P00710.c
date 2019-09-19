#include <stdio.h>

int main()
{
    int n, i, k, j=0, a[30000];
    scanf("%d%d", &n, &k);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        if(a[i]%k==0)
            j++;
    printf("%d", j);
}
