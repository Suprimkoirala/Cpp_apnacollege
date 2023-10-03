#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int space = 1; space <= n - i; space++)
		{
			cout << "  ";
		}
		int j;
		for (j = 1; j <= i * 2 - 1; j++)
		{
			cout << "* ";
		}
		cout << endl;

		// for (; j >= 1; j--)
		// {
		// 	cout << "* ";
		// }
	}

	for (int i = n; i >= 1; i--)
	{
		for (int space = 1; space <= n - i; space++)
		{
			cout << "  ";
		}
		int j;
		for (j = 1; j <= i * 2 - 1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
