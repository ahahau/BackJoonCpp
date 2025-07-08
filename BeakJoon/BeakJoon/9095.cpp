#include<iostream>
using namespace std;
int cnt = 0;
int Cal(int a)
{
	if (a == 0)
	{
		cnt++;
		return 0;
	}
	else if (a < 0)
		return 0;
	Cal(a - 1);
	Cal(a - 2);
	Cal(a - 3);
	return 0;
}
int main()
{
	int inp;
	cin >> inp;
	for (int i = 0; i < inp; i++)
	{
		int finp;
		cin >> finp;
		if(finp > 0)
			int a = Cal(finp);
		cout << cnt << endl;
		cnt = 0;
	}
}