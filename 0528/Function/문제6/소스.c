#include <stdio.h>


int a;


int main() {

	printf("%d", choose_menu(a));
	
}


int choose_menu() {
	while (1)
	{
		printf("[1.���� ���� 2.���� ���� 3.�μ� 0.����] ����?: ");
		scanf_s("%d", &a);
		if (a == 1)
			printf("1�� ���� ���⸦ �����մϴ�.\n");
		else if (a == 2)
			printf("2�� ���� ���⸦ �����մϴ�.\n");
		else if (a == 3)
			printf("3�� ���� ���⸦ �����մϴ�.\n");
		else if (a == 0) {
			printf("����Ǿ����ϴ�.\n");
			break;
		}
	}
	return;
}



