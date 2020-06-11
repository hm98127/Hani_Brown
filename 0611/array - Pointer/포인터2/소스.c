#include <stdio.h>

int main() {
	/*
	int a;
	int b;
	int* p = NULL;
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		p = &a; // a = a*100
	} else {
		p = &b; // b = b*100
	}
	
	do_something(*p);
	*p *= 100;
	*/
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];
	int i;

	for (i = 0; i < 5; i++, p++) {
		printf("p = %p, ", p);
		printf("*p = %d\n", *p);
	}

	p = &arr[0];

	for (i = 0; i < 5; i++) {
		printf("p = %p, ", p + i);
		printf("*p = %d\n", *(p+i));
	}

}