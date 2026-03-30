#include <iostream>
#include <string>

using namespace std;

int brokenBtn[10] = {0,};


bool btnSet(int n)
{
    string str_n = to_string(n);
    for (int i = 0; i < str_n.length(); i++)
    {
        if (brokenBtn[str_n[i] - '0'] == 1)
            return false;
    }

    return true;
}

int main()
{
    int N;
    int M;
    cin >> N;
    cin >> M;

    int ch = 100;
    int ans;

    for (int i = 0; i < M; i++)
    {
        int btn_number;
        cin >> btn_number;
        brokenBtn[btn_number] = 1;
    }

    int cnt = abs(ch - N);
    for (int i = 0; i <= 1000000; i++)
    {
        if (btnSet(i) == true)
        {
            int second_cnt = abs(N - i) + to_string(i).length();
            cnt = min(cnt, second_cnt);
        }
    }
    cout << cnt;
}