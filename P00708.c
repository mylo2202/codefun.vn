#include <stdio.h>

int main()
{
    int n, i, j, k=0, a[30000];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        {
            if(a[i]>=2)
                {
                    j=2;
                    while(a[i]%j!=0)
                        j++;
                    if(j==a[i])
                        k++;
                }
        }
    printf("%d\n", k);
    for(i=1; i<=n; i++)
        {
            if(a[i]>=2)
                {
                    j=2;
                    while(a[i]%j!=0)
                        j++;
                    if(j==a[i])
                        printf("%d", a[i]);
                }
        }
}
