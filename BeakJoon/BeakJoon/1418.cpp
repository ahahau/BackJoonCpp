#include <iostream>
using namespace std;

int main()
{
	int a, b, cnt = 0;
	cin >> a >> b;

	for (int i = 1; i <= a; i++)  
	{
		int fa = i;
		int maxPrime = 0;

		for (int j = 2; j * j <= fa; j++) 
		{
			while (fa % j == 0) 
			{
				fa /= j;
				if (j > maxPrime)
					maxPrime = j;
			}
		}
		if (fa > 1) 
			maxPrime = max(maxPrime, fa); 

		if (maxPrime <= b)
			cnt++;
	}
	cout << cnt;
}
