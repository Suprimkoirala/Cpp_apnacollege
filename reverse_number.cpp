#include <iostream>
#include <memory>
using namespace std;

int main()
{
	int n, rev = 0, digit;
	cin >> n;
	while (n != 0)
	{
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	cout << rev;
	return 0;
}
