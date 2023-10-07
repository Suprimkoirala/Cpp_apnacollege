#include <cmath>
#include <iostream>
using namespace std;

int binaryToDecimal(int a)
{
	int ans, temp = 0;
	for (int i = 0; a > 0; i++)
	{
		ans = a % 10;
		temp = temp + ans * pow(2, i);
		a = a / 10;
	}
	return temp;
}

int octalToDecimal(int a)
{
	int ans, temp = 0;
	for (int i = 0; a > 0; i++)
	{
		ans = a % 10;
		temp = temp + ans * pow(8, i);
		a = a / 10;
	}
	return temp;
}
int main()
{
	int b, o;
	cout << "Enter binary number: ";
	cin >> b;

	cout << "Enter octal number: ";
	cin >> o;
	cout << "Decimal equivalent is : " << binaryToDecimal(b) << endl;

	cout << "Octal Equivalent is : " << octalToDecimal(o) << endl;
}
