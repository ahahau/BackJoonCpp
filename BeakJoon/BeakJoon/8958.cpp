#include<iostream>
#include<vector>
using namespace std;
int cnt = 0;
void Cal(string a,int b = 0,int c = 0)
{
	if (b == a.size())
		return;
	else
	{
		int d = a[b] == 'O' ? c + 1 : 0;
		cnt += d;
		Cal(a, b + 1, d);
	}
}
int main()
{
	int inp;
	cin >> inp;
	vector<string> arr(inp);
	for (int i = 0; i < inp; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < inp; i++)
	{
		cnt = 0;
		Cal(arr[i]);
		cout << cnt << endl;
	}
}