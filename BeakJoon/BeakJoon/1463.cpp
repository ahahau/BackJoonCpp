#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int inp;
	cin >> inp;
	vector<int> arr(inp + 1);
	for (int i = 2; i <= inp; i++)
	{
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0)
		{
			arr[i] = arr[i] < arr[i / 2] + 1
				? arr[i] : arr[i / 2] + 1;
		}
		if (i % 3 == 0)
		{
			arr[i] = arr[i] < arr[i / 3] + 1
				? arr[i] : arr[i / 3] + 1;
		}
	}
	cout << arr[inp];
}