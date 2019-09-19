#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n, m;
    int i, k;
    cin >> n >> m >> k;
    for(i=1; i<=k; i++) n *= (m/100 + 1.0);
    cout << fixed << setprecision(0) << n;
    return 0;
}
