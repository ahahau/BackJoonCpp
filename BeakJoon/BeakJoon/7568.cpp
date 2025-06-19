#include<iostream>
using namespace std;
int main()
{
	int input;
	cin >> input;
	int** arr = new int* [input];
	int* ans = new int[input];
	for (int i = 0; i < input; i++)
		arr[input] = new int[2];

	int a, b;
	for (int i = 0; i < input; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}
	for (int i = 0; i < input; i++)
	{
		int rang = 0;
		for (int j = 0; j < input; j++)
		{
			int cnt = 0;
			if (arr[i][0] < arr[j][0])
				cnt++;
			if (arr[i][1] < arr[j][1])
				cnt++;
			if (cnt == 2)
				rang++;
		}
		ans[i] = rang;
	}
	for (int i = 0; i < input; i++)
		cout << ans[i] << " ";
}