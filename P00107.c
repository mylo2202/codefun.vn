#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, x3, y3, a, b;
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    a=(y2-y1)/(x2-x1); b=y1-a*x1;
    //printf("%f", a*x3+b);
    if(a*x3+b==y3)
        printf("1");
    else
        printf("0");
}
