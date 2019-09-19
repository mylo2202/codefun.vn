#include <stdio.h>

int main()
{
    int n, i, a[10000], s=0, j=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=n; i++)
        {
            s=s+a[i];
            j++;
            if(s<0)
                break;
        }
    if(j==n)
        printf("VICTORY");
    else
        printf("DEFEATED AT CITY %d", j);
}
