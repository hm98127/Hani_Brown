#include <stdio.h>

double get_area_of_square(double);

int main() {
	double a;

	printf("정사각형의 길이를 적으세요: ");
	scanf_s("%lf", &a);

	printf("정사각형의 넓이는 %lf입니다.", get_area_of_square(a));

}

double get_area_of_square(double a) {
	double b;
	b = a * a;
	return b;
}