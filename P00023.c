#include <stdio.h>

int f(int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 2;
    else
        return 2*f(n-1) - f(n-2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
}
