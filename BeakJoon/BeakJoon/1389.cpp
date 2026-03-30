#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

int N, M;
int A, B;
bool visited[101];
vector<int> vec[101];
int cnt = 0;

void BFS(int start, int end) 
{
	queue<pair<int, int>> q;
	q.push({ start, 0 });
	visited[start] = true;

	while (!q.empty()) 
	{
		int cur = q.front().first;
		int num = q.front().second;
		q.pop();

		if (cur == end)
		{
			cnt = num;
			break;
		}

		for (int i = 0; i < vec[cur].size(); i++)
		{
			if (!visited[vec[cur][i]]) 
			{
				q.push({ vec[cur][i], num + 1 });
				visited[vec[cur][i]] = true;
			}
		}
	}
}

int main()
{
	cin >> N >> M;

	for (int i = 0 ; i < M; i++) 
	{
		cin >> A >> B;

		vec[A].push_back(B);
		vec[B].push_back(A);
	}

	int min = 98765432;
	int ans = 0;

	for (int i = 1; i <= N; i++)
	{
		int temp = 0;
		for (int j = 1 ; j <= N; j++)
		{

			memset(visited, false, sizeof(visited));

			if (i != j) 
			{
				BFS(i, j);
				temp += cnt;
				cnt = 0;
			}
		}
		if (min > temp) 
		{
			min = temp;
			ans = i;
		}
	}

	cout << ans;
}