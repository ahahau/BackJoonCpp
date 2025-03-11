#include<iostream>
#include <cmath>
using namespace std;

//����
	//��ġ�� ���ϴ� ����
	//ù��°�ٿ� ��� ���� �������� ����
	//int�� ���� 6���� �̷���� �迭 ������ ����
	//������� x1(��ǥ),y1(��ǥ),t1(�Ÿ�),x2(��ǥ),y2(��ǥ),t2(�Ÿ�)
	//�� ���̽����� ��ġ�� ���� ��� ��ġ���� �����ϰ�� -1 ���

	//Ǯ�� ���
	//1. ù��°�ٿ��� int�� ������ �޾ƿ�
	//2. 6ĭ¥�� �迭�� 1������ �޾ƿ� ������ŭ �޾ƿ�
	//3. x,y��ǥ���� t��� �������� �������� ���� �׷����� �ο��� ��� ��ġ���� �˾ƾ���
	//4. ���� ���� ��ġ�� �Ÿ��� ���ٸ� -1�� ����ϸ��
	//5. �ο��� �������� ���� ���� t1 + t2�� ���ٸ� 1 �۴ٸ� 2 ũ�ٸ� 0
void Calculation(int array[6]) {
    int x1 = array[0], y1 = array[1], r1 = array[2];
    int x2 = array[3], y2 = array[4], r2 = array[5];

    // �� ���� �߽� �Ÿ��� ���� ���
    int distSquared = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    int rSumSquared = (r1 + r2) * (r1 + r2); // �� �������� ���� ����
    int rDiffSquared = (r1 - r2) * (r1 - r2); // �� �������� ���� ����

    // �� ���� ������ ������ ��� (���Ѵ��� ����)
    if (x1 == x2 && y1 == y2 && r1 == r2) {
        cout << -1 << endl;
        return;
    }

    // �����ϴ� ��� (�� ������ ����)
    if (distSquared == rSumSquared || distSquared == rDiffSquared) {
        cout << 1 << endl;
        return;
    }

    // �� ������ ������ ���
    if (rDiffSquared < distSquared && distSquared < rSumSquared) {
        cout << 2 << endl;
        return;
    }

    // ������ �ʴ� ���
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
    }
}

