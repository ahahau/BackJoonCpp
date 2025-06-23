#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    int inp;
    cin >> inp;
    while (inp--) 
    {
        string cinp;
        cin >> cinp;
        int len = cinp.length();
        int size = sqrt(len);

        for (int col = size - 1; col >= 0; --col)
        {     
            for (int row = 0; row < size; ++row)
            {      
                cout << cinp[row * size + col];
            }
        }
        cout << '\n';
    }
}
