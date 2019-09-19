#include <iostream>
#include <math.h>
using namespace std;

bool isSquare(int n)
{
    if(sqrt(n)*sqrt(n) == n) return true;
    else return false;
}

int main()
{
    int n, i, cnt = 0;;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        if(isSquare(i)) cnt++;
    }
    cout << cnt;
    return 0;
}
