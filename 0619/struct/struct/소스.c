#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy �Լ��� ����� ���� ����

struct Student
{
	int id;
	char name[20];
}


typedef struct Car 
{
	char name[20];
	int number;
}Car;
/*
typedef struct Car {
	char name[20];
	int number;
}Car;
*/

void main() {
	struct Student s1;
	Car c1;

	strcpy(s1.name, "������");
	 //s1.name = "body" �̰� �ȵȴ�.

	s1.id = 2009923;

	printf("�̸� : %s\n", s1.name);
	printf("�й� : %d\n", s1.id);

	strcpy(c1.name, "ak");
	printf("�̸� : %s\n", c1.name);
	c1.number = 1234;
	printf("�й� : %d\n", c1.number);
}