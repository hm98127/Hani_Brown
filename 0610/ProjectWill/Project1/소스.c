#include <stdio.h>
#define ARR_SIZE 5 // �迭�� ũ��� ����� ��ũ�� ����� ���� 




int gugudan(int a, int b) {
	return a * b;
}

int main(void) {

	int x[5] = { 10, 20, 30, 40, 50 };
	int y[5] = { 0 };
	int i;

	//y = x; y�� ������ �ƴϴ� �����Ϳ��� �ٽ� ���� 

	for (i = 0; i < 5; i++) {
		y[4 - i] = x[i]; // �����Ϸ��� 4(�迭���� �°�) - i�� �ؾߵȴ�.
	}
	printf("y = ");
	for (i = 0; i < 5; i++) {
		printf("%d ", y[i]);
	}
	printf("\n");


	// 1���� �迭 ������ ���� ǥ�� -----------------------------------
	/*
	int arr[9] = { 0 };
	int dan;
	scanf_s("%d", &dan);
	
	for (int i = 0; i <= 9; i++) {
		arr[i] = dan * (i + 1);
		printf("%d\t", arr[i]);
	}*/
	/*
	int arr[ARR_SIZE] = { 0 };
	int i;

	arr[0] = 5;
	arr[1] = arr[0] + 10
	*/
	// 2���� �迭 ������ ------------------------------------
	/*
		int arr[8][9];
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%2d * %2d = %3d\n", i, j, i * j);
			arr[i - 2][j - 1] = i * j;
		}
		printf("\n");
	}
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
			printf("%3d", arr[i - 2][j - 1]);
		printf("\n");
	}
	*/
	//----------------------------------------------------------------------------
	/*
	int num[5]; // �ټ�ĭ ¥�� �迭 
	int sum = 0;
	int i, max; 
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
		sum += num[i];

	}
	printf("sum %d\nsize�� %d byte\n", sum, sizeof(sum));

	// ---------------------------------------------------------------------------
	int arr[5];
	int byte_size = 0;
	int size = 0;
	int j;

	byte_size = sizeof(arr);
	printf("�迭�� ����Ʈ ũ��: %d\n", byte_size);

	size = sizeof(arr) / sizeof(arr[0]);
	printf("�迭�� ũ��: %d\n", size);

	for (j = 0; j < size; j++)
	{
		arr[j] = 0;
	}
	*/
	//--------------------------------------------------------------------------
	/*
	int arr[ARR_SIZE];
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		arr[i] = 0;
	}
	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++) {
		printf("%d \n�迭�� ũ��: %d", arr[i], sizeof(arr[i]));
	}
	printf("\n");

	int arr_int[5] = { 1, 2, 3, 4, 5};
	int j;

	
	for (j = 0; j < 5; j++) {
		printf("%d ", arr_int[j]);
	}
	
	printf("\n");
	*/
	//-----------------------------------------------
	/*
	int amount[5] = { 1, 1, 5 };
	int price[5] = { 0 };
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++) {
		printf("%d ", amount[i]);
	}
	printf("\n");

	printf("price = ");
	for (i = 0; i < 5; i++) {
		printf("%d ", price[i]);
	}
	printf("\n");
	*/
}



// const�� ���ȭ ��Ű�°��� ��������� �ƴϴ�. 