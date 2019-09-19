#include <stdio.h>

int main()
{
    int h[6], m[6], i, j=0;
    for(i=1; i<=6; i++)
        scanf("%d%d", &h[i], &m[i]);
    for(i=1; i<=6; i++)
        if(h>=1 && m>=0 && h<=24 && m<=60)
            {
                if(h[i]>=7)
                    {
                        if(h[i]>7)
                            j++;
                        if(h[i]==7)
                            {
                                if(m[i]>5)
                                    j++;
                                else j=j+0;
                            }
                    }
                else j=j+0;
            }
    printf("%d", j);
    if(j<=2)
        printf(":)");
    else
        printf(":'(");
}
