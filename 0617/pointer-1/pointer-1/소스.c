#include <stdio.h>
/*
int main(void) {
	int data[5] = { 1, 2, 3, 4, 5 };
	//int num[5];
	int* p = NULL;
	int i;
	p = data;
	for (i = 0; i < 5; i++) {
		printf("%d ", ++(*p));
		p++;
	}
	printf("\n");
	int arr[5] = { 1, 2, 3, 4, 5 };
	//int num[5];
	int* q = NULL;
	q = arr;
	for (i = 0; i < 5; i++) {
		printf("%d ", *q++);
		
	}

	printf("\n");

}
*/

void GG(int x, int y, int *pl, int *pg) {
	int r;
	int a, b;
	a = x;
	b = y;

	while (b!=0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	*pg = a;
	*pl = (x * y) / (*pg);
}

int main(void) {

	int x, y, i, j;
	printf("x��: ");
	scanf_s("%d", &x);
	printf("y��: ");
	scanf_s("%d", &y);
	GG(x, y, &i, &j);

	printf("�ִ������� : %d\n", i);
	printf("�ּҰ������ : %d", j);

}

