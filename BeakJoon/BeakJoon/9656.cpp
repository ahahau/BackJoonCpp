#include<iostream>
using namespace std;
int main()
{
	int inp;
	cin >> inp;
	bool SK = true;
	while (inp >= 0)
	{
		if (inp >= 3)
			inp -= 3;
		else
			inp -= 1;
		SK = !SK;
	}
	if (SK)
		cout << "CY";
	else
		cout << "SK";

}