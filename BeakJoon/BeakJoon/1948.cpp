#include<iostream>
using namespace std;
int main()
{
	int inp;
	int cnt = 0;

	cin >> inp;

	if (inp < 10)
	{
		cout << inp;
		return 0;
	}

	for (int i = 1; i <= inp; i *= 10)
	{
		cnt += inp - i + 1;
	}

	cout << cnt;
}