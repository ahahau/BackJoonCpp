#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, c, w;
    vector<int> arr(n);

    cin >> n >> c >> w;
    long long max_num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        long long a = arr[i];
        max_num = max(max_num, a);
    }

    long long ans = 0;

    for (int i = 1; i <= max_num; i++)
    {
        long long result = 0;

        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                result += i * w;
            }
            else if (i < arr[j])
            {
                int t = arr[j] % i == 0 ? -1 : 0;
                if (((arr[j] / i) + t) * c < (i * w) * (arr[j] / i))
                {
                    result -= ((arr[j] / i) + t) * c;
                    result += (i * w) * (arr[j] / i);
                }
            }
        }

        ans = max(ans, result);
    }

    cout << ans;
}