#include <stdio.h>

int main()
{
    int n, i=1, s=0;
    scanf("%d", &n);
    while(i<=n)
        {
            if(i%2!=0)
                s=s+i;
            i++;
        }
    printf("%d", s);
}
