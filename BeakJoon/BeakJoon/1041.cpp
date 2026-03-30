#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<queue>

using namespace std;


long  long dice[6];
int main() {
	long long inp;
	cin >> inp;
	long long  one = 987654321;
	long long two = 987654321;
	long long three = 987654321;
	int a = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> dice[i];
		one = min(one, dice[i]);
		a = max(a, (int)dice[i]);
	}
	if (inp == 1)
	{
		cout << dice[0] + dice[1] + dice[2] + dice[3] + dice[4] + dice[5] - a;
		return 0;
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (i + j != 5)
			{
				two = min(two, dice[i] + dice[j]);
				for (int k = j + 1; k < 6; k++)
				{
					if (j + k != 5 && k + i != 5)
						three = min(three, dice[i] + dice[j] + dice[k]);
				}
			}
		}
	}


	long long p1 = 5 * (inp - 2) * (inp - 2) + 4 * (inp - 2);
	long long p2 = 8 * (inp - 2) + 4;

	cout << (p1 * one) + (p2 * two) + (4 * three);
}