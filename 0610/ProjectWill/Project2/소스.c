#include <stdio.h>

int main() {

	int data[] = { 78, 23, 15, 52, 74, 26, 63, 92 };
	int size;
	int key, i, found=0; // 플레그(ex: 도착했다표시) 역할 해주는 found 

	size = sizeof(data) / sizeof(data[0]);
	printf("arr= ");

	for (i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");

	printf("찾는값? : ");
	scanf_s("%d", &key);
	for (i = 0;i < size;i++) {
		if (data[i] == key) {

			printf("찾은 인덱스: %d\n");
			found = 1; // found++ 쌉가능
		}
		if (found == 0) {
			printf("찾는값이 없습니다.\n");
		}
	}

}