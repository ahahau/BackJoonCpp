#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int inp, cnt = 0,inp2;
	cin >> inp;
	vector<int> arr;
	for (int i = 0; i < inp; i++)
	{
		cin >> inp2;
		if (inp2 != 0)
		{
			arr.push_back(inp2);
		} 
		else if(i != 0)
		{
			arr.pop_back();
		}
	}
	for (int i = 0; i < arr.size(); i++)
	{
		cnt += arr[i];
	}
	cout << cnt;
}