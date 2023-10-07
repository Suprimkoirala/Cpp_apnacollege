#include <iostream>
using namespace std;
int factorial(int a)
{
	int fact = 1;
	for (int i = 2; i <= a; i++)
	{
		fact *= i;
	}
	return fact;
}
int nCr(int n, int r)
{
	int value = factorial(n) / (factorial(n - r) * factorial(r));
	return value;
}
int main()
{
	int n, r;
	cin >> n >> r;
	cout << nCr(n, r);
}
