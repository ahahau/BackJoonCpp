#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    queue<int> arr;

    for (int i = 1; i <= inp; i++) {
        arr.push(i);
    }

    while (arr.size() > 1) {
        arr.pop();             
        arr.push(arr.front());  
        arr.pop();          
    }

    cout << arr.front();
}