#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	long long* list, sum = 0;
	cin >> n;
	list = new long long[n];
	for (int i = 0; i < n; i++)
		cin >> list[i];
	sort(list, list + n);
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			sum += list[j] - list[i];
	cout << sum * 2;
}