#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, p;
    scanf("%d%d", &x, &n);
    if(x!=0)
        {
            p=pow(x, n);
            printf("%d", p);
        }
    else
        if(n!=0)
        {
            p=pow(x, n);
            printf("%d", p);
        }
}
