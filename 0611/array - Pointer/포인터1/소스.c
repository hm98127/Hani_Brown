#include <stdio.h>


void test1(int x) {
	x = 20;
}

void test2(int* p) {
	*p = 20;
}

void test3(int* q) {
	*q = 30;
}

int main() {
	//int *p1 = 0x12345678; 컴파일 에러뜸
	int* p2 = (int*)0x12345678; // 실행 에러가 발생할 수 있다.

	int a = 10;
	int* p3 = &a; // a의 주소를 구해서 p를 초기화한다. 

	int* p4 = 0;   // 어떤 주소로 초기화할지 알 수 없으면 0으로 초기화한다. 
	int* p5 = NULL; // 0 대신 NULL을 사용해도 된다.

	printf("p2 = %p\n", p2); // 주소를 출력할때 %p를 사용한다. 
	printf("p3 = %p\n", p3);
	printf("p4 = %p\n", p4);
	printf("p5 = %p\n", p5);


	int x = 10;
	int* p = &x;
	int* q = &x;

	test1(x);
	printf("test1 호출 후 x = %d\n", x); // test1에 호출을 했지만 메인함수로 안받아줫기 때문에 그대로 10으로 리턴 

	test2(&x); // 혹은 &x로 호출 
	printf("test2 호출 후 x = %d\n", x); // test2에는 test2에서 포인터로 호출하였기때문에 x의 값이 20 나온다. 

	test3(&x); // 혹은 &x로 호출 
	printf("test3 호출 후 x = %d\n", x);
	/*
	int* px = &x;
	x = 150;
	printf("%d\n", x); // 포인터로 변경전 값
	*px = 25;
	printf("%d", x); // 포인터로 변경한 후 값
	*/

}