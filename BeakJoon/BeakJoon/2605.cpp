#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
	int a, b;
	cin >> a;
	vector<int>arr(a);
	for (int i = 1; i <= a; i++) 
	{
		cin >> b;
		arr.insert(arr.begin() + b, i);
	}
	for (int i = a - 1; i >= 0; i--)
		cout << arr[i] << ' ';
}