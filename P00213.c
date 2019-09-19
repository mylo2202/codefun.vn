#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i=1; i<=(n+1); i++)
        {
            for(j=1; j<=2*i-1; j+=1)
                printf("*");
            printf("\n");
        }
    for(i=n; i>=1; i--)
        {
            for(j=2*i-1; j>=1; j-=1)
                printf("*");
            printf("\n");
        }
}
