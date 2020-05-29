#include <stdio.h>

double discount_price(double, double);

int main() {
	double a, b;
	

	while (1)
	{

		printf("할인율(%%)? \n"); 
		scanf_s("%lf%%", &a);
		printf("제품의 가격? \n");
		scanf_s(" %lf", &b);
		if (a == 0 && b == 0)
			break;
		printf("할인가: %lf\n", discount_price(a, b));

	}
}


double discount_price(double x, double y) { //할인가 구하는 공식 
	double o;
	double z;
	
	o = (x / 100);
	z = y - (y * o);
	return z;
}