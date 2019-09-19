#include <stdio.h>

int main()
{
    int n, m, i, j, a[10000];
    char h='#';
    scanf("%d", &n);
    scanf("%d", &m);
    for(j=1; j<=n; j++)
        {
            for(i=1; i<=m; i++)
                printf("%c", h);
            printf("\n");
        }
}
