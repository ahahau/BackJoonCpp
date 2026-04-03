#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;
    string s;
    int b;
    int set = 0;

    while (a--)
    {
        cin >> s;

        if (s == "add") 
        {
            cin >> b;
            set |= (1 << (b - 1));
        }
        else if (s == "remove") 
        {
            cin >> b;
            set &= ~(1 << (b - 1));
        }
        else if (s == "check")
        {
            cin >> b;
            cout << (set & (1 << (b - 1)) ? "1\n" : "0\n");
        }
        else if (s == "toggle")
        {

            cin >> b;
            set ^= (1 << (b - 1));
        }
        else if (s == "all")
        {
            set = (1 << 20) - 1;

        }
        else if (s == "empty")
        {
            set = 0;
        }
    }
}