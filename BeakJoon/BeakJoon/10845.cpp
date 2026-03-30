#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int inp, a;
	string sinp;
	cin >> inp;
	queue<int> q;
	for (int i = 0; i < inp; i++)
	{
		cin >> sinp;
		if (sinp == "push")
		{
			cin >> a;
			q.push(a);
		}
		else if (sinp == "pop")
		{
			if (q.empty())
				cout << -1 << endl;
			else
			{
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (sinp == "size")
		{
			cout << q.size() << endl;
		}
		else if (sinp == "empty")
		{
			if (q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (sinp == "front")
		{
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else 
		{
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
	}
}