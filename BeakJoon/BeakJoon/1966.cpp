#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int main() 
{


	int inp;
	cin >> inp;
	for (int i = 0; i < inp; i++) 
	{

		int N, M;
		cin >> N >> M;

		vector<int> for_max;
		queue<pair<int, int>> q;
		for (int j = 0; j < N; j++) 
		{
			int a; cin >> a;
			for_max.push_back(a);
			if (j == M) 
				{ q.push({ a,1 }); }
			else 
				q.push({ a,0 });
		}

		int cnt = 1;
		sort(for_max.begin(), for_max.end());
		while (1) {
			if (q.empty()) 
			{
				cout << cnt << "\n";
				break;
			}
			int temp1 = q.front().first; 
			int flag1 = q.front().second;
			q.pop();

			int max = *max_element(for_max.begin(), for_max.end());
			if (temp1 < max) 
			{
				q.push({ temp1,flag1 }); 
			}
			else 
			{
				if (flag1 == 1) {
					cout << cnt << "\n";
					break;
				}
				else {
					cnt++;  
					for_max.pop_back();
				}

			}

		}

	}

}