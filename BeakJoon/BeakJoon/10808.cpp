#include<iostream>
#include<map>
using namespace std;
int main()
{
	string ans = "abcdefghijklmnopqrstuvwxyz";
	string inp;
	cin >> inp;
	map<char, int> m;
	for (int i = 0; i < inp.size(); i++)
	{
		m[inp[i]]++;
	}
	for (int i = 0; i < ans.size(); i++)
	{
		cout << m[ans[i]] << " ";
	}
}