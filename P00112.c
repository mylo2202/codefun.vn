#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if(x>0 && y>0)
        printf("1");
    if(x<0 && y>0)
        printf("2");
    if(x<0 && y<0)
        printf("3");
    if(x>0 && y<0)
        printf("4");
    if(x==0 && y>0)
        printf("1 2");
    if(x==0 && y<0)
        printf("3 4");
    if(y==0 && x>0)
        printf("1 4");
    if(y==0 && x<0)
        printf("2 3");
    if(x==0 && y==0)
        printf("1 2 3 4");
}
