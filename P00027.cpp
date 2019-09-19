#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int p=1;
        for(int i=2; i<=n; i++)
        {
            p=i;
            if(n%i==0)
            {
                break;
            }
            else
                continue;
        }
    if (p==n && p!=1)
        return true;
    else if (p!=n || p==1)
        return false;
}

int main()
{
    int n, m;
    cin >> n;
    if(isPrime(n))
    {
        cout << "YES";
    }
    else
    {
        for(m=2; m<=n; m++)
            if(isPrime(m) && n%m==0)
                break;
            else
                continue;
        cout << m;
    }
}
