#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int inp;
	cin >> inp;
	vector<int> arr(inp+1);
	arr[1] = 1;
	arr[2] = 1;
	for(int i = 3; i < inp + 1; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[inp];
}