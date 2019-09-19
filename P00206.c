#include <stdio.h>

int main()
{
    int x, i;
    scanf("%d", &x);
    if(x>=2)
        {
            i=2;
            while(x%i!=0)
                i++;
            if(i==x)
                printf("1");
            else
                printf("0");
        }
    else
        printf("0");
}
