#include<iostream>
using namespace std;


int main()
{
    int n, m, l;
    int throwCnt = 0, cur = 0;
    int ballCnt[1001];
    cin >> n >> m >> l;
    ballCnt[cur] = 1;
    while (ballCnt[cur] != m) 
    {
        if (ballCnt[cur] % 2) 
            cur = (cur + l) % n;
        else 
            cur = (n + (cur - l)) % n;
        ballCnt[cur]++;
        throwCnt++;
    }
    cout << throwCnt;
}