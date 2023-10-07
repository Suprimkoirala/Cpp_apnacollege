#include <cmath>
#include <iostream>
using namespace std;
bool isPrime(int a);

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (isPrime(i))
		{
			cout << i << endl;
		}
	}
}

bool isPrime(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
			return false;
	}
	return true;
}
