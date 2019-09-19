#include <stdio.h>

int main()
{
    int a, b, c;
    float d;
    scanf("%d%d%d", &a, &b, &c);
    if(a!=0)
    {
        d=b*b-4*a*c;
        if(d>=0)
            {
                if(d>0)
                    printf("2");
                else
                    printf("1");
            }
        else
            printf("0");
    }
}
