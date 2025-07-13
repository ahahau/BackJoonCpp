#include<iostream>
#include<map>
using namespace std;
int main()
{
	int inp;
	cin >> inp;
	map<int, int> arr;
	int finp,cnt =0;
	for (int i = 0; i < inp; i++)
	{
		cin >> finp;
		arr[finp]++;
		if (arr[finp] >= 2)
		{
			cnt++;
		}
	}
	cout << cnt;
}