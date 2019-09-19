#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int i, p = 1;
        for(i=2; i<=n; i++)
        {
            p=i;
            if(n%i==0)
            {
                break;
            }
            else
                continue;
        }
    if (p==n && p!=1) return true;
    else if (p!=n || p==1) return false;
}

int main()
{
    int n, m, i;
    cin >> n >> m;
    int a[m];
    for(int i=0; i<m; i++) cin >> a[i];
    for(int i=0; i<m; i++)
    {
        if(isPrime(a[i]) && (12 % a[i] == 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;

}
