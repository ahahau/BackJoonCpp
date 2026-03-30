#include<iostream>
using namespace std;
int main()
{
	int inp;
	cin >> inp;

	int cnt = 1;
	if (inp == 1)
		cnt = 1;

	for (int i = 2; i <= inp; cnt++)
		i += 6 * cnt;

	cout << cnt;
}