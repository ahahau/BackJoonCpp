//#include<iostream>
//using namespace std;
//int Cal(int a, int b);
//int Cal2(int a, int b);
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << Cal(a,b) << endl << Cal2(a,b);
//}
//
//int Cal(int a, int b)
//{
//	if (b == 0)
//		return a;
//	return Cal(b, a % b);
//}
//
//int Cal2(int a, int b)
//{
//	int min = std ::min(a, b);
//	int max = std ::max(a, b);
//	for (int i = 1; i <= max; i++)
//	{
//		if ((i * min) % max == 0)
//		{
//			return (i * min);
//		}
//	}
//	return(a * b);
//}
