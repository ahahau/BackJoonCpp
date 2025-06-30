#include <iostream>

using namespace std;


bool check(int n) 
{

	int hun = n / 100;
	int ten = n / 10 % 10;
	int one = n % 10;

	if (hun - ten == ten - one) return true;

	return false;
}


int main() 
{

	int n;
	int ans;

	cin >> n;
	if (n >= 99) ans = 99;
	else ans = n;

	for (int i = 100; i <= n; i++) 
	{
		if (check(i)) ans++;
	}

	cout << ans;

}