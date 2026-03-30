//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//    int a, b, c;
//    double right, left, mid;
//    double ocha;
//    cout << "?x4 + ?x3 + ? 를 순서 대로 입력해주세요" << endl;
//    cin >> a >> b >> c;
//    cout << "구간을 입력해주세요" << endl;
//    cin >> left >> right;
//    cout << "오차범위를 입력해주세요" << endl;
//    cin >> ocha;
//
//    while (true)
//    {
//        mid = (left + right) / 2.0;
//        double f_left = a * pow(left, 4) + b * pow(left, 3) + c;
//        double f_mid = a * pow(mid, 4) + b * pow(mid, 3) + c;
//
//        if (fabs(f_mid) <= ocha)
//        {
//            cout << "답은 " << mid << "입니다" << endl;
//            break;
//        }
//
//        if (f_left * f_mid < 0)
//            right = mid;
//        else
//            left = mid;
//    }
//}