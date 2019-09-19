#include <stdio.h>

int main()
{
    int n, x, i, a[100], f=0;
    scanf("%d%d", &n, &x);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        if(a[i]==x)
            f++;
    printf("%d", f);
}
