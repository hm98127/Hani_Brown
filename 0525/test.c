#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int main(void)
{
	printf("hello world!! \n");

	char che = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기: %d \n", sizeof(che));
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum));

	printf("cher의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));

	int num;
	float x;
	char ch;

	num = 123;
	x = 1.23;
	ch = 'A';

	printf("%d %x\n", num, num);
	printf("%f %e\n", x, x);
	printf("%c\n", ch);

	int opa;

	printf("정수? ");
	scanf_s("%d", &opa); //C에서는 문자열이나 파일에 관련된 버퍼나 스택등 메모리에 
	//문제가 생길 수도 있기때문에 _s를 권장한다.
	//_s는 메모리의 사이즈를 요구한다

	printf("10진수 %d는 16진수 %x입니다.\n", opa, opa);

	char name[20];
	int age;
	char gender;

	printf("이름, 나이, 성별 순으로 입력! \n");
	scanf("%s %d %c", name, &age, &gender);
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("성별: %c\n", gender);

	return 0;
}

