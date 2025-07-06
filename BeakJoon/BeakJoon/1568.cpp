#include <iostream>

using namespace std;

int main()
{
    int i = 1, inp, ans = 0;

    cin >> inp;

    while (1)
    {
        if (inp < i)
            i = 1;

        inp -= i++;
        ans++;

        if (inp <= 0)
        {
            cout << ans;
            return 0;
        }
    }
}