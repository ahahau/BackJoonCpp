#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() 
{


    int inp;
    cin >> inp;
    vector<double> arr(inp);

    for (int i = 0; i < inp; i++) 
    {
        cin >> arr[i];
        arr[i] = arr[i] - floor(arr[i]);
        arr[i] = round(arr[i] * 1000.0) / 1000.0;
    }

    bool flag;
    vector<double> cases(1001);
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= i; j++) 
        {
            cases[j] = floor((static_cast<double>(j) / i) * 1000) / 1000.0;
        }
        flag = true;
        for (int k = 0; k < inp; k++) 
        {
            if (find(cases.begin(), cases.end(), arr[k]) == cases.end())
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << i << "\n";
            return 0;
        }
    }
}