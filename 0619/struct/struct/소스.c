#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy 함수가 선언된 헤터 파일

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

	strcpy(s1.name, "김정한");
	 //s1.name = "body" 이거 안된다.

	s1.id = 2009923;

	printf("이름 : %s\n", s1.name);
	printf("학번 : %d\n", s1.id);

	strcpy(c1.name, "ak");
	printf("이름 : %s\n", c1.name);
	c1.number = 1234;
	printf("학번 : %d\n", c1.number);
}