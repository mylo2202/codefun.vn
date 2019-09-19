#include <iostream>
using namespace std;

int main()
{
    int n, k, q, r;
    cin >> n >> k;
    q = n/k;
    r = n%k;
    cout << q+r;
    return 0;
}
