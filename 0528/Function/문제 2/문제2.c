#include <stdio.h>

double get_area_of_square(double);

int main() {
	double a;

	printf("���簢���� ���̸� ��������: ");
	scanf_s("%lf", &a);

	printf("���簢���� ���̴� %lf�Դϴ�.", get_area_of_square(a));

}

double get_area_of_square(double a) {
	double b;
	b = a * a;
	return b;
}