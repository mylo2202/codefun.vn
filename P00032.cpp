#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << s[j];
        }
        cout << endl;
    }
    for(int i=s.size()-1; i>=0; i--)
    {
        for(int j =0; j<=i; j++)
        {
            cout << s[j];
        }
        cout << endl;
    }
    return 0;
}
