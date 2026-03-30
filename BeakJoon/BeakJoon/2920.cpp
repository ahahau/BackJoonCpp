#include<iostream>
#include<string>
using namespace std;
string a = { "1 2 3 4 5 6 7 8" };
string b = { "8 7 6 5 4 3 2 1" };
int main()
{
	string ans;
	getline(cin, ans);
	if (ans == a)
	{
		cout << "ascending";
	}
	else if (ans == b)
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}
}