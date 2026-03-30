#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<memory.h>
#include<queue>
using namespace std;

int inp;
int map[25][25];
bool visited[25][25];
int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

int BFS(int sx, int sy)
{
    visited[sy][sx] = true;
    if (map[sy][sx] == 0)
        return 0;

    queue<pair<int, int>> q;
    q.push(make_pair(sx, sy));
    int cnt = 1;

    while (1)
    {
        if (q.empty())
            break;

        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i <= 3; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < inp && ny >= 0 && nx < inp)
            {
                if (!visited[ny][nx] && map[ny][nx] == 1)
                {
                    q.push(make_pair(nx, ny));
                    visited[ny][nx] = true;
                    cnt += 1;
                }
            }
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> inp;
    for (int i = 0; i < inp; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < inp; j++)
        {
            map[i][j] = s[j] - 48;
        }
    }

    vector<int> result;

    for (int i = 0; i < inp; i++)
    {
        for (int j = 0; j < inp; j++)
        {
            if (!visited[i][j])
            {
                int numOfHouse = BFS(j, i);
                if (numOfHouse != 0)
                    result.push_back(numOfHouse);
            }
        }
    }

    sort(result.begin(), result.end());
    cout << result.size() << '\n';

    for (int numOfHouse : result)
    {
        cout << numOfHouse << '\n';
    }
}
