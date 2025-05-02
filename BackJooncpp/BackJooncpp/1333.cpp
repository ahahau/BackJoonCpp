#include <iostream>
using namespace std;

int main()
{
	int a, b, c, time = 0, ans = 0;
	cin >> a >> b >> c;
		for (int i = 1; i <= a; i++) 
		{
				for (int j = 1; j <= b; j++) time++;
				for (int t = 1; t <= 5; t++) 
				{
						if ((time % c) == 0)
						{
							ans = time;
							i = a;
							break;
						}
					time++;
				}
				if (i == a && ans == 0) 
				{
					while (1) 
					{
							if ((time % c) == 0)
							{
								ans = time;
								break;
							}
						time++;
					}
				}
		}
	cout << ans;
}