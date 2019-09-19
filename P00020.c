#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s", &s);
    printf("%c %c", s[4]-32, s[8]-32);
}
