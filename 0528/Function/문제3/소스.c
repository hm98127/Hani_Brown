#include <stdio.h>
#include <math.h> // ���� ���� ������ �̿��� �� �ְ� �ϴ� ������� ȣ��


int main() {

	int a, b, c, d; // �ʱ�ȭ 

	printf("������ ������ ��ǥ?: \n");
	scanf_s("%d %d", &a, &b);

	printf("������ ���� ��ǥ?: \n");
	scanf_s("%d %d", &c, &d);

	printf("(%d, %d) - (%d, %d) ������ ����: %d", a, b, c, d, distance1(a, b, c, d)); // ��� �Լ� ȣ�� 
}

int distance1(int x1, int y1, int x2, int y2) { // �Ÿ� ����� �Լ� 
	int result;
	result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // ������ ���� ���ϴ� ����

	return result;
}

