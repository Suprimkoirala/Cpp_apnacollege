#include <cstdint>
#include <iostream>
using namespace std;

bool check(int a, int b, int c)
{
	int x = max(a, max(b, c));
	int y, z;

	if (x == a)
	{
		y = b;
		z = c;
	}
	else if (x == b)
	{
		y = a;
		z = c;
	}
	else
	{
		y = a;
		z = b;
	}
	if (x * x == y * y + z * z)
	{
		return true;
	}
	return false;
}
int32_t main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (check(x, y, z))
	{
		cout << "Pythagorean triplet";
	}
	else
	{
		cout << "Not a Pythagorean Triplet";
	}
}
