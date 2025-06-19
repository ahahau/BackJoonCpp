#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int arr[42][2];

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	arr[0][0] = 1;
	arr[0][1] = 0;
	arr[1][0] = 0;
	arr[1][1] = 1;

	for (int i = 2; i < 42; ++i)
	{
		arr[i][0] = arr[i - 1][0] + arr[i - 2][0];
		arr[i][1] = arr[i - 1][1] + arr[i - 2][1];
	}

	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		cout << arr[b][0] << " " << arr[b][1] << endl;
	}
}