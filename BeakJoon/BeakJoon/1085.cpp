#include<iostream>
using namespace std;
int main()
{
	int x, y, w, h; 
	cin >> x >> y >> w >> h;

	int minDist = min(min(x, y), min(w - x, h - y));

	cout << minDist;
}