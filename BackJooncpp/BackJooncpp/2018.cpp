#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long ans, a = 1, b = 1, c = 1;
    int cnt = 0;
    cin >> ans;

    while (b < ans + 1) 
    {
        if (c < ans) 
        {
            b++;
            c = c + b;
        }
        else if (c > ans) 
        {
            c = c - a;
            a++;
        }
        else if (c == ans) 
        {
            cnt++;
            b++;
            c = c + b;
        }
    }

    cout << cnt;
}