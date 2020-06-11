#include <stdio.h> 

int main() {

	int arr[72][3];
	int a;


	for (int i = 0; i < 8; i++) {

		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i + 2) * (j + 1);
			
			printf("|%2d |%2d |%3d |\n",i + 2, j + 1, arr[i][j]);
		}
	}

	for (int x = 0; x < 72;) {
		for (int y = 1; y <= 9; y++) {
			a = (x / 9) + 2;
			arr[x][0] = a;
			arr[x][1] = y;
			arr[x][2] = a * y;
			++x;
		}
	}
	for (int x = 0;x < 72; x++) {
		printf("%2d * %2d = %2d\n", arr[x][0], arr[x][1], arr[x][2]);
	}
	/*
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	*/
	
}