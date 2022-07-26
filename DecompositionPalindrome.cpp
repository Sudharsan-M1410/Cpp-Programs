#include<iostream>
#include<string>
#include<string.h>

using namespace std;

string Reverse(string s,int n)
{
	string out = "";
	int len = n - 1;
	while (len >= 0)
	{
		out = out + s[len];
		len--;
	}
	return out;
}
void ispalindrome(string s)
{
	int n = s.length();
	//cout << n;
	string s1;
	s1 = Reverse(s, n);
	if (s == s1)
	{
		cout << s << " ";
	}
	cout << endl;
}

int main()
{
	string s;
	cout << "Enter the Word : ";
	cin >> s;
	int i = 0, k = 0, j, n1;
	string s1;
	int n = s.length();
	//s1 = s.substr(0, 2);
	//cout << s1;
	for (int i = 0;i < n;i++)
	{
		s1 = "";
		for (j = i+1;j < n;j++)
		{
			s1 = s.substr(i, j);
			//cout << s1 << endl;
			ispalindrome(s1);
		}
	}
}