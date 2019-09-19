#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d", &n);
    scanf("%d", &m);
    for(j=1; j<=n; j++)
        {
            for(i=1; i<=m; i++)
                printf("#");
            printf("\n");
        }
}
