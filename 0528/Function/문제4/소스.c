#include <stdio.h>

double discount_price(double, double);

int main() {
	double a, b;
	

	while (1)
	{

		printf("������(%%)? \n"); 
		scanf_s("%lf%%", &a);
		printf("��ǰ�� ����? \n");
		scanf_s(" %lf", &b);
		if (a == 0 && b == 0)
			break;
		printf("���ΰ�: %lf\n", discount_price(a, b));

	}
}


double discount_price(double x, double y) { //���ΰ� ���ϴ� ���� 
	double o;
	double z;
	
	o = (x / 100);
	z = y - (y * o);
	return z;
}