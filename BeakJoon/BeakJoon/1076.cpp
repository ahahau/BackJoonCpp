#include<iostream>
#include<cmath>
using namespace std;
int res(string a)
{
	if (a == "black")
		return 0;
	if (a == "brown")
		return 1;
	if (a == "red")
		return 2;
	if (a == "orange")
		return 3;
	if (a == "yellow")
		return 4;
	if (a == "green")
		return 5;
	if (a == "blue")
		return 6;
	if (a == "violet")
		return 7;
	if (a == "grey")
		return 8; 
	return 9;
}
int main()
{
	string inp1,inp2,inp3;
	cin >> inp1 >> inp2 >> inp3;
	long long ans;
	ans = (res(inp1) * 10 + res(inp2)) * pow(10, res(inp3));
	cout << ans;
}