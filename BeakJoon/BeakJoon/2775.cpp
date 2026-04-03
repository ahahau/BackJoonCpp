#include <iostream>
using namespace std;

int Cal(int x, int y)
{
	if (y == 1)
	{
		return 1;
	}
	else if (x == 0) 
	{
		return y;
	}
	else
	{
		return (Cal(x - 1, y) + Cal(x, y - 1));
	}
}

int main() 
{
	int a, b, c;
	cin >> a;

	for (int i = 0; i < a; i++) 
	{
		cin >> b >> c;
		cout << Cal(b, c) << endl;
	}
}