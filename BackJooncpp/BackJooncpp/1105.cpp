#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	int cnt = 0;
	cin >> a >> b;
	if (a.length() != b.length())
	{
		cout << 0;
		return 0;
	}
	for (int  i = 0; i < a.length(); i++)
	{
		if (a[i] == b[i])
		{
			if (a[i] == '8')
				cnt++;
		}
		else
		{
			break;
		}
	}
	cout << cnt;
}