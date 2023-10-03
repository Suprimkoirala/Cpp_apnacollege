#include <iostream>
using namespace std;

int main()
{
	int rows, columns, i;
	cin >> rows >> columns;
	for (i = 1; i <= rows; i++)
	{
		for (int j = 1; j < columns; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
