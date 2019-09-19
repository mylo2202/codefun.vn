#include <stdio.h>

int main()
{
    int x, i, s;
    scanf("%d", &x);
    i=1; s=0;
    do
        {
            s=s+i;
            i++;
        }
    while(s<x);
    if(s!=x)
        printf("NO");
    else
        printf("YES");
}
