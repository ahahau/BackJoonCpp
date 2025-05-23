#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> stair(n + 1);
    vector<int> dp(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> stair[i];
    }

    if (n == 1) {
        cout << stair[1];
        return 0;
    }

    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];

    for (int i = 3; i <= n; i++) {
        dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);
    }

    cout << dp[n];
}
