#include <stdio.h>
#include <math.h> // 수학 공식 제곱근 이용할 수 있게 하는 헤더파일 호출

double distance1(int, int, int, int);

int main() {

	int a, b, c, d; // 초기화 

	printf("각선의 시작점 좌표?: \n");
	scanf_s("%d %d", &a, &b);

	printf("각선의 끝점 좌표?: \n");
	scanf_s("%d %d", &c, &d);

	printf("(%d, %d) - (%d, %d) 직선의 길이: %lf", a, b, c, d, distance1(a, b, c, d)); // 결과 함수 호출 
}

double distance1(int x1, int y1, int x2, int y2) { // 거리 계산할 함수 
	double result;
	result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // 직선의 길이 구하는 공식

	return result;
}

