#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main() 
{
	int inp, dpMax = 0;
	cin >> inp;
	vector<int> arr(inp);
	vector<int> arr2(inp);
	for (int i = 0; i < inp; i++) 
	{
		cin >> arr[i];
	}
	for (int i = 0; i < inp; i++) 
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i]) 
			{
				arr2[i] = max(arr2[i], arr2[j] + 1);
			}
		}
	}
	for (int i = 0; i < inp; i++) 
	{
		if (arr2[i] > dpMax)
			dpMax = arr2[i];
	}
	dpMax++;
	cout << dpMax << endl;
}