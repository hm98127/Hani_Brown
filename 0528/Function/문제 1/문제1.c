#include <stdio.h>

// 문제 1 

int get_perimeter(int, int);
void main() {

	int a, b;



	printf("가로와 세로 길이를 적어주세요: ");
	scanf_s("%d %d", &a, &b);
	printf("직사각형의 둘레는= %d", get_perimeter(a, b));
	

}

int get_perimeter(int a, int b) {
	
	int c;
	c = 2 * (a + b); // 사각형의 둘레 공식 
	
	return c;

}