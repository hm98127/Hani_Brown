#include <stdio.h>

int main() {
	int arr_1[5];
	int size = 5;
	int* arr_2;
	int i;
	printf("첫번째 배열\n");
	for (i = 0; i < 5; i++)
	{
		arr_1[i] = i + 1;
		printf("%d ", arr_1[i]);
	}

	printf("두번째 배열\n");
	//메모리 할당
	//arr_2 = (int*)calloc(5, sizeof(int)); // 첫번째 동적할당
	arr_2 = (int*)malloc(sizeof(int) * size); //두번째 동적할당 기능은 똑같으나 문법은 틀리다.
	for ( i = 0; i < 5; i++)
	{
		arr_2[i] = arr_1[i];
		printf("%d ", arr_2[i]);
	}
	printf("\n");

	realloc(arr_2, sizeof(int) * 10);  // 10칸 확장해준다. 
	for ( i = 5; i < 10; i++)
	{
		arr_2[i] = i + 1;
	}

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr_2[i]);
	}

	free(arr_2); // 메모리해제
	return 0;
}