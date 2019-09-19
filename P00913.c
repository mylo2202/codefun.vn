#include <stdio.h>
#include <math.h>

int main()
{
    int n, k, s=0;
    scanf("%d", &n);
    for(k=1; k<=n; k++)
        s=s+(pow(-1, k))*k;
    printf("%d", s);
}
