#include <stdio.h>

int main()
{
    int n, i, m, j;
    scanf("%d", &n);
    if(n<=1)
        printf("Bad");
    else
        {
            i=2;
            while(n%i!=0)
                i++;
            if(i==n)
                {
                    printf("Good\n");
                    m=1; j=0;
                    do
                        {
                            m=m*10;
                            j++;
                        }
                    while(m<=n);
                    printf("%d", j);
                }
            else
                printf("Bad");
        }
}
