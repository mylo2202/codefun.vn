#include <iostream>
using namespace std;

int GCD(int &a, int &b)
{
    int r;
    while(b>0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    int gcd = GCD(arr[0], arr[1]);
    if(n > 2)
    {
        for(i=2; i<n; i++)
        {
            gcd = GCD(gcd, arr[i]);
        }
        cout << gcd;
    }
    else cout << gcd;
    return 0;
}
