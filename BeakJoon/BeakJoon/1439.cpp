#include<iostream>
#include<string>

using namespace std;

int main() 
{

	string inp;
	cin >> inp;

	int cnt = 0;
	char a = inp[0];
	for (int i = 1; i < inp.size(); i++) 
	{
		if (a != inp[i])
		{
			cnt++;
			a = inp[i];
		}
	}

	if (cnt % 2 == 1) 
	{
		cnt /= 2;
		cnt++;
	}
	else 
	{
		cnt /= 2;
	}

	cout << cnt;
}