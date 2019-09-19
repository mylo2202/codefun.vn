#include <stdio.h>

int main()
{
    int n, i, a[10000], j, x;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    j=0;
    for(i=1; i<=n; i++)
        if(a[i]==x)
            j++;
    printf("%d", j);
}
