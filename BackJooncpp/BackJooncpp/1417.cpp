#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int b;
    cin >> b;

    priority_queue<int> arr;

    for (int i = 1; i < a; i++) 
    {
        int tmp;
        cin >> tmp;
        arr.push(tmp);
    }

    int cnt = 0;
    while (!arr.empty() && arr.top() >= b)
    {
        int top = arr.top();
        arr.pop();
        top--;      
        b++;     
        cnt++;       
        arr.push(top); 
    }

    cout << cnt << endl;
}
