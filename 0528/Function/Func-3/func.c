#include <stdio.h>

void main() {
	int i;
	int n1 = 0;
	int n2 = 1;
	int n3 = 0;
	
	for (i = 0; i <= 10; i++) { // 피보나치 수열 
		printf("%d\n", n1);
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3; // 스왑
	}
}