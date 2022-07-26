#include<iostream>

using namespace std;

void series(int num)
{
	static long a1 = 0, a2 = 1, a3;
	if (num > 0)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
		cout << a3 << " ";
		series(num - 1);
	}
}
int main()
{
	int num;
	cout << "Enter the Number : ";
	cin >> num;
	cout << "0 1 ";
	series(num);
}