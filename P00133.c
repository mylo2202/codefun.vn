#include <stdio.h>

int main()
{
    int n, p[100], q[100], i, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d%d", &p[i], &q[i]);
    j=0;
    for(i=1; i<=n; i++)
        if(q[i]-p[i]>=2)
            j++;
    printf("%d", j);
}
