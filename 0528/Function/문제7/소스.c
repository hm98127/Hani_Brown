#include <stdio.h>

int i;
int prime;

int main() {

	int a, num;

	printf("1~n������ �Ҽ��� ���մϴ�. n��?: ");
	scanf_s("%d", &a);
	for (num = 2; num < a; num++) // ������ �Ҽ��̸� ȭ�鿡 ��� 
	{
		if (prime_number(num) == 1)
		{
			printf("%d ", num);
			is_prime(a);
		}
	
		
	}

	printf("\n�Ҽ��� ��� %d���Դϴ�. ", prime);
	printf("\n");
}

int prime_number(int num) { // �Ҽ� �Ǵ� �Լ�
	int i;
	int j = num / 2;


	for (i = 2; i <= j; i++) { // 1�� �ڱ� �ڽ��� �ƴ� �ٸ� ���� ������ �������ٸ� �Ҽ��� �ƴϴ�
		if (num % i == 0)
		{
			return 0;
		}

	}
	return 1;
}

int is_prime(int num) { // �Ҽ� �Ǻ� �� count

	if (num)
		prime++;

	return prime;

}
