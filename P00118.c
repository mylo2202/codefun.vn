#include <stdio.h>

int main()
{
    float a1, b1, a2, b2;
    scanf("%f%f%f%f", &a1, &b1, &a2, &b2);
    if((a1==a2 && b1==b2) || (a1==b2 && b1==a2))
        printf("1");
    else
        printf("0");
}
