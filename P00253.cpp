#include <iostream>
using namespace std;

int main()
{
    long long x, n, product = 1;
    cin >> x >> n;
    for(int i=1; i<=n; i++) product *= x;
    cout << product;
    return 0;
}
