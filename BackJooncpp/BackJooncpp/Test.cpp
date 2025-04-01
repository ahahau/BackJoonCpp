#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int inp,a,b;
	cin >> inp;
	vector<int> v;
	for (int i = 0; i < inp; i++)
	{
		cin >> a >> b;
		v.push_back(a + b);
	}
	for (int i = 0; i < inp; i++)
	{
		int k = i + 1;
		cout << "Case #" << k << ": " << v[i] << endl;
	}
}

