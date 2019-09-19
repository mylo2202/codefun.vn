#include <iostream>
#include <string.h>

int main()
{
    char s[1000];
    std::cin >> s;
    char s1 = s[4] -32; char s2 = s[8] -32;
    std::cout << s1 << " " << s2;
    return 0;
}
