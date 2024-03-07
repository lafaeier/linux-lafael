#include<iostream>
using namespace std;
long long a[123456000] = {};
long long f[123456000] = {};
static void gf(int q, int w)
{
	int z1 = q, z2 = w;
	if (q < w)
	{
		for (; z1 < z2;)
		{
			for (; z1 != z2; z2 -- )
			{
				if (a[z1] > a[z2])
				{
					swap(a[z1], a[z2]);
					z1++;
					break;
				}
			}
			for (; z1 != z2; z1++)
			{
				if (a[z1] > a[z2])
				{
					swap(a[z1], a[z2]);
					z2--;
					break;
				}
			}
		}
		gf(q, z1 - 1);
		gf(z1 + 1, w);
	}
}
int main()
{

	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int q = 1, w = n;
	gf(q, w);
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
}