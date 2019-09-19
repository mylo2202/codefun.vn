#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n, a[100000], max;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    max=abs(a[2]-a[1]);
    i=2;
    for(i=1; i<=n; i++)
        {
            for(j=2; j<=n; j++)
                {
                    if(i!=j && abs(a[j]-a[i])>max)
                    max=abs(a[j]-a[i]);
                }
        };
    printf("%d", max);
}
