#include<iostream>

using namespace std;

int isprime(int num1)
{
	int res = 1;
	if (num1 < 1)
	{
		cout << " Not a Prime Number";
	}
	else
	{
		int count;
		for (int i = 1;i < num1;i++)
		{
			count = 0;
			for (int j = 2;j < i / 2;j++)
				if ((i % j) == 0)
				{
					cout << i;
				}
		}
	}
	return res;
}
int main()
{
	int num1;
	cout << "Enter the Number : ";
	cin >> num1;
	int result = isprime(num1);
	if (result == 0)
		cout << num1 << " Not a prime number";
	else
		cout << num1 << " is a Prime Number";
}