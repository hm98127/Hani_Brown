#include <stdio.h>

// ���� 1 

int get_perimeter(int, int);
void main() {

	int a, b;



	printf("���ο� ���� ���̸� �����ּ���: ");
	scanf_s("%d %d", &a, &b);
	printf("���簢���� �ѷ���= %d", get_perimeter(a, b));
	

}

int get_perimeter(int a, int b) {
	
	int c;
	c = 2 * (a + b); // �簢���� �ѷ� ���� 
	
	return c;

}