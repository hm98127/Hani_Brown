#include <stdio.h>


void test1(int x) {
	x = 20;
}

void test2(int* p) {
	*p = 20;
}

void test3(int* q) {
	*q = 30;
}

int main() {
	//int *p1 = 0x12345678; ������ ������
	int* p2 = (int*)0x12345678; // ���� ������ �߻��� �� �ִ�.

	int a = 10;
	int* p3 = &a; // a�� �ּҸ� ���ؼ� p�� �ʱ�ȭ�Ѵ�. 

	int* p4 = 0;   // � �ּҷ� �ʱ�ȭ���� �� �� ������ 0���� �ʱ�ȭ�Ѵ�. 
	int* p5 = NULL; // 0 ��� NULL�� ����ص� �ȴ�.

	printf("p2 = %p\n", p2); // �ּҸ� ����Ҷ� %p�� ����Ѵ�. 
	printf("p3 = %p\n", p3);
	printf("p4 = %p\n", p4);
	printf("p5 = %p\n", p5);


	int x = 10;
	int* p = &x;
	int* q = &x;

	test1(x);
	printf("test1 ȣ�� �� x = %d\n", x); // test1�� ȣ���� ������ �����Լ��� �ȹ޾ƢZ�� ������ �״�� 10���� ���� 

	test2(&x); // Ȥ�� &x�� ȣ�� 
	printf("test2 ȣ�� �� x = %d\n", x); // test2���� test2���� �����ͷ� ȣ���Ͽ��⶧���� x�� ���� 20 ���´�. 

	test3(&x); // Ȥ�� &x�� ȣ�� 
	printf("test3 ȣ�� �� x = %d\n", x);
	/*
	int* px = &x;
	x = 150;
	printf("%d\n", x); // �����ͷ� ������ ��
	*px = 25;
	printf("%d", x); // �����ͷ� ������ �� ��
	*/

}