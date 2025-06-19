#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int inp, cnt = 0;
	cin >> inp;
	vector<string> arr(inp);

	for (int i = 0; i < inp; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end(), [](const string& a, const string& b) {
		return a.size() < b.size();
		});

	vector<bool> valid(inp, true);

	for (int i = 0; i < inp; i++)
	{
		for (int j = i + 1; j < inp; j++)
		{
			if (arr[j].substr(0, arr[i].size()) == arr[i])
			{
				valid[i] = false;
				break;
			}
		}
	}

	for (int i = 0; i < inp; i++)
	{
		if (valid[i]) cnt++;
	}
	cout << cnt;
}
