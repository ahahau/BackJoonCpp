#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int inp;
	int a = 665;
	string b;
	cin >> inp;

	for (int i = 0; i < inp; i++) 
	{
		while (true) 
		{
			a++;
			b = to_string(a);
			if (b.find("666") != -1)
				break;
		}
	}
	cout << a << endl;
}