#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int inp, a, b;
	cin >> inp;
	for (int i = inp; i >= 0; i--) 
	{
		a = i;
		b = 1;
		while (a != 0) {
			if (a % 10 != 4 && a % 10 != 7) 
			{
				b = 0;
				break;
			}
			else 
			{
				a /= 10;
			}
		}
		if (b == 1) 
		{
			cout << i << endl;
			break;
		}
	}
}