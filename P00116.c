#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if(x>=1 && y>=1 && x<=3 && y<=3)
        printf("No winner");
}
