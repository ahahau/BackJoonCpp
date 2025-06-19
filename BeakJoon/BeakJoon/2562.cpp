#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	long arr[9], max = LONG_MIN,cnt;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
			cnt = i + 1;
		}
	}
	cout << max << endl << cnt;
}