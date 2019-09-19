#include <iostream>
#include <cmath>
using namespace std;

double power(double a, long long b)
{
    if(b == 0) return 1;
    else return a*power(a, b-1);
}

int main()
{
    double a; long long b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}
