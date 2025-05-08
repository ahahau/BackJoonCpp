#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> count(8001, 0); 
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        count[arr[i] + 4000]++;
    }

    sort(arr.begin(), arr.end());

    cout << (int)round((double)sum / n) << '\n';

    cout << arr[n / 2] << '\n';

    int max_count = 0;
    for (int i = 0; i < 8001; i++) 
    {
        if (count[i] > max_count)
            max_count = count[i];
    }

    vector<int> modes;
    for (int i = 0; i < 8001; i++) 
    {
        if (count[i] == max_count)
            modes.push_back(i - 4000); 
    }

    if (modes.size() == 1)
        cout << modes[0] << '\n';
    else
        cout << modes[1] << '\n'; 

    cout << arr[n - 1] - arr[0] << '\n';

    return 0;
}
