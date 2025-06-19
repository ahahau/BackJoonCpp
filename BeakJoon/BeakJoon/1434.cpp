#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N, M;
    cin >> N >> M;

    vector<int> box(N);
    for (int i = 0; i < N; i++) cin >> box[i];

    vector<int> book(M);
    for (int i = 0; i < M; i++) cin >> book[i];

    int boxIndex = 0;
    for (int i = 0; i < M; i++) 
    {
        while (boxIndex < N && box[boxIndex] < book[i]) 
        {
            boxIndex++; 
        }
        if (boxIndex == N) break; 
        box[boxIndex] -= book[i]; 
    }

    int remaining = 0;
    for (int i = 0; i < N; i++) 
    {
        remaining += box[i]; 
    }

    cout << remaining << endl;
}
