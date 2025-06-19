#include<iostream>
using namespace std;
int main()
{
	int inp, ans,cnt = 1, a;
	cin >> inp;
	ans = inp;
	for (int i = 1; i < inp; i++)
	{
		if (ans - i > 0)
		{
			ans -= i;
			cnt++;
		}
		else
		{
			break;
		}
	}
	if (cnt % 2 == 0)
	{
		cnt = cnt - ans + 1;
		cout << ans << "/" << cnt;
	}
	else 
	{
		cnt = cnt - ans + 1;
		cout << cnt << "/" << ans;
	}
}