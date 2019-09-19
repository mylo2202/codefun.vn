#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;
    scanf("%f%f%f", &a, &b, &c);
    if(a!=0)
        {
            d=b*b-4*a*c;
            if(d>=0)
                {
                    if(d>0)
                        {
                            x1=(-b-sqrt(d))/(2*a);
                            x2=(-b+sqrt(d))/(2*a);
                            printf("%.2f", x1);
                            printf("%.2f", x2);
                        }
                    else
                        {
                            x1=(-b)/(2*a);
                            printf("%.2f", x1);
                        }
                }
            else
                printf("No solution");
        }
    else
        printf("No solution");
}
