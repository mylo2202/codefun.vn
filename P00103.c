#include <stdio.h>

int main()
{
    float a1, b1, c1, a2, b2, c2, x, y;
    scanf("%f%f%f%f%f%f", &a1, &b1, &c1, &a2, &b2, &c2);
    if(a1/a2!=b1/b2)
        {
            x=(b1*c2-b2*c1)/(a2*b1-a1*b2); y=(c1-a1*x)/b1;
            printf("%.1f%.1f", x, y);
        }
    else
        {
            if(b1/b2!=c1/c2)
                printf("0");
            else
                printf("Inf");
        }
}
