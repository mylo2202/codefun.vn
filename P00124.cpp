#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

string grade(float n)
{
    if(n>=0 && n<=10)
    {
        if(n>=9) return "A+";
        else if(n>=8) return "A";
        else if(n>=7) return "B";
        else if(n>=6) return "C";
        else if(n>=5) return "D";
        else return "E";
    }
    else return "-1";
}

int main()
{
    int T, i, n;
    cin >> T;
    vector<string> s;
    for(i=1; i<=T; i++)
    {
        cin >> n;
        s.push_back(grade(n));
    }
    for(i=1; i<=T; i++) cout << s[i - 1] << endl;
    return 0;
}
