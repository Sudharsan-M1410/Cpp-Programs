#include<iostream>

using namespace std;

void printsort(int arr[], int n);
void bubblesort(int arr[], int n)
{
	int i, j;
	for (i = 0;i < n-1;i++)
	{
		for (j = 0;j < n - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
			printsort(arr, n);
		}
	}
}
void printsort(int arr[], int n)
{
	int i;
	for (i = 0;i < n;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int n, i;
	cout << "Enter the Number of Elements : ";
	cin >> n;
	int* arr;
	arr = new int[n];
	cout << "Enter the Elements : ";
	for (i = 0;i < n;i++)
		cin >> arr[i];
	bubblesort(arr, n);
}