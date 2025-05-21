#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a, b, cnt = 0;
	cin >> a >> b;
	vector<int> arr(a);
	for (int i = a - 1; i >= 0; i--)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < a; i++)
	{
		if (arr[i] > b)
			continue;
		int g = b / arr[i];
		cnt += g;
		b -= g * arr[i];
	}
	cout << cnt;
}