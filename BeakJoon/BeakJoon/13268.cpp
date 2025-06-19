#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int inp, cnt = 0;
	cin >> inp;
	inp %= 100;
	if (inp == 0 || inp == 10 || inp == 30 || inp == 60) 
		cnt = 0;
	else if ((0 < inp && inp < 10) || (10 < inp && inp <= 15) || (25 <= inp && inp < 30) || (30 < inp && inp <= 35) || (55 <= inp && inp < 60) || (60 < inp && inp <= 65) || (95 <= inp && inp < 100)) 
		cnt = 1;
	else if ((15 < inp && inp < 25) || (35 < inp && inp <= 40) || (50 <= inp && inp < 55) || (65 < inp && inp <= 70) || (90 <= inp && inp < 95)) 
		cnt = 2;
	else if ((40 < inp && inp < 50) || (70 < inp && inp <= 75) || (85 <= inp && inp < 90)) 
		cnt = 3;
	else
		cnt = 4;
	cout << cnt;
}