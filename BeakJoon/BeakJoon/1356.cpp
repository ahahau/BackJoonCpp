#include <iostream>
#include <string>
using namespace std;

int main()
{
	string inp;
	int left, right;

	cin >> inp;
	for (int i = 1; i < inp.size(); i++)
	{
		left = int(inp[0] - '0');
		for (int j = 1; j < i; j++)
			left *= int(inp[j] - '0');

		right = int(inp[i] - '0');
		if (i != inp.size())
			for (int j = i + 1; j < inp.size(); j++) 
				right *= (inp[j] - '0');

		if (left == right) 
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}