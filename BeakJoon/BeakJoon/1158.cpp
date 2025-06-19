#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	queue<int> arr;
	for (int i = 1; i <= a; i++)
	{
		arr.push(i);
	}
	cout << "<";
	while (!arr.empty())
	{
		if (arr.size() == 1)
		{
			cout << arr.front();
			break;
		}
		for (int i = 1; i < b; i++)
		{
			arr.push(arr.front());
			arr.pop();
		}
		cout << arr.front() << ", ";
		arr.pop();
	}
	cout << ">";
}