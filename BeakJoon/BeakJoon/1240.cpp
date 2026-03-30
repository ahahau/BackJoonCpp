#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, arr[1001][1001] = { 0, }, i, j, k, l;
    queue<pair<int, int>> q;
    bool visited[1001] = { false, };
    cin >> N >> M;

    for (i = 0; i < N - 1; i++)
    {
        cin >> j >> k >> l;
        arr[j][k] = l;
        arr[k][j] = l;
    }

    for (i = 0; i < M; i++) 
    {
        cin >> j >> k;
        q.push(make_pair(j, 0));
        visited[j] = true;
        while (!q.empty()) 
        {
            pair<int, int> p = q.front(); q.pop();
            if (k == p.first) 
            {
                cout << p.second << "\n";
                break;
            }
            for (l = 1; l <= N; l++) {
                if (arr[p.first][l] && !visited[l]) {

                    visited[l] = true;
                    q.push(make_pair(l, p.second + arr[p.first][l]));
                }
            }
        }
        while (!q.empty())
            q.pop();
        for (l = 1; l <= N; l++)
            visited[l] = false;
    }
}