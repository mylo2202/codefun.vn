#include <iostream>
using namespace std;

int main()
{
    long int n, k ,i, S = 0;
    cin >> n >> k;
    for(i=1; i<=n; i++)
    {
        S+= i*(i+k);
    }
    cout << S;
}
