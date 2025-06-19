#include <iostream>
using namespace std;

int main() 
{
    long long a, b, v;
    cin >> a >> b >> v;
    cout << ((v - b - 1) / (a - b)) + 1;
}
