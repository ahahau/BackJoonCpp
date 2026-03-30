#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int inp, finp;
	string sinp;
	cin >> inp;
	stack<int> s;
	for (int i = 0; i < inp; i++)
	{
		cin >> sinp;
		if (sinp == "push")
		{
			cin >> finp;
			s.push(finp);
		}
		else if (sinp == "top")
		{
			if (s.empty())
				cout << -1 << endl;
			else
				cout << s.top() << endl;
		}
		else if (sinp == "size")
		{
			cout << s.size() << endl;
		}
		else if (sinp == "empty")
		{
			if (s.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (sinp == "pop")
		{
			if (s.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << s.top() << endl;
				s.pop();
			}
		}
	}
}