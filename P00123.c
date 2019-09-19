#include <stdio.h>

int main()
{
    int i, a[100], j, k, m;
    for(i=1; i<=3; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=2; i++)
        {
            k=i;
            for(j=i+1; j<=3; j++)
                if(a[j]<a[k])
                    k=j;
            if(k!=i)
                {
                    m=a[i];
                    a[i]=a[k];
                    a[k]=m;
                }
        }
    printf("%d%d", a[1], a[3]);
}
