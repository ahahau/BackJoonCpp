#include<iostream>
using namespace std;
int main()
{
    int arr[101][101] = { 0 };
    int x, y;
    int inp; 
    cin >> inp;
    int ans = 0;

    for (int k = 0; k < inp; k++) {
        cin >> x >> y;
        for (int i = x; i < x + 10; i++)
            for (int j = y; j < y + 10; j++)
                arr[i][j] = 1;
    }
    for (int i = 1; i < 101; i++)
        for (int j = 1; j < 101; j++)
            if (arr[i][j] == 1)
                ans++;

    cout << ans;
}