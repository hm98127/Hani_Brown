#include <stdio.h>


int a;


int main() {

	printf("%d", choose_menu(a));
	
}


int choose_menu() {
	while (1)
	{
		printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료] 선택?: ");
		scanf_s("%d", &a);
		if (a == 1)
			printf("1번 파일 열기를 수행합니다.\n");
		else if (a == 2)
			printf("2번 파일 열기를 수행합니다.\n");
		else if (a == 3)
			printf("3번 파일 열기를 수행합니다.\n");
		else if (a == 0) {
			printf("종료되었습니다.\n");
			break;
		}
	}
	return;
}



