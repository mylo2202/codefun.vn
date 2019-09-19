#include <stdio.h>

int main()
{
    int n, i, a[50];
    float x=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
            x=x+a[i];
        }
    x=x/n;
    printf("%.0f", x);
}
