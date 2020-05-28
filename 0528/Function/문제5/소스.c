#include <stdio.h>
#include <stdlib.h>


int main() {

	int a;
	int i;

	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
	for (i = 1; i <= 12; i++)
	{
		scanf_s("%d", &a);
		if (a == 0)
		{
			break;
		}
	}
	
}

int is_even() {

}
int is_odd() {

}