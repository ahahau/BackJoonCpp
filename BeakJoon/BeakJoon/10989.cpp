#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;

    int arr[10001] = { 0 };

    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        arr[b] += 1;
    }

    for (int i = 1; i < 10001; i++) 
    {
        for (int j = 0; j < arr[i]; j++) 
        {
            cout << i << '\n';
        }
    }

}