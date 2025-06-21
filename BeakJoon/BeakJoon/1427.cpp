#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string inp,ans;
	cin >> inp;
	sort(inp.begin(), inp.end());
	for (int i = inp.size() - 1; i >= 0; i--)
	{
		ans.push_back(inp[i]);
	}
	cout << ans;
}