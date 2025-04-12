#include<iostream>
using namespace std;
    int main() 
    {
        int N, L;
        cin >> N >> L;

        for (int i = L; i <= 100; i++) 
        { 
            long long sum = (i * (i - 1)) / 2; 
            if (N < sum) break;

            if ((N - sum) % i == 0) 
            {
                int x = (N - sum) / i;
                if (x >= 0) 
                { 
                    for (int j = 0; j < i; j++)
                        cout << x + j << " ";
                    return 0; 
                }
            }
        }

        cout << -1; 
//
    }