#include <stdio.h>

int main()
{
    int n, i, a[1000];
    scanf("%d", &n);
    if(n>=1)
        {
            for(i=1; i<=n; i+=1)
                scanf("%d", &a[i]);
            printf("%d\n", a[1]);
            printf("%d\n", a[n]);
        }
}
