#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], b[1000];
    scanf("%s", &a);
    int i;
    for(i=0; i<strlen(a); i++)
    {
        b[i] = a[strlen(a)-1-i];
    }
    printf("%s%s", a, b);
}
