#include <stdio.h>

int main()
{
    float n, p, m;
    int i, k;
    scanf("%f%f%d", &n, &m, &k);
    p=n;
    for(i=1; i<=k; i++)
        p=p+(m/100)*p;
    printf("%.0f", p);
}
