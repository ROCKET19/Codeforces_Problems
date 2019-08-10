#include<iostream>
using namespace std;
int main()
{
	int count = 0, i = 1;
	long long n;
	cin >> n;
	if (n % 3)
		count = 2 * (n / 3) + 1;
	else
		count = 2 * (n / 3);

	cout << count;
	//system("pause");
	return 0;
}
