#include <iostream>
using namespace std;

int factorial(int a)
{
	int fact = 1;
	for (int i = a; i >= 1; i--)
	{
		fact = fact * i;
	}
	return fact;
}
int main()
{
	int n;
	cin >> n;
	cout << factorial(n);
}
