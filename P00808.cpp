#include <iostream>
using namespace std;

long long factorial(int n)
{
    if(n==0 || n==1) return 1;
    else return n*factorial(n-1);
}

int main()
{
    int k, n;
    cin >> k >> n;
    cout << factorial(n)/(factorial(k)*factorial(n-k));
    return 0;
}
