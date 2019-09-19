#include <stdio.h>

int main()
{
    int n, k, q, r;
    scanf("%d%d", &n, &k);
    q = n/k;
    r = n%k;
    printf("%d", q+r);
}
