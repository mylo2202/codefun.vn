#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string n1, n2;
    cin >> n1 >> n2;
    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());
    cout << n2 << n1;
    return 0;
}
