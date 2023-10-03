#include <iostream>
using namespace std;

int main()
{
	int a, b, i;
	cin >> a >> b;

	for (i = a; i < b; i++)
	{
		int num;
		for (num = 2; num < i; num++)
		{
			if (i % num == 0)
			{
				break;
			}
		}

		if (num == i)
		{
			cout << i << endl;
		}
	}
}
