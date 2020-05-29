#include <stdio.h>

int i;
int prime;

int main() {

	int a, num;

	printf("1~n사이의 소수를 구합니다. n은?: ");
	scanf_s("%d", &a);
	for (num = 2; num < a; num++) // 변수가 소수이면 화면에 출력 
	{
		if (prime_number(num) == 1)
		{
			printf("%d ", num);
			is_prime(a);
		}
	
		
	}

	printf("\n소수는 모두 %d개입니다. ", prime);
	printf("\n");
}

int prime_number(int num) { // 소수 판단 함수
	int i;
	int j = num / 2;


	for (i = 2; i <= j; i++) { // 1과 자기 자신이 아닌 다른 수로 나누어 떨어진다면 소수가 아니다
		if (num % i == 0)
		{
			return 0;
		}

	}
	return 1;
}

int is_prime(int num) { // 소수 판별 후 count

	if (num)
		prime++;

	return prime;

}
