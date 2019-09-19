#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, i, x;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++) cin >> a[i];
    sort(a, a + n);
    cin >> x;
    for(i=0; i<n; i++) if(x == a[i]) cout << i + 1;
    return 0;
}
