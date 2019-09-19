#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a_cnt = 0, b_cnt = 0, c_cnt = 0, other_cnt = 0;
    for(int i = 0; i < s.length() - 1; i++)
    {
        if(s[i] == 'a') a_cnt++;
        if(s[i] == 'b') b_cnt++;
        if(s[i] == 'c') c_cnt++;
        if(s[i] >= 'd' && s[i] <= 'z') other_cnt++;
    }
    cout << a_cnt << endl << b_cnt << endl << c_cnt << endl << other_cnt;
    return 0;
}
