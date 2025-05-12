#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main() 
{
    int inp;
    cin >> inp;
    vector<tuple<int, int>> ab(inp);

    for (int i = 0; i < inp; ++i) 
    {
        int x, y;
        cin >> x >> y;
        ab[i] = make_tuple(y, x);
    }

    sort(ab.begin(), ab.end()); 

    for (int i = 0; i < inp; ++i) 
    {
        int y = get<0>(ab[i]); 
        int x = get<1>(ab[i]);
        cout << x << " " << y << '\n';
    }
}
