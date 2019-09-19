#include <stdio.h>

int main()
{
    int n, i, a[100], s=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]%5==1 && a[i]%2==0)
                s=s+a[i];
        }
    printf("%d", s);
}
