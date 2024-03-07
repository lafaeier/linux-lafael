#include<iostream>
using namespace std;
int a[100000000];
int main()
{
	string q[1500];
	int n;
	bool s = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (;;)
	{
		for(int h=1;h<n;h++)
		if (a[h] > a[h + 1])
		{
			swap(a[h], a[h + 1]);
			 s= 1;
		}
		if (s == 0)break;
		else s = 0;
	}
	for (int i = 1; i <= n; i++)cout << a[i] << " ";
}