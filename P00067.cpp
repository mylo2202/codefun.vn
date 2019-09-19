#include <iostream>
#include <math.h>
using namespace std;

long long factorial(int n)
{
    if((n==0) || (n==1)) return 1;
    else return n*factorial(n-1);
}

int main()
{
    int n;
    cin >> n;
    long long f = factorial(n);
    int i = 0;
    while(f%10==0)
    {
        f/=10;
        i++;
    }
    cout << i;
    return 0;
}
