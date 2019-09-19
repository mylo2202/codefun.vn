#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned long sum = 0;
	string digits;
	cin >> digits;

	for (int i = 0; i < digits.length(); i++) {
		sum += (digits[i] - '0');
	}

	cout << sum;
	return 0;
}


