#include <stdio.h>

int main()
{
    int i, j, n, p, s=0, m;
    scanf("%d%d", &n, &m);
    if(n>0)
        {
            for(i=1; i<=n; i+=1)
                {
                    p=1;
                    for(j=1; j<=i; j++)
                        p=p*j;
                    s=s+p;
                }
            printf("%d", s%m);
        }
    if(n=0)
        {
            s=s+p;
            printf("%d", s%m);
        }
}
