#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, p;
    scanf("%d", &n);
    if(n==0)
        printf("");
    else
        {
            p=1;
            for(i=1; i<=n; i++)
                p=p*n;
            printf("%d", p);
        }
}
