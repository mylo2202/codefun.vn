#include <stdio.h>

int main()
{
    int n, m, k, i;
    float b, a=1;
    scanf("%d%d%d", &n, &m, &k);
    b=n;
    for(i=1; i<=k; i++)
        {
            a=a*m; b=b+n/a;
        }
    printf("%.6f", b);
}
