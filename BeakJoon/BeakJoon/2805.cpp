#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;          
    long long m;  

    cin >> n >> m;

    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];
    sort(h.begin(), h.end());

    long long left = 0;
    long long right = h.back(); 
    long long ans = 0;           

    while (left <= right) 
    {
        long long mid = (left + right) / 2;

        long long cut = 0;       
        for (int x : h)
            if (x > mid) cut += (x - mid);

        if (cut >= m) 
        {           
            ans = mid;
            left = mid + 1;
        }
        else
        {                 
            right = mid - 1;
        }
    }

    cout << ans;
}
