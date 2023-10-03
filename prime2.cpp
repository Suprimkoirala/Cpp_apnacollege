#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int n, i;
	cin >> n;
	bool flag = 0;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 1;
			cout << "Not prime" << endl;
			break;
		}
	}
	if (!flag)
		cout << "Prime";
	// if (i == n)
	// 	cout << "prime";
	// else
	// 	cout << "not prime";
	return 0;
}
