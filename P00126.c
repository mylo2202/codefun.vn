#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    int a[m];
    for(i=0; i<m; i++)
        scanf("%d", &a[i]);
    for(i=0; i<m; i++)
        {
            j=2;
            while(a[i]%j!=0)
                j++;
            if(j==a[i] && n%a[i]==0)
                printf("YES");
            else
                printf("NO");

        }
}
