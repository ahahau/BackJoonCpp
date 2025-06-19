#include<iostream>
using namespace std;
int main()
{
	int inp;
	cin >> inp;
	int* arr = new int[inp];
	for (int i = 0; i < inp; i++)
	{
		int a, b,cnt = 1;
		cin >> a >> b;
		for (int j = 0; j < b; j++)
		{
			cnt = (cnt * a) % 10;
		}
		if (cnt == 0)
			cnt = 10;
		arr[i] = cnt;
	}
	for (int i = 0; i < inp; i++)
	{
		cout << arr[i] << '\n';
	}
}