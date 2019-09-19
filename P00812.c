#include <stdio.h>

int main()
{
    int n, i, a[100], j=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=2; i<=n; i++)
        if(a[i]>a[i-1])
            j++;
    if(j+1==n)
        printf("YES");
    else
        printf("NO");
}
