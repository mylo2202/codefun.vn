#include <stdio.h>

int main()
{
    int i, n, j, a[100000], max;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    max=a[1];
    i=2;
    while(i<=n)
        {
            if(a[i]>max)
                {
                    max=a[i];
                    j=i;
                }
            i++;
        };
    printf("%d%d", max, j);
}
