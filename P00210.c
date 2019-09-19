#include <stdio.h>

int main()
{
    int n, i, m;
    scanf("%d", &n);
    i=0; m=0;
    while(m<n)
        {
            m=i*i;
            i++;
        }
    if(m==n)
        printf("1");
    else
        printf("0");
}
