#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() 
{
	int inp,finp,cnt = 1;
	cin >> inp;
	map<string, int> m;
	string a, b;
	for (int i = 0; i < inp; i++) 
	{
		m.clear();
		cnt = 1;
		cin >> finp;
		for (int i = 0; i < finp; i++) 
		{
			cin >> a;
			cin >> b;
			m[b]++;
		}
		for (auto t : m) 
		{
			cnt *= t.second + 1;
		}
		cout << cnt - 1 << '\n';
	}
}