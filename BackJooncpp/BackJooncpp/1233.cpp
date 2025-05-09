#include<iostream>
using namespace std;
int main()
{
    int inp1, inp2, inp3;
    int ans[81] = {};
    cin >> inp1 >> inp2 >> inp3;
    int k = 0;
    int max = 0;
    for (int i = 1; i <= inp1; i++) 
    {
        for (int j = 1; j <= inp2; j++) 
        {
            for (int h = 1; h <= inp3; h++) 
            {
                ans[i + j + h]++;
                if (ans[i + j + h] > max) 
                {
                    max = ans[i + j + h];
                }
            }
        }
    }
    for (int i = 3; i <= inp1 + inp2 + inp3; i++) 
    {
        if (max == ans[i]) 
        {
            cout << i << endl;
            break;
        }
    }
}