#include <stdio.h>

int main()
{
    char c;                     //khai bao ky tu c
    scanf("%c", &c);            //nhap c
    if(c>='A' && c<='Z')        //dieu kien cua c
    {
        printf("%c", c+33);     //cho nay chac em hieu :))
    }
}
