#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int inp;
    cin >> inp;
    vector<int> arr(inp);
    vector<int> arr2(inp);
    for (int i = 0; i < inp; i++)
    {
        cin >> arr[i];
        cin >> arr2[i];
    }
    for (int i = 0; i < inp; i++)
    {
        cout << arr[i] + arr2[i] << "\n";
    }
}