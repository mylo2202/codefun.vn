#include <stdio.h>

int main()
{
    int a, b, c, d, e, i;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    for(i=1; ;i++)
        if(i%a==0 && i%b==0 && i%c==0 && i%d==0 && i%e==0)
            {
                printf("%d", i);
                break;
            }
}
