#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	int inp;
	cin >> inp;
	vector<int>arr(inp + 1);
	vector<int>cnt(inp + 1, 0);
	for (int i = 1; i <= inp; i++)
		cin >> arr[i];
	for (int i = 1; i <= inp; i++) {
		double max = -9999999999;
		for (int j = i + 1; j <= inp; j++) {
			double level = (double)(arr[j] - arr[i]) / (j - i);
			if (level > max) {
				cnt[i]++;
				cnt[j]++;
				max = level;
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= inp; i++)
		ans = max(ans, cnt[i]);
	cout << ans;
}