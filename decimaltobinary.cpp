#include<iostream>

using namespace std;

int main()
{
	int num, i, rem[10];
	cout << "Enter the Number : ";
	cin >> num;
	for (i = 0;num > 0;i++)
	{
		rem[i] = num % 2;
		num = num / 2;
	}
	cout << "Binary Number : ";
	for (i =i-1;i >= 0;i--)
	{
		cout << rem[i];
	}
}