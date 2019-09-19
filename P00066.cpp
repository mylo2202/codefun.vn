#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	unsigned long sum = 0;
	string digits;
	cin >> digits;

	for (int i = 0; i < digits.length(); i++) {
		sum += (digits[i] - '0');
	}

	cout << fixed << setprecision(2) << sum*1.0/digits.size();
	return 0;
}



