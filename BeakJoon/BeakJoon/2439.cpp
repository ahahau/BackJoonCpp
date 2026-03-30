#include<iostream>
using namespace std;
int main()
{
	int inp;
	cin >> inp;
	for (int i = 1; i <= inp; i++)
	{
		for (int j = 0; j < inp - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}