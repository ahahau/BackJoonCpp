#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	string sinp;
	int inp;
	long long a = 1234567891;
	long long b = 1;
	long long cnt = 0;
	cin >> inp;
	cin >> sinp;
	for (int i = 0; i < inp; i++)
	{
		cnt += ((long(sinp[i]) - 96) * b) % a;
		b = (b * 31) % a;
	}
	cout << cnt % a;
}