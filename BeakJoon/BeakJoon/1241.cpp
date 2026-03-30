#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int inp, ans[1000001] = { 0, }, num[1000001] = { 0, }, arr[100000] = { 0, }, i, j, cnt;
    cin >> inp;

    for (i = 0; i < inp; i++) 
    {
        cin >> j;
        num[j]++;
        arr[i] = j;
    }

    for (i = 0; i < inp; i++) 
    {
        cnt = 0;
        for (j = 1; j <= sqrt(arr[i]); j++)
        {
            if (arr[i] % j == 0)
            {
                cnt += num[j];
                if (arr[i] != j * j)
                    cnt += num[arr[i] / j];
            }
        }
        cout << cnt - 1 << "\n";
        ans[arr[i]] = cnt - 1;
    }
}