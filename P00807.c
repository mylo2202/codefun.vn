#include <stdio.h>

int main()
{
    int i, n, p=1;
    scanf("%d", &n);
    if(n>0)
        {
            for(i=1; i<=n; i+=1)
                p=p*i;
            printf("%d", p);
        }
    else
        if(n==0)
            printf("%d", p);
}
