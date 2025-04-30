//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int dead, inp,min = 10000000000;
//	cin >> dead >> inp;
//	vector<int> six(inp);
//	vector<int> one(inp);
//	for (int i = 0; i < inp; i++)
//	{
//		cin >> six[i] >> one[i];
//	}
//	for (int i = 0; i < inp; i++)
//	{
//		int cdead = dead;
//		int cnt = 0;
//		cnt += six[i] * (cdead / 6);
//		cdead %= 6;
//		if (six[i] < one[i] * cdead)
//			cnt += six[i];
//		else
//			cnt += one[i] * cdead;
//
//		if (min > cnt)
//			min = cnt;
//		cout << cnt << endl;
//	}
//	cout << min;
//}