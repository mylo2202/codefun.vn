#include <stdio.h>

int main()
{
    int m, n, i;
    scanf("%d%d", &m, &n);
    if(m!=0)
        for(i=1; i<=n; i++)
            if(i%m==0)
                printf("%d\n", i);
}
