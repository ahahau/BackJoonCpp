#include<iostream>
using namespace std;
int main()
{
	int inp,ans = 100,car,s,i = 0;
	cin >> inp;
	s = inp;
	while (inp != ans)
	{
		car = (((s / 10) + (s % 10)) % 10) + ((s % 10)*10);
		ans = car;
		s = car;
		i++;
	}
	cout << i;
}