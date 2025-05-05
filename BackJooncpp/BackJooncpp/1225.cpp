#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string a, b;
	long long sum = 0;
	cin >> a >> b;
	int alen = a.length();
	int blen = b.length();
	for (int i = 0; i < alen; i++)
	{
		for (int j = 0; j < blen; j++)
			sum += (int)(a[i] - 48) * (int)(b[j] - 48);
	}
	cout << sum;
}