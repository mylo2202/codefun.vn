#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    int t, hour, minute, second;
    cin >> t;
    hour = t / 3600;
    t = t % 3600;
    minute = t / 60;
    t = t % 60;
    second = t;
    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << minute << ":"
         << setw(2) << setfill('0') << second << endl;
    return 0;
}
