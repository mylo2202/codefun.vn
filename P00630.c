#include <stdio.h>

int main()
{
    int n, i, j=0, a[100];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n-2; i++)
        if(a[i+1]-a[i]==a[i+2]-a[i+1])
            j++;
    if(j==n-2)
        printf("YES");
    else
        printf("NO");
}
