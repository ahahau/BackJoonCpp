#include<iostream>
#include<vector>
using namespace std;
int Cal(vector<string> arr, int x, int y)
{
	int cnt1 = 0, cnt2 = 0;
	for (int i = y; i < y + 8; i++)
	{
		for (int j = x; j < x + 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				if (arr[i][j] == 'W')
				{
					cnt1++;
				}
				else
				{
					cnt2++;
				}
			}
			else 
			{
				if (arr[i][j] == 'W')
				{
					cnt2++;
				}
				else
				{
					cnt1++;
				}
			}
		}
	}
	return(min(cnt1, cnt2));
}
int main()
{
	int a, b,Max = 21902199000;
	cin >> b >> a;
	vector<string> arr(b);
	for (int i = 0; i < b; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i <= b - 8; i++)
	{
		for (int j = 0; j <= a - 8; j++)
		{
			int cnt = Cal(arr, j, i);
			Max = min(Max, cnt);
		}
	}
	cout << Max;
}