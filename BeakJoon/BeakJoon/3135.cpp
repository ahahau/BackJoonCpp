#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int Min = max(a, b) - min(a,b);
	int inp;
	cin >> inp;
	vector<int> arr(inp);
	for (int i = 0; i < inp; i++) 
	{
		cin >> arr[i];
		if(max(b, arr[i]) - min(b, arr[i]) + 1 < Min)
		{
			Min = max(b, arr[i]) - min(b, arr[i]) + 1;
		}
	}
	cout << Min;
}