#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cdsum = 0;
    for(unsigned int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cdsum+=i;
        }
    }
    cout << cdsum;
    return 0;
}
