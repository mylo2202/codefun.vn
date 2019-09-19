#include <stdio.h>

int main()
{
    int n, i, a[30000], s=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i+=1)
        {
            if(a[i]>0)
                s=s+a[i];
        }
    printf("%d", s);
}
