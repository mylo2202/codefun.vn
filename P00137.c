#include <stdio.h>

int main()
{
    int i, a[5], max;
    for(i=1; i<=5; i++)
        scanf("%d", &a[i]);
    max=a[1];
    i=2;
    while(i<=5)
        {
            if(a[i]>max)
                max=a[i];
            i++;
        };
    printf("%d", max);
}

