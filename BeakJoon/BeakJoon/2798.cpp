#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int inp, ran, ans = 0;
	cin >> inp >> ran;
	vector<int> arr(inp);
	for (int i = 0; i < inp; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < inp; i++)
	{
		for (int j = i+1; j < inp; j++)
		{
			for (int s = j+1; s < inp; s++)
			{
				int a = arr[i] + arr[j] + arr[s];
				if (a <= ran && a > ans)
					ans = a;
			}
		}
	}
	cout << ans;
}