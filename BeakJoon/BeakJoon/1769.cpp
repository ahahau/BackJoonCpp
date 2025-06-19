#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int cnt = 0;
	while (s.length() > 1) {
		int sum = 0;
		for (char c : s) {
			sum += c - '0';
		}
		s = to_string(sum);
		cnt++;
	}
	cout << cnt << endl;
	if(stoi(s) % 3 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}