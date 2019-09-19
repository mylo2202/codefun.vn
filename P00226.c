#include <stdio.h>

int main()
{
    int n, m, i, j;
    char c;
    scanf("%d%d %c", &n, &m, &c);
    for(j=1; j<=n; j++)
        {
            for(i=1; i<=m; i++)
                printf("%c", c);
            printf("\n");
        }
}
