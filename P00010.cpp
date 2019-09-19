#include <iostream>
using namespace std;

int main()
{
    char c, c0;
    cin >> c;
    if(c>='A' && c<='Z')
    {
        c0 = c+33;
        cout << c0;
    }
    return 0;
}

