#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    if(n>=2)
        {
            i=2;
            while(n%i!=0)
                i++;
            if(i==n)
                printf("1");
            else
                printf("0");
        }
    else
        printf("0");
}
