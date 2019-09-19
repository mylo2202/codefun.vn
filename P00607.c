#include <stdio.h>

int main()
{
    int i, n, m, a[100000], min;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    min=a[1];
    i=2;
    while(i<=n)
        {
            if(a[i]<min)
                {
                    min=a[i];
                    m=i;
                }
            i++;
        };
    printf("%d", m-1);
}
