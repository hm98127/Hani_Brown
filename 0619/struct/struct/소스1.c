#include <stdio.h>

int main() {
	int arr_1[5];
	int size = 5;
	int* arr_2;
	int i;
	printf("ù��° �迭\n");
	for (i = 0; i < 5; i++)
	{
		arr_1[i] = i + 1;
		printf("%d ", arr_1[i]);
	}

	printf("�ι�° �迭\n");
	//�޸� �Ҵ�
	//arr_2 = (int*)calloc(5, sizeof(int)); // ù��° �����Ҵ�
	arr_2 = (int*)malloc(sizeof(int) * size); //�ι�° �����Ҵ� ����� �Ȱ����� ������ Ʋ����.
	for ( i = 0; i < 5; i++)
	{
		arr_2[i] = arr_1[i];
		printf("%d ", arr_2[i]);
	}
	printf("\n");

	realloc(arr_2, sizeof(int) * 10);  // 10ĭ Ȯ�����ش�. 
	for ( i = 5; i < 10; i++)
	{
		arr_2[i] = i + 1;
	}

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr_2[i]);
	}

	free(arr_2); // �޸�����
	return 0;
}