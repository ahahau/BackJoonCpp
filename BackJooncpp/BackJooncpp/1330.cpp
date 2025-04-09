#include<iostream>
using namespace std;
int main()
{
	long a, b;
	cin >> a >> b;
	if (a > b)
		cout << '>';
	else if (a < b)
		cout << '<';
	else
		cout << "==";
}