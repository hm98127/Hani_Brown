#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int main(void)
{
	printf("hello world!! \n");

	char che = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ��: %d \n", sizeof(che));
	printf("���� inum�� ũ��: %d \n", sizeof(inum));
	printf("���� dnum�� ũ��: %d \n", sizeof(dnum));

	printf("cher�� ũ��: %d \n", sizeof(char));
	printf("int�� ũ��: %d \n", sizeof(int));
	printf("long�� ũ��: %d \n", sizeof(long));
	printf("long long�� ũ��: %d \n", sizeof(long long));
	printf("float�� ũ��: %d \n", sizeof(float));
	printf("double�� ũ��: %d \n", sizeof(double));

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

	printf("����? ");
	scanf_s("%d", &opa); //C������ ���ڿ��̳� ���Ͽ� ���õ� ���۳� ���õ� �޸𸮿� 
	//������ ���� ���� �ֱ⶧���� _s�� �����Ѵ�.
	//_s�� �޸��� ����� �䱸�Ѵ�

	printf("10���� %d�� 16���� %x�Դϴ�.\n", opa, opa);

	char name[20];
	int age;
	char gender;

	printf("�̸�, ����, ���� ������ �Է�! \n");
	scanf("%s %d %c", name, &age, &gender);
	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("����: %c\n", gender);

	return 0;
}

