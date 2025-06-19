#include<iostream>
#include <cmath>
using namespace std;

//문제
	//위치를 구하는 문제
	//첫번째줄에 몇개의 줄이 나오는지 나옴
	//int형 변수 6개로 이루어진 배열 변수가 나옴
	//순서대로 x1(좌표),y1(좌표),t1(거리),x2(좌표),y2(좌표),t2(거리)
	//각 케이스마다 위치의 수를 출력 위치수가 무한일경우 -1 출력


	//풀이 방법
	//1. 첫번째줄에서 int형 변수를 받아옴
	//2. 6칸짜리 배열을 1번에서 받아온 변수만큼 받아옴
	//3. x,y좌표에서 t라는 반지름을 기준으로 원을 그렸을때 두원이 몇번 겹치는지 알아야함
	//4. 만약 원의 위치와 거리가 같다면 -1을 출력하면
	//5. 두원을 직선으로 이은 값이 t1 + t2과 같다면 1 작다면 2 크다면 0
void Calculation(int array[6]) {
    int x1 = array[0], y1 = array[1], r1 = array[2];
    int x2 = array[3], y2 = array[4], r2 = array[5];

    // 두 원의 중심 거리의 제곱 계산
    int distSquared = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    int rSumSquared = (r1 + r2) * (r1 + r2); // 두 반지름의 합의 제곱
    int rDiffSquared = (r1 - r2) * (r1 - r2); // 두 반지름의 차의 제곱

    // 두 원이 완전히 동일한 경우 
    if (x1 == x2 && y1 == y2 && r1 == r2) {
        cout << -1 << endl;
        return;
    }

    // 외접하는 경우 
    if (distSquared == rSumSquared || distSquared == rDiffSquared) {
        cout << 1 << endl;
        return;
    }

    // 두 점에서 만나는 경우
    if (rDiffSquared < distSquared && distSquared < rSumSquared) {
        cout << 2 << endl;
        return;
    }

    // 만나지 않는 경우
    cout << 0 << endl;
}

int main() {
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int arr[6];
        for (int j = 0; j < 6; j++) {
            cin >> arr[j];
        }
        Calculation(arr);
//
    }
}

