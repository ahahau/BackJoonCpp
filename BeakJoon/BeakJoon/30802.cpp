#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long person, p,t,pcnt = 0;
	cin >> person;
	vector<int> arr(6);
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];
	cin >> t >> p;
	for (int i = 0; i < 6; i++)
	{
		pcnt += (arr[i] / p )+1;
	}
	cout << pcnt << endl;
	cout << person / p << " " << person % p;
}