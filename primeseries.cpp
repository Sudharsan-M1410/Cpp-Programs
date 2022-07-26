#include<iostream>

using namespace std;

int isprime(int num)
{
	int i;

	for (i = 2;i <= num;i++)
	{
		if ((num % i) == 0)
		{
			return 0;
		}
		else
			return 1;
	}
}
int main()
{
	int num1, num2, i, j;
	cout << "Enter the Number1 and Number 2 : ";
	cin >> num1 >> num2;
	for (i = num1;i <= num2;i++)
	{
		if (isprime(i))
		{
			cout << i << " ";
		}
	}
}