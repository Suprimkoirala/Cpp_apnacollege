#include <algorithm>
#include <bits/utility.h>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	do
	{

		cin >> a >> b >> c;
	} while (a == b || a == c || b == c);

	if (a > b)
	{
		if (a > c)
		{
			cout << a << " is the greatest" << endl;
		}
		else
		{
			cout << c << " is the greatest" << endl;
		}
	}
	else
	{
		if (b > c)
		{

			cout << b << " is the greatest" << endl;
		}
		else
		{

			cout << c << " is the greatest" << endl;
		}
	}
	return 0;
}
