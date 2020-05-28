#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
	int score;
	char test;
	char restart;


	printf(" 시험에 응시하였습니까?: \no, x\n");
	scanf("%c", &test);
	switch (test)
	{
	case 'o':
		printf("your Score: ");
		if (scanf("%d", &score))
		{
			printf("입력됨\n");
		}
		else if (!scanf_s("%d", &score))
		{
			printf("입력 실패.\n");
		}

		if (score >= 60)
		{
			printf("Pass!\n");

			if (score >= 90)
			{
				printf("OMG GodDem\n ");
			}

			printf("수강 완료!!");
		}
		else
		{
			printf("No Pass!!");
			if (score <= 40)
			{
				printf("ReTest!!!!\n");

				if (score <= 20)
				{
					printf("쩝\n");

					if (score <= 10)
					{
						printf("아이고야\n");
					}
				}
			}
			printf("다음주에 뵙겠습니다.");

		}
		break;

	case 'x':
		
		printf("재수강하시겠습니까?: \no, x\n");
		scanf(" %c", &restart);
		
		switch (restart)
		{
		case 'o':
		{
			printf("카운터에 재접수 바랍니다.");
			break;
		}
		case 'x':
		{
			printf("다음에 뵙겠습니다.");
			break;
		}

		default:
			printf("잘못된 입력입니다.");
			break;
		}
		break;
		

	default:
		printf("잘못된 입력입니다.");
	}

	rewind(stdin);

	int width, height;
	char ch;
	int i, j;

	printf("직사각형의 폭과 높이?\n ");
	scanf("%d %d", &width, &height);
	printf("직사각형을 그릴 문자?\n ");
	scanf(" %c", &ch);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	rewind(stdin);

	int aa, bb;
	char op;
	char yesorno = 'Y';

	while (yesorno == 'Y' || yesorno == 'y')
	{
		printf("수식? ");
		scanf("%d %c %d", &aa, &op, &bb);

		switch (op) {
		case '+':
			printf("%d + %d = %d\n", aa, bb, aa + bb);
			break;
		case '-':
			printf("%d - %d = %d\n", aa, bb, aa - bb);
			break;
		case '*':
			printf("%d * %d = %d\n", aa, bb, aa * bb);
			break;
		case '/':
			if (bb != 0)
				printf("%d / %d = %d\n", aa, bb, (double)aa / bb);
			else
			{
				printf("0으로 나눌수 없다 \n");
			}
			break;
		default:
			printf("입력 오류\n");
			break;
		}
		printf("계속 할꺼냐?(Y/N) ");
		scanf(" %c", &yesorno);
	}
	rewind(stdin);

	int returni;

	for (returni = 10; returni > 0; returni--)
	{
		if (returni % 3 == 0)
			/*goto pass;
			return 1;
			pass:*/
			continue;
		printf("\n %d \n", returni);
	}
	
	printf("\n");
}

/*for 문은 특정한 범위를 가진 loop 에 이용하고,
while 문은 조건에 만족하는 결과를 얻기 위한 loop 에 이용
*/