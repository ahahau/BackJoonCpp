#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a, b, c, cnt = 1, bcnt = 0;
	cin >> a >> b >> c;
	if (a == 0)
	{
		cout << 1;
		return 0;
	}
	vector<int> arr(a);
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
		if (arr[i] == b)
			bcnt++;
	}
	for (int i = 0; i < a; i++)
	{
		if (arr[i] <= b)
		{
			break;
		}
		cnt++;
	}
	if (cnt + bcnt > c)
	{
		cout << -1;
		return 0;
	}
	cout << cnt;
}