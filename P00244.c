#include <stdio.h>

int main()
{
    int n, i, a[1000], s=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        {
            if(a[i]>=0)
                s=s+a[i];
            else
                break;
        }
    printf("%d", s);
}
