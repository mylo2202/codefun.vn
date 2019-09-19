#include <stdio.h>
#define d '.'

int main()
{
    char c;
    for(;(c=getch()!=d););
        putchar(c);
}
