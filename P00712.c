#include <stdio.h>

int main()
{
    int n, i, a[30000], j=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        if(a[i]==a[n-i+1])
            j++;
    if(j==n)
        printf("YES");
    else
        printf("NO");
}
