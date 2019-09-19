#include <stdio.h>

int main()
{
    int n, i, j, a[10][10];
    scanf("%d", &n);
    a[1][1]=1;
    if(i>=2)
        for(i=2; i<=n; i++)
            {
                a[1][i]=1; a[i][i]=1;
                    if(i>=3)
                        for(j=2; j<=i-1; j++)
                            a[j][i]=a[j-1][i-1]+a[j][i-1];
            }
    for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
                printf("%d", a[j][i]);
            printf("\n");
        }
}
