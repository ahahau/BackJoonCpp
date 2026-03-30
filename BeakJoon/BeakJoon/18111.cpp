#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int mint = 99999999;
    int minh = 99999999;
    int time;
    int N, M, B;
    cin >> N >> M >> B;

    vector<int> land(N * M);  

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> land[i * M + j];   

    for (int h = 0; h <= 256; h++)
    {
        int remove = 0;
        int stack = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                int height = land[i * M + j]; 
                if (height > h)              
                    remove += height - h;
                else if (height < h)        
                    stack += h - height;
            }
        }
        if (remove + B >= stack) 
        {
            time = remove * 2 + stack;
            if (time <= mint)
            {
                mint = time;
                minh = h;   
            }
        }
    }
    cout << mint << ' ' << minh;
    return 0;
}
