#include <stdio.h>

int main()
{
    int n, i, k;
    scanf("%d", &n);
    k=0;
    for(i=n+1; i<=n*n; i+=1)
        k+=1;
    printf("%d", k);
}
