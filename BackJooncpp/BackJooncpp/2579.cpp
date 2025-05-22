#include<iostream>
#include<vector>
using namespace std;
int Cal(int stair, int cnt,int ccnt, vector<int> arr)
{
	if (stair >= arr.size())
	{
		if (stair == arr.size() - 1)
		{
			cnt += arr[arr.size() - 1];
		}
		return cnt;
	}
	if (ccnt >= 2)
		return Cal(stair + 2, cnt + arr[stair], 0, arr);
	return max(Cal(stair + 1, cnt + arr[stair],ccnt + 1, arr), Cal(stair + 2, cnt + arr[stair],0, arr));
}
int main()
{
	int stair = 0, inp, cnt = 0;
	cin >> inp;
	vector<int> arr(inp);
	for (int i = 0; i < inp; i++)
	{
		cin >> arr[i];
	}
	cout <<  max(Cal(stair, cnt,1, arr), Cal(stair + 1, cnt,0, arr));

}