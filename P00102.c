#include <stdio.h>

int main()
{
    int a[4], i, min1, min2;
    for(i=1; i<=4; i++)
        scanf("%d", &a[i]);
    min1=a[1];
    i=2;
    while(i<=4)
        {
            if(a[i]<min1)
                min1=a[i];
            i++;
        }
    min2=a[1];
    i=2;
    while(i<=4)
        {
            if(a[i]<min2 && a[i]>min1)
                min2=a[i];
            i++;
        }
    printf("%d", min2);
}
