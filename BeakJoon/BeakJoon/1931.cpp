#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int inp;
    cin >> inp;
    vector<pair<int, int>> ans(inp);

    for (int i = 0; i < inp; ++i)
        cin >> ans[i].first >> ans[i].second;

    sort(ans.begin(), ans.end(), [](const pair<int, int>& a, const pair<int, int>& b) 
        {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
        });

    int cnt = 0;
    int endt = 0;

    for (const auto& ans1 : ans)
    {
        if (ans1.first >= endt)
        {
            ++cnt;
            endt = ans1.second;
        }
    }

    cout << cnt;
}
