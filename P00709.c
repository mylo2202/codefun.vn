#include <stdio.h>

int main()
{
    int n, i, j=0, a[30000];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        if(a[i]%4==0)
            j++;
    printf("%d", j);
}
