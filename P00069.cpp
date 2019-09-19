#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, product = 1;
    cin >> n;
    int a[n], i;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        product*=a[i];
    }
    cout << abs(product % 10);
    return 0;
}
