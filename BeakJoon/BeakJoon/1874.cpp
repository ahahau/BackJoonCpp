#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(void)
{
	vector<char>carr;
	stack<int>arr;
	int inp;
	int cnt = 1;
	cin >> inp;
	for (int i = 0; i < inp; i++)
	{
		int num;
		cin >> num;

		while (cnt <= num)
		{
			arr.push(cnt);
			cnt++;
			carr.push_back('+');
		}
		if (arr.top() == num)
		{
			arr.pop();
			carr.push_back('-');
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < carr.size(); i++)
		cout << carr[i] << '\n';
}