#include <stdio.h>
#include <stdlib.h>

int is_even(int);
int is_odd(int);

int main() {

	int a;
	int i;
	int even = is_even(a);
	int odd = is_odd(a);

	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
	for (i = 1; i <= 12; i++)
	{
		scanf_s("%d", &a);
		if (a == 0)
		{
			break;
		}
	}
	printf("짝수의 개수 : %d\t 홀수의 개수: %d", even, odd);
	
}

int is_even(int num) {
	int even;
	if (num % 2 == 0)
		even++;

	return even;

}
int is_odd(int num) {
	int odd;
	if (num % 2 == 1)
		odd++;
	return odd;
}
//int main(void)
//{
//	int num[10];
//	int count = 0;
//	int i;
//	
//	for (i = 0; i < 10; i++) {
//		if (num[i] % 2 != 0) {
//			count++;
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d 번째 정수 입력 : ", i + 1);
//
//		scanf_s("%d", &num[i]);
//		printf("\n홀수는 %d개\n 짝수는 %d개", count(even), count(odd));
//	}
//	even(num);
//	odd(num);
//}
//
//void even(int* str) {
//	printf("짝수 : ");
//	for (int i = 0; i < 10; i++)
//	{
//		if (*str % 2 == 0)
//		{
//			printf("%d ", *str);
//		}
//		str++;
//	}
//	printf("\n");
//}
//
//void odd(int* str) {
//	printf("홀수 : ");
//	for (int i = 0; i < 10; i++)
//	{
//		if (*str % 2 != 0)
//		{
//			printf("%d ", *str);
//		}
//		str++;
//	}
//	printf("\n");
//}


