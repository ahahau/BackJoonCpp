#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int inp, cnt = 0,save;
	cin >> inp;
	vector<int> arr(inp);
	for (int i = 0; i < inp; i++)
	{
		cin >> arr[i];
	}
	cin >> save;
	for (int i = 0; i < inp; i++)
	{
		int fcnt = 0;
		if (arr[i] == 0)
			continue;
		while (true)
		{
			if (arr[i] < 0)
				break;
			fcnt++;
			arr[i] -= save;
		}
		cnt += fcnt;
	}
	cout << cnt * save;
}