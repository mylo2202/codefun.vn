#include <stdio.h>

int main()
{
    int i, a[100], s=0;
    for(i=1; i<=100 ; i++)
        {
            scanf("%d", &a[i]);
            s=s+a[i];
            if(a[i]!=0)
                continue;
            if(a[i]==0)
                break;
        }
    printf("%d", s);
}
