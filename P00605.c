#include <stdio.h>

int main()
{
    int n, i, x, j=0, a[100000];
    scanf("%d%d", &n, &x);
    for(i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]>=x)
                j++;
        }
    printf("%d", j);
}
