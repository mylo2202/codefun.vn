#include <stdio.h>

int main()
{
    int i, n, p;
    scanf("%d", &n);
    if(n>=0)
        {
            p=1;
            for(i=1; i<=n; i+=1)
                p=p*i;
            printf("%d", p);
        }
}
