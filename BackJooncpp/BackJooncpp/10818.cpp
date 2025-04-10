#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	long inp, min = LONG_MAX, max = LONG_MIN;
	cin >> inp;
	int *arr = new int[inp];
	for (int i = 0; i < inp; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < inp; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << min << " " << max;
}