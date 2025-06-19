#include <iostream>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    int befZ = (y * 100) / x;

    if (befZ >= 99) 
    {
        cout << -1;
        return 0;
    }

    long long a = 1, b = 1e9, ans = -1;

    while (a <= b) 
    {
        long long mid = (a + b) / 2;
        long long newZ = ((y + mid) * 100) / (x + mid);
        if (newZ > befZ) 
        {
            ans = mid;
            b = mid - 1; 
        }
        else 
        {
            a = mid + 1;
        }
    }

    cout << ans;
}
