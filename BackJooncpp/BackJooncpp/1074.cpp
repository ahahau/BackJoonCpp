#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N, r, c,cnt = 0;
	cin >> N >> r >> c;
	int x = 1, y = 1;
	for (int i = N; i > 0; i--)
	{
		double qu = pow(2, i - 1);
		if (r - qu < 0 && c - qu < 0) // 1사분면
			cnt += 0;
		else if (r - qu < 0 && c - qu >= 0) //2사분면
		{
			cnt += qu * qu;
			c -= qu;
		}
		else if (r - qu >= 0 && c - qu >= 0) // 3사분면
		{
			c -= qu;
			r -= qu;
			cnt += qu * qu * 3;
		}
		else if (r - qu >= 0 && c - qu < 0) // 4사분면
		{
			r -= qu;
			cnt += qu * qu * 2;
		}
	}
	cout << cnt;
}