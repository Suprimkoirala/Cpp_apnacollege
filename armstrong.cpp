#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int n, digit, arm = 0;
	cin >> n;
	int orig = n;
	while (n > 0)
	{
		digit = n % 10;
		arm += pow(digit, 3);
		n = n / 10;
	}
	if (arm == orig)
		cout << "Armstrong number";
	else
		cout << "Not Armstrong Number";
	return 0;
}
