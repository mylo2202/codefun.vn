#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, i;
    float sum = 0;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i]*1.0;
    }
    sum /= (n*1.0);
    cout << fixed << setprecision(2) << sum;
    return 0;
}
