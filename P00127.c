#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if((a*b)%10==0)
        printf("1");
    else
        printf("0");
}
