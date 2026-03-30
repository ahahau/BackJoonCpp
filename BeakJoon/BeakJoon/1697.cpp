#include <iostream>
#include<vector>
#include <queue>

using namespace std;

int visited[100001] = {};

int main() 
{
    int a, b; 
    cin >> a >> b;
    queue<int> q;
    q.push(a);
    visited[a] = 0;
    while (!q.empty()) 
    {
        int curP = q.front();
        q.pop();

        if (curP == b) break;

        int minP = curP - 1;
        int plusP = curP + 1;
        int multiP = curP * 2;

        if (minP >= 0 && visited[minP] == 0)
        {
            q.push(minP);
            visited[minP] = visited[curP] + 1;
        }

        if (plusP < 100001 && visited[plusP] == 0)
        {
            q.push(plusP);
            visited[plusP] = visited[curP] + 1;
        }

        if (multiP < 100001 && visited[multiP] == 0)
        {
            q.push(multiP);
            visited[multiP] = visited[curP] + 1;
        }
    }

    cout << visited[b];
}