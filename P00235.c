#include <stdio.h>

int main()
{
    int n, i, a[50];
    float x=0;
    scanf("%d", &n);
    if(n>=1)
        {
            for(i=1; i<=n; i++)
                {
                    scanf("%d", &a[i]);
                    x=x+a[i];
                }
            x=x/n;
            printf("%.2f", x);
        }
}
