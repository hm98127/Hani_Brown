#include <stdio.h>
#include <string.h>
#define SIZE 32


int main(void) {
	/*
	char str1[10] = { 'a', 'b', 'c' };
	char str2[10] = "abc";
	char str3[] = "abc";
	char str4[10] = "very long string";
	int size = sizeof(str1) / sizeof(str1[0]);
	int i;

	printf("str = ");
	for ( i = 0; i < size; i++)
	{
		printf("%c", str1[i]);
	}
	printf("\n");

	printf("str2 = %s\n", str2);
	printf("str3 = ");
	printf(str3);
	printf("\n");

	printf("str4 = %s\n", str4);
	*/

	/*
	char s1[] = "hello";
	char s2[] = "";
	int len = 0;

	printf("s1�� ����: %d\n", strlen(s1));
	printf("s2�� ����: %d\n", strlen(s2));
	printf("--�� ����: %d\n", strlen("bye bye"));

	printf("s1�� ũ��: %d\n", sizeof(s1));

	len = strlen(s1);
	if (len > 0)
	{
		s1[len - 1] = '\0';
	}
	printf("s1 = %s\n", s1);
	*/

	char str1[SIZE] = "";
	char str2[SIZE] = "";
	//char temp[SIZE];

	printf("���ڿ�? ");
	scanf_s("%s %s", &str1, &str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);


	

}