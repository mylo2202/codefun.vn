#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[1000], s2[1000];
    int i;
    cin >> s1;
    for(i=0; i<strlen(s1); i++)
    {
        s2[i]=s1[strlen(s1)-1-i];
    }
    cout << s1 << s2 << endl;
    return 0;
}

