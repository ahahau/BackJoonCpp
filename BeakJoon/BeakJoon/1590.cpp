#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<long long> arr;
	long long a, b; 
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		int c, d, e; 
		cin >> c >> d >> e;
		for (int i = 0; i < e; i++) 
		{
			long long t = c + d * i;
			arr.push_back(t);
		}
	}
	sort(arr.begin(), arr.end());

	int start = 0;
	int end = arr.size();
	while (start < end) 
	{
		int mid = (start + end) / 2;
		if (arr[mid] >= b) end = mid;
		else start = mid + 1;
	}
	if (arr[start] - b < 0) cout << -1;
	else cout << arr[start] - b;
}