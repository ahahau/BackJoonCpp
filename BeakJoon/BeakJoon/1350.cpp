#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int inp;
    long long total = 0;
    cin >> inp;
    vector<int> arr(inp);
    for (int i = 0; i < inp; i++) 
    {
        cin >> arr[i];
    }

    int save;
    cin >> save;

    for (int i = 0; i < inp; i++)
    {
        if (arr[i] == 0) continue;

        total += ((long long)arr[i] + save - 1) / save;
    }

    cout << total * save ;
}
