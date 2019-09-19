#include <stdio.h>

int main()
{
    int i, j=0, n, a[100000];
    float x=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        if(a[i]>=0)
            {
                x=x+a[i];
                j=j+1;
            }
    x=x/j;
    printf("%.2f", x);
}
