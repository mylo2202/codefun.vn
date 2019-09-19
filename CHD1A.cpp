#include <iostream>
#include <math.h>
using namespace std;

long long CHD(long long n, long long k)
{
    long long result = (pow((k-1), n) + (k-1)*pow(-1, n)) % 6971;
    return result;
}

int main()
{
    int T, i;
    cin >> T;
    long long n[T], k[T];
    for(i=0; i<T; i++) cin >> n[i] >> k[i];
    for(i=0; i<T; i++) cout << CHD(n[i], k[i]) << endl;
    return 0;
}
