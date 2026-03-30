#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int inp, a;
	cin >> inp;
	vector<int> arr(inp);
	vector<int> ans(inp);
	for (int i = 0; i < inp; i++)
	{
		cin >> arr[i];
		ans[i] = 1;
	}
	for (int i = 0; i < inp; i++)
	{
		for (int j = 0; j < i; i++)
		{
			if (arr[i] > arr[j])
				continue;
			if (ans[j] + 1 > ans[i])
				ans[i] = ans[j] + 1;
		}
	}
	a = 0;
	for (int i = 0; i < inp; i++)
	{
		a = a > ans[i] ? a : ans[i];
	}
	cout << a;
}