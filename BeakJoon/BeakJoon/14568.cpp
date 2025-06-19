#include<iostream>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;

    for (int a = 2; a <= n; a += 2) 
    {
        for (int b = 1; b <= n; b++) 
        {
            int c = n - a - b;
            if (c < 1) continue;     
            if (b < 2) continue;     
            if (b > c) continue;    
            cnt++;
        }
    }

    cout << cnt;
}