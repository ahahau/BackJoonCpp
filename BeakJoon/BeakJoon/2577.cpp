#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	string d = to_string(a * b * c);
	map<int, int> m;
	for (int i = 0; i < d.size(); i++)
	{
		m[d[i] - '0']++;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << m[i] << endl;
	}
}