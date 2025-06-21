#include<iostream>
using namespace std;
int main()
{
	int inp;
	cin >> inp;
	int ans = inp * (inp - 1) * (inp -2) * (inp - 3) / 24;
	if (ans < 0)
		ans = 0;
	cout << ans;
}