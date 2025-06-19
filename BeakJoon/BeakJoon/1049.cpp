#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int dead, inp,sdead, cnt = 0;
	cin >> dead >> inp;
	vector<int> six(inp);
	vector<int> one(inp);
	for (int i = 0; i < inp; i++)
	{
		cin >> six[i] >> one[i];
	}
	sort(six.begin(), six.end());
	sort(one.begin(), one.end());
	sdead = dead / 6;
	if (six[0] < one[0] * 6)
	{
		dead %= 6;
		cnt = sdead * six[0];
		if (six[0] < one[0] * dead)
		{
			cnt += six[0];
		}
		else 
		{
			cnt += one[0] * dead;
		}
	}
	else 
	{
		cnt += one[0] * dead;
	}
	cout << cnt;
}