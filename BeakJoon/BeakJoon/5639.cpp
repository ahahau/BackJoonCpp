#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

void Cal(int a, int b)
{
    if (a >= b)
        return;

    if (a == b - 1)
    {
        cout << arr[a] << "\n";
        return;
    }

    int cnt = a + 1;
    while (cnt < b)
    {
        if (arr[a] < arr[cnt])
            break;
        cnt++;
    }

    Cal(a + 1, cnt); 
    Cal(cnt, b);    
    cout << arr[a] << endl; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int inp;
    while (cin >> inp)
    {
        arr.push_back(inp);
    }

    Cal(0, arr.size()); 
}
