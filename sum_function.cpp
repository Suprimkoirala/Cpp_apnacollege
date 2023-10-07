#include <cstdint>
#include <iostream>
using namespace std;

int Sum(int a)
{
	int sum = 0;
	for (int i = 1; i <= a; i++)
	{
		sum += i;
	}
	return sum;
}
int32_t main()
{
	int n;
	cin >> n;
	cout << Sum(n) << endl;
}
