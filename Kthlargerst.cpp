#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n, i;
	cout << "Enter the Number of Elements : ";
	cin >> n;
	int* arr = new int[n];
	for (i = 0;i < n;i++)
		cin >> arr[i];
	sort(arr,arr+n,greater<int>());
	for (i = 0;i < n;i++)
	{
		cout << arr[i] << " ";
	}
	int k;
	cout << "Enter the kth value : ";
	cin >> k;
	cout << arr[k - 1];
}