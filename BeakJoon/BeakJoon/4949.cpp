#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string str = " ";

	while (true)
	{
		bool correct = true;
		stack<char> stack;
		getline(cin, str);

		if (str.compare(".") == 0)
			break;

		for (int i = 0; i < str.length(); i++)
		{
			if (str.at(i) == '(')
				stack.push('(');
			else if (str.at(i) == '[')
				stack.push('[');
			else if (str.at(i) == ')')
			{
				if (!stack.empty() && stack.top() == '(')
					stack.pop();
				else
				{
					correct = false;
					break;
				}
			}
			else if (str.at(i) == ']')
			{
				if (!stack.empty() && stack.top() == '[')
					stack.pop();
				else
				{
					correct = false;
					break;
				}
			}
		}

		if (correct && stack.empty())
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
}