#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
	int inp;
	cin >> inp;
	map<string, int> m;
	for (int i = 0; i < inp; i++)
	{
		string finp, fcnt;
		cin >> finp >> fcnt;
		if (fcnt == "enter")
		{
			m[finp] = 1;
		}
		else
		{
			m[finp] = 0;
		}
	}
	vector<string> arr;
	for (auto a : m)
	{
		if (a.second == 1)
		{
			arr.push_back(a.first);
		}
	}
	for (int i = arr.size() - 1; i >= 0; i--)
	{
		cout << arr[i] << '\n';
	}
}