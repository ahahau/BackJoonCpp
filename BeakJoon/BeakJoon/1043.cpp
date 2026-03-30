#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
int parent[51];
vector<int> arr[51];
vector<int> people;

int Find(int node) 
{
    if (parent[node] == node) return node;
    return parent[node] = Find(parent[node]);
}

void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    parent[a] = b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) 
    {
        int a;
        cin >> a;
        people.push_back(a);
    }
    for (int i = 0; i < m; i++) 
    {
        int a;
        cin >> a;
        int s, e;
        for (int j = 0; j < a; j++)
        {
            cin >> e;
            arr[i].push_back(e);
            if (j == 0) {
                s = e;
                continue;
            }
            Union(s, e);
            s = e;
        }
    }
    int ans = 0;
    if (num == 0) 
    {
        cout << m;
    }
    else
    {
        for (int i = 0; i < m; i++) 
        {
            bool chck = true;
            for (int j = 0; j < arr[i].size(); j++)
            {
                int now = arr[i][j];
                for (int k = 0; k < people.size(); k++) 
                {
                    if (Find(now) == Find(people[k])) 
                    {
                        chck = false;
                        break;
                    }
                }
                if (!chck) break;
            }
            if (chck) ans++;
        }
        cout << ans;
    }
}