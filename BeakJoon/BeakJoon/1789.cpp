#include <iostream>

using namespace std;

int main()
{
	long long S;
	cin >> S;

	long long sum = 0, num = 1;
	int cnt = 0;

	while (true)
	{
		sum = sum + num;
		cnt++;
		if (sum > S) 
		{
			cnt--;
			break;
		}
		num++;
	}

	cout << cnt;
}