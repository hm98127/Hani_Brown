#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
	int score;
	char test;
	char restart;


	printf(" ���迡 �����Ͽ����ϱ�?: \no, x\n");
	scanf("%c", &test);
	switch (test)
	{
	case 'o':
		printf("your Score: ");
		if (scanf("%d", &score))
		{
			printf("�Էµ�\n");
		}
		else if (!scanf_s("%d", &score))
		{
			printf("�Է� ����.\n");
		}

		if (score >= 60)
		{
			printf("Pass!\n");

			if (score >= 90)
			{
				printf("OMG GodDem\n ");
			}

			printf("���� �Ϸ�!!");
		}
		else
		{
			printf("No Pass!!");
			if (score <= 40)
			{
				printf("ReTest!!!!\n");

				if (score <= 20)
				{
					printf("��\n");

					if (score <= 10)
					{
						printf("���̰��\n");
					}
				}
			}
			printf("�����ֿ� �˰ڽ��ϴ�.");

		}
		break;

	case 'x':
		
		printf("������Ͻðڽ��ϱ�?: \no, x\n");
		scanf(" %c", &restart);
		
		switch (restart)
		{
		case 'o':
		{
			printf("ī���Ϳ� ������ �ٶ��ϴ�.");
			break;
		}
		case 'x':
		{
			printf("������ �˰ڽ��ϴ�.");
			break;
		}

		default:
			printf("�߸��� �Է��Դϴ�.");
			break;
		}
		break;
		

	default:
		printf("�߸��� �Է��Դϴ�.");
	}

	rewind(stdin);

	int width, height;
	char ch;
	int i, j;

	printf("���簢���� ���� ����?\n ");
	scanf("%d %d", &width, &height);
	printf("���簢���� �׸� ����?\n ");
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
		printf("����? ");
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
				printf("0���� ������ ���� \n");
			}
			break;
		default:
			printf("�Է� ����\n");
			break;
		}
		printf("��� �Ҳ���?(Y/N) ");
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

/*for ���� Ư���� ������ ���� loop �� �̿��ϰ�,
while ���� ���ǿ� �����ϴ� ����� ��� ���� loop �� �̿�
*/