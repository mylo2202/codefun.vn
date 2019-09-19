#include <stdio.h>
#include <math.h>

int main()
{
    int a, n, m, p;
    scanf("%d%d%d", &a, &n, &m);
    p=pow(a, n);
    printf("%d", p%m);
}
