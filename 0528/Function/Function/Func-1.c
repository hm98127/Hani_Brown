#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int G = 0;

int Add(int num1, int num2) {
	return num1 + num2;
	G++;
}

void ShowAddResult(int num) {
	printf("������� ���: %d \n", num);
	G++;
}

int ReadNum(void) {
	int num;
	scanf(" &d", &num);
	G++;
	return num;
}

void HowToUseThisProg(void) {
	G++;
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ� \n");
	printf("�ΰ��� ������ �Է�! \n");
}

void draw_line(char c, int L) {
	int i;
	G++;
	for (i = 0; i < L; i++)
		printf("%c", c);
	printf("\n");
}

void print_sum(int c) {
	int i;
	int print_num;
	int sum = 0;
	G++;
	printf("%d���� ����? ", c);
	for (i = 0; i < c; i++) {
		scanf("%d", &print_num);
		sum += print_num;
	}

	printf("�հ� : %d\n", sum);
}



int main(void) { // void��� �Ű������� ����ִٶ�� �ǹ�

	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);

	//-------------------------------------------

	draw_line('#', 20);
	print_sum(result);
	printf("%d\n", G);
	/*printf("%d\n", c);*/
}

