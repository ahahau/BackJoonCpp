#include<iostream>
using namespace std;
int main()
{
	int a, b, n;
	cin >> a >> b >> n;

	a = a % b; 

	for (int i = 0; i < n - 1; i++)
	{
		a *= 10;
		a %= b; 
	}

	a *= 10;
	cout << a / b;
}