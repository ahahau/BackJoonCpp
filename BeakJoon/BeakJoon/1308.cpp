#include <iostream>
using namespace std;
int month[13] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int leapyear(int year)
{
    int judge = 0;
    if (year % 4 == 0) 
    {
        judge = 1;
        if (year % 100 == 0) judge = 0;
        if (year % 400 == 0) judge = 1;
    }
    return judge;
}
int days(int y, int m)
{
    int count = 0;
    for (int i = 1; i <= y; i++)
    {
        for (int j = 0; j < (i == y ? m - 1 : 12); j++)
        {
            count += month[j];
        }
        if (leapyear(i)) count++;
    }
    if (leapyear(y) == 1 && m < 3) --count;
    return count;
}
int main() 
{
    int y1, m1, d1, y2, m2, d2, result;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    if ((y2 - y1) == 1000)
    {
        if (m2 > m1)
        {
            cout << "gg";
            return 0;
        }
        if (m2 == m1) 
        {
            if (d2 >= d1) 
            {
                cout << "gg";
                return 0;
            }
        }
    }
    else if ((y2 - y1) > 1000)
    {
        cout << "gg";
        return 0;
    }
    result = (days(y2, m2) + d2) - (days(y1, m1) + d1);
    cout << "D-" << result;
}


