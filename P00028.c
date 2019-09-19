#include <stdio.h>

int main()
{
    long int n, i, a, S = 0;
    scanf("%ld%ld", &n, &a);
    for(i=1; i<=n; i++)
    {
        S+=i*(i+a);
    }
    printf("%ld", S);
}

//a thề k hiểu tại sao k đc 100, sorry =((
