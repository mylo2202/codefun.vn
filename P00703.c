#include <stdio.h>

int main()
{
    int n, i, j=0, a[50];
    float x=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
            if(i%2!=0)
                {
                    x=x+a[i];
                    j++;
                }
        }
    x=x/j;
    printf("%.2f", x);
}
