#include <stdio.h>

int main()
{
    int n, i, a[100000], x, j, m=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    i=1;
    while(i<=n)
        {
            i++;
            if(i>n)
                {
                    printf("0");
                    break;
                }
            else
                if(a[i]==x)
                    {
                        printf("1");
                        break;
                    }
        }
}
