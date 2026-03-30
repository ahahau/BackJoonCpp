#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int inp;
	cin >> inp;
	vector<int> arr(inp);
	arr[0] = 1;
	arr[1] = 2;
	for (int i = 2; i < inp; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}
	cout << arr[inp - 1] ;
}