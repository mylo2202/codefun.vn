#include <stdio.h>

int main()
{
    int x, m, i;
    scanf("%d", &x);
    if(x>=2)
        {
            m=2;
            while(m<x)
                {
                    i=2;
                    while(m%i!=0)
                        i++;
                    if(i==m)
                        printf("%d", m);
                    m++;
                }
        }
}
