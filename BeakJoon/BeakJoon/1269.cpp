#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    set<int> sa, sb;

    for (int i = 0; i < a; i++)
    {
        int inp;
        cin >> inp;
        sa.insert(inp);
    }

    for (int i = 0; i < b; i++)
    {
        int inp;
        cin >> inp;
        sb.insert(inp);
    }

    int ansa = 0, ansb = 0;

    for (int x : sa) {
        if (sb.find(x) == sb.end())
        {
            ansa++;
        }
    }

    for (int x : sb) {
        if (sa.find(x) == sa.end())
        {
            ansb++;
        }
    }

    cout << ansa + ansb;
}