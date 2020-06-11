#include <stdio.h> 
#define SIZE 5

int main() {

	int data[SIZE] = { 7, 3, 9, 5, 1 };
	int i, j;
	int index, temp;

	for (i = 0; i < SIZE - 1; i++) { // 0~(i-1) 까지는 정렬된 상태
		index = i;
		for (j = i + 1; j < SIZE; j++) {
			if (data[index] > data[j]) {
				index = j;
			}
		}
		

		if (i != index) {
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}
		printf("index : %d\n", index);
	}
	printf("정렬 후: ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", data[i]);

	}
	printf("\n");

	
}