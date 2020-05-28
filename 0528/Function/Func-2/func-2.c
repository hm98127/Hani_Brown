#include <stdio.h>



int get_gcd(int, int);
double get_area(double);
int get_max(int, int, int);

int main(void) {
	int num;
	int factorial = 1;
	int i;
	int fact;

	printf("%d\n", get_factorial(10));

	printf("정수? ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		factorial *= i;
	}

	printf("%d! = %d\n", num, factorial);

	
	for (i = 1; i <= 5; i++) {
		fact = set_factorial(i);
		printf("%2d! = %3d\n", i, fact);
	}
	get_factorial(5);

	int in;
	for (in = 1; in <= 5; in++) {
		printf("반지름이 %d일 떄 원의 면적: %.2f\n", in, get_area(in));
	}

	int x, y;
	int gcd;

	while (1) {
		printf("정수 2개를 입력하세요. (0.0이면 종료): ");
		scanf_s("%d %d", &x, &y);
		if (x == 0 && y == 0)
			break;

		gcd = get_gcd(x, y);
		printf("%d와 %d의 GCD: %d\n", x, y, gcd);
	}

	rewind(stdin);


	int Max_x, Max_y, Max_z;

	while (1)
	{
		printf("정수 3개를 입력하세요 (0,0,0 일 경우 종료): ");
		scanf_s("%d %d %d", &Max_x, &Max_y, &Max_z);

		if (Max_x == 0 && Max_y == 0 && Max_z == 0)
			break;
		printf("최대값: %d\n", get_max(Max_x, Max_y, Max_z));
	}

	return 0;
}

int get_factorial(int num) {
	int i;
	int factorial = 1;

	for (i = 1; i <= num; i++) {
		factorial *= i;
	}
	return factorial;
}

int set_factorial(int num) {
	int i; 
	int result = 1;

	for (i = 1; i <= num; i++) {
		result *= i;
	}
	return result;
}

double get_area(double radius) {
	const double PI = 3.14159265359;
	return PI * radius * radius;
}

int get_gcd(int x, int y) {
	int r;
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int get_max(int a, int b, int c) {
	int max = a > b ? a : b;
	max = c > max ? c : max;
	return max;
}


