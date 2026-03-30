#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int inp;
    vector<int> arr;
    cin >> inp;

    for (int i = 0; i < inp; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    long long ans = 0;

    for (int i = 0; i < inp; i++)
    {
        ans += abs((i + 1) - arr[i]);
    }

    cout << ans;
}