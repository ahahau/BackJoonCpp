#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{ 
    int arr[50];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = arr[0] * arr[n - 1];
    cout << ans;

}