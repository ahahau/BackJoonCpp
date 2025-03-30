#include <iostream>
using namespace std;

int Factorial(int t) 
{
    int ans = 1;
    for (int i = t; i > 0; i--) {
        ans *= i;
    }
    return ans;
}

int main() 
{
    int n, k;
    cin >> n >> k;

    int result = Factorial(n) / (Factorial(k) * Factorial(n - k));

    cout << result;
}
