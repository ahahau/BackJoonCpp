#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int c = 10000;
long long a, b, cnt;

void Cal(long long a, int cnt)
{
	if (a > b) return;

	if (a == b)
	{
		c = min(c, cnt);
	}
	Cal(a * 2, cnt + 1);
	Cal(a * 10 + 1, cnt + 1);

}

int main()
{

	cin >> a >> b;

	Cal(a, 1);

	if (c == 10000) 
		cout << -1;
	else 
		cout << c;
}