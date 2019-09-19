#include <stdio.h>

int main()
{
    int i, a[100], n;
    for(i=1; i<=100; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]!=69)
                continue;
            else
                break;
        }
    n=i-1;
    for(i=1; i<=n; i++)
        printf("%d\n", a[i]);
}
