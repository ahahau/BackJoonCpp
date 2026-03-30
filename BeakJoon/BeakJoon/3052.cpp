#include<iostream>
#include<map>
using namespace std;
int main()
{
	int a,b, cnt = 0;
	map<int, bool> m;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		b = a % 42;
		if (m[b] == false)
		{
			m[b] = true;
			cnt++;
		}
	}
	cout << cnt;
}