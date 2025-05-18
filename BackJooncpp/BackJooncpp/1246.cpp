#include<iostream>
#include<vector>
#include<algorithm>
bool cmp(int a, int b) 
{
	return a > b;
}
using namespace std;
int main()
{
	int cnt, inp;
	cin >> cnt >> inp;
	vector<int> arr(inp);
	for (int i = 0; i < inp; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end(), cmp);
	int Maxw = -10;
	int ccnt = 0;
	for (int i = 1; i <= arr[0]; i++)
	{
		int fcnt = cnt;
		int ans = 0;
		int won = 0;
		for (int j = 0; j < arr.size(); j++)
		{
			if (arr[j] >= i)
			{
				won += i;
				fcnt--;
			}
			if (fcnt == 0)
				break;
		}
		if (Maxw < won)
		{
			Maxw = won;
			ccnt = i;
		}
	}
	cout << ccnt << " " << Maxw;
}