#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a, b, c,d, cnt = - 1;
	cin >> a >> b;
	vector<bool> arr(a);
	for (int i = 0; i < a; i++)
	{
		arr[i] = i == 0;
	}
	for (int i = 0; i < b; i++)
	{
		cin >> c >> d;
		if (arr[c - 1])
			d = true;
		else if (arr[d - 1])
			c = true;
	}
	for (int i = 0; i < a; i++)
	{
		if (arr[i])
			cnt++;
	}
	cout << cnt;
}