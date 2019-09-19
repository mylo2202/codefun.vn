#include <stdio.h>

int main()
{
    int a, b, i;
    scanf("%d%d", &a, &b);
    while(a!=b)
        {
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
    i=2;
    if(a<=1)
        printf("no");
    else
        {
            while(a%i!=0)
                i++;
            if(i==a)
                printf("yes");
            else
                printf("no");
        }
}
