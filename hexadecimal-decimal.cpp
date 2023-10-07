#include <bits/stdc++.h>
#include <cstdint>
#include <ios>
using namespace std;

int hexadecimalToDecimal(string n)
{
	int ans = 0;
	int x = 1;
	int s = n.size();
	for (int i = s - 1; i >= 0; i--)
	{
		if (n[i] >= '0' && n[i] <= '9')
		{
			ans += x * (n[i] - '0');
		}

		else if (n[i] >= 'A' && n[i] <= 'F')
		{
			ans += x * (n[i] - 'A' + 10);
		}
		x *= 16;
	}
	return ans;
}

int decimalToBinary(int n)
{
	int x = 1;
	int ans = 0;
	while (x <= n)
	{
		x *= 2;
	}
	x /= 2;
	while (x > 0)
	{
		int lastDigit = n / x;
		n -= lastDigit * x;
		x /= 2;
		ans = ans * 10 + lastDigit;
	}
	return ans;
}
int decimalToOctal(int num)
{
	int x = 1;
	int ans = 0;
	while (x <= num)
	{
		x *= 8;
	}
	x /= 8;
	while (x > 0)
	{
		int lastDigit = num / x;
		num -= lastDigit * x;
		x /= 8;
		ans = ans * 10 + lastDigit;
	}
	return ans;
}
int32_t main()
{
	// string n;
	int n;
	cin >> n;
	cout << decimalToOctal(n);
}
