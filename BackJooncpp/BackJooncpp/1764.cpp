#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, cnt = 0;
	cin >> a >> b;
	string* arr = new string[a];
	string* arr2 = new string[b];
	vector<string> ans;
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < b; i++)
	{
		cin >> arr2[i];
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (arr[i] == arr2[j])
			{
				ans.push_back(arr[i]);
				cnt++;
			}
		}
	}
	sort(ans.begin(), ans.end());
	cout << cnt << endl;
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << endl;
	}
}