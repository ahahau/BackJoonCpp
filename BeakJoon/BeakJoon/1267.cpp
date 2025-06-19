#include<iostream>
using namespace std;

int main()
{
	int inp, Y = 0, M = 0;
	cin >> inp;
	for (int i = 0; i < inp; i++)
	{
		int finp;
		cin >> finp;
		Y += (finp / 30 + 1) * 10;
		M += (finp / 60 + 1) * 15;
	}
	if (Y < M)
	{
		cout << "Y " << Y;
	}
	else if (Y > M)
	{
		cout << "M " << M;
	}
	else
	{
		cout << "Y M " << Y;
	}
}
