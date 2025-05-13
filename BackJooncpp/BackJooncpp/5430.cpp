#include<iostream>
#include<deque>
#include<string>
using namespace std;
int main()
{
	string order, nums, num;
	int t, numsize;
	bool isError = false, isReverse = false;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		isError = isReverse = false;
		deque<int> deq;
		cin >> order >> numsize >> nums;
		for (int j = 0; j < nums.size(); j++)
		{
			if (nums[j] >= '0' && nums[j] <= '9')
			{
				num += nums[j];
			}
			else if (nums[j] == ',' || nums[j] == ']')
			{
				if (!num.empty())
				{
					deq.push_back(stoi(num));
					num = "";
				}
			}
		}
		for (int j = 0; j < order.size(); j++)
		{
			if (isError)
				break;
			if (order[j] == 'R')
			{
				isReverse = !isReverse;
			}
			else
			{
				if (deq.empty())
				{
					isError = true;
					continue;
				}
				if (isReverse)
				{
					deq.pop_back();
				}
				else 
				{
					deq.pop_front();
				}
			}
		}
		if (isError)
		{
			cout << "error" << endl;
		}
		else 
		{
			cout << '[';
			int deqsize = deq.size() - 1;
			if (isReverse)
			{
				for (int j = 0; j < deqsize; j++)
				{
					cout << deq.back() << ',';
					deq.pop_back();
					if (deq.empty())
						break;
				}
			}
			else 
			{
				for (int j = 0; j < deqsize; j++)
				{
					cout << deq.front() << ',';
					deq.pop_front();
					if (deq.empty())
						break;
				}
			}
				if (!deq.empty())
				cout << deq.front();
			cout << ']' << endl;
		}
	}
}