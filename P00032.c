#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s", &s);
    for(int i=0; i<strlen(s); i++)      //in ra từng chữ trên từng dòng, dòng bao nhiêu in ngần ấy chữ
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }
    for(int i=strlen(s)-1; i>=0; i--)   //làm ngược lại
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }
}
