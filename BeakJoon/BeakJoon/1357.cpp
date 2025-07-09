#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int Rev(int a)
{
	string aa = to_string(a);
	string re;
	for (int i = aa.size() - 1; i >= 0; i--)
		re.push_back(aa[i]);
	return stoi(re);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << Rev(Rev(a) + Rev(b));
}