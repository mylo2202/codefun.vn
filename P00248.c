#include <stdio.h>

int main()
{
    int n, k, i, j, max, a[100], a1, a2;
    scanf("%d", &n);
    for(k=1; k<=n; k++);
        scanf("%d", &a[k]);
    max=a[1]*a[2];
    for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                if(j!=i && a[i]*a[j]>max)
                    {
                        max=a[i]*a[j];
                        a1=i; a2=j;
                    }
        }
    if(a1>a2)
        printf("%d\n%d\n", a[a1], a[a2]);
    else
        printf("%d\n%d\n", a[a2], a[a1]);
}
