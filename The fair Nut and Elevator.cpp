#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, i, largest, pos = 0, result = 0;
	cin >> n;
	int *a = new int[n+1];
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int count = 0;
	largest = a[0];
	for (i = 1; i <= n; i++)
	{
		if (a[i] > largest)
		{
			largest = a[i];
			pos = i;
		}
	}

	for (i = 1; i <= n; i++)
	{
		if (a[i] != 0)
		{
			result += 2 * ((abs(i - pos) + i)* a[i]);
			/*if (i >= pos)
			{
				result = result + 2 * (((i-1) - pos) + (i-1) + a[i]);
			}
			else
			{
				result = result + 2 * ((pos - (i-1)) + (i-1) + a[i]);

			}*/
		}
	}
	cout << result;
	system("pause");
	return 0;
}
