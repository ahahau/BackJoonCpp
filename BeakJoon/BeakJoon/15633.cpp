#include <iostream>
using namespace std;
int main() 
{
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            ans += i;
    cout << ans * 5 - 24 << '\n';
}