#include <stdio.h> 



int main() {
	/* ------------------1번문제
	double* x[3];
	
	printf("x[0]의 주소: %p\n", x);
	printf("x[1]의 주소: %p\n", x+1);
	printf("x[2]의 주소: %p\n", x+2);

	//또는

	for (int i = 0; i < 3; i++ ) {
		printf("arr[%d]의 주소: %p\n", i, arr+i);
	}
	*/


	//---------------------2번문제
	/*
	double arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20};
	double *p = arr;


	for (int i = 0; i < 10; i++) {
		printf("%.2f ", p[i]);
	}
	*/

	//---------------------3번 문제
	/*
	int i, j;
	int arr[10] = { 44, 32, 65, 23, 45, 76, 77, 89, 23, 45 };
	int* p = &arr[0];

	printf("배열:");
	for(i=0; i<10; i++) {
		printf("%3d", p[i]);
	}
	printf("\n");
	printf("역순:");

	for (i = 9; i >= 0; i--) {
		
		printf("%3d", p[i]);
	}
	*/

	//-----------------------4번 문제
	int i;
	double arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double* p = arr;
	double avg, sum = 0;
	
	
	printf("배열: ");
	for (i = 0; i < 10; i++) {
		printf("%.2f ", p[i]);
	}


	printf("\n");
	printf("합: ");
	for (i = 0; i < 10; i++,p++) {
		
		sum += *p;
		
	}
	printf("%.2f", sum);
	printf("\n");
	avg = sum / 10;
	printf("평균: %.6f", avg);
	

}

