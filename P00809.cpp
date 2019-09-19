#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int i, a[n], f = 0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] == x) f++;
    }
    cout << f;
    return 0;
}
