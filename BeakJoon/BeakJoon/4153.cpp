#include <iostream>
using namespace std;

int main() 
{
	int a, b, c,d;
	while (true) 
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			return 0;
		d = 0;

		if (a > b) 
		{
			d = b;
			b = a;
			a = d;
		}
		if (b > c) 
		{
			d = c;
			c = b;
			b = d;
		}

		if (c * c == a * a + b * b)
		{
			cout << "right" << endl;
		}
		else
		{ 
			cout << "wrong" << endl;
		}
	}
}