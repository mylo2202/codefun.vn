#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, a[n];
    for(i=0; i<n; i++) cin >> a[i];
    sort(a, a + n);
    cout << a[n-2] << " " << a[1];
    return 0;
}
