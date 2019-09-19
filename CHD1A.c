#include <stdio.h>
#include <math.h>

int main()
{
    int t, n[50], k[50], i, d;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
        scanf("%d%d", &n[i], &k[i]);
    for(i=1; i<=t; i++)
        {
            d=(pow(k[i]-1, n[i])+(k[i]-1)*(pow(-1, n[i])));
            printf("%d\n", d%6971);
        }
}
