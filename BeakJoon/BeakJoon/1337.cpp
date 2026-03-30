#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int N, cnt, ans = 5;
	cin >> N;
	vector<int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int max = 0;
	for (int i = 0; i < N; i++) 
	{
		int l = 1;
		for (int j = i + 1; j < N; j++)
		{
			if (arr[j] - arr[i] < 5 && arr[j] - arr[i] > 0) 
				l++;
		}
		if (l > max) 
			max = l;
	}
	cout << 5 - max;
}