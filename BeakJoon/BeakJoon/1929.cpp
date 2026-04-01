#include<iostream>
using namespace std;


int s[1000001] = { 0,1 };
int main() {

	int a, b;
	cin >> a >> b;

	for (int i = 2; i <= b; i++)
	{
		for (int j = 2; i * j <= b; j++)
		{
			s[i * j] = 1;
		}
	}

	for (int i = a; i <= b; i++)
	{
		if (!s[i])
		{
			cout << i << endl;
		}
	}
}