#include <stdio.h>

int main() {

	int data[] = { 78, 23, 15, 52, 74, 26, 63, 92 };
	int size;
	int key, i, found=0; // �÷���(ex: �����ߴ�ǥ��) ���� ���ִ� found 

	size = sizeof(data) / sizeof(data[0]);
	printf("arr= ");

	for (i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");

	printf("ã�°�? : ");
	scanf_s("%d", &key);
	for (i = 0;i < size;i++) {
		if (data[i] == key) {

			printf("ã�� �ε���: %d\n");
			found = 1; // found++ �԰���
		}
		if (found == 0) {
			printf("ã�°��� �����ϴ�.\n");
		}
	}

}