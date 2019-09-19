#include <stdio.h>

int main()
{
    float a1, b1, a2, b2, x, y;
    scanf("%f%f%f%f", &a1, &b1, &a2, &b2);
    x=(-b1+b2)/(a1-a2);
    y=a1*x+b1;
    printf("%f%f", x, y);
}
