#include<iostream>
using namespace std;
int  main()
{
	int a, b, c, cnt = 0;
	cin >> a >> b >> c;
	while (b != c)
	{
		b = (b + 1) / 2;
		c = (c + 1) / 2;
		cnt++;
	}
	cout << cnt;
}