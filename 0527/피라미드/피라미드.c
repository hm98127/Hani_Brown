#include <stdio.h>

int main(void) {

	int num = 10; // 10����� ����϶� 
	int i, j, k; // i = ���� ��(���� ���� ���)  j = ���� ���� 
	

	for (i = 0; i < num; i++) //   1�ܰ�:�Է¹��� �� ��ŭ �� ���  (0~num-1)���� �ݺ�
	{
		for (j = num-1; j > i; j--) // ��ĭ�� ���� ���μ��� ���� ��� 
		{
			printf("^");
		}
		for (j = 0; j <= i; j++)  // ���� ������ ������ ���� ���
		{
			/*if (num > j - 1 && num < j + 1) 
			{
				printf("%3c", '*');
			}
			else
			{
				printf(" ");
			}*/
			printf("%3c", '*');
		}
		/*for (j = 1; j <= (num - i); j++) */
			/*printf(" ");*/
		printf("\n"); // ���ζ����� �ѹ� ������ �ٹٲ�
	}
	printf("\n\n\n\n\n");

	int row = 10;
	int out = 2;
	for (int i = 0; i < row; i++)
	{
		int c;
		for (c = 0; c <= (row - i); c++)
		{
			printf(" ");
		}
		int devider;
		for (c = 0; c <= i; c++)
		{
			while (1)
			{
				for (devider = 2; devider <= out - 1; devider++)
				{
					if (out % devider == 0)
						break;
				}
				if (out++ == devider)
				{
					printf("%3d ", out - 1);
					break;
				}
			}
		}
		printf("\n");
	}
	printf("  xx                                   xx             \n");
	printf("  xx                                   xx             \n");
	printf("  xx   xxxxxxxxxx                      xx             \n");
	printf("  xx   x        x                      xx             \n");
	printf("  xx   x        x                      xx             \n");
	printf("  xx   xxxxxxxxxx            xxxxxxxx  xx             \n");
	printf("  xx                         x      x  xx             \n");
	printf("  xx                         x      x  xx             \n");
	printf("  xx                         x    x x  xx             \n");
	printf("  xx                         x    x x  xx             \n");
	printf("  xx                         x      x  xx             \n");
	printf("  xx                         x      x  xx             \n");
	printf("  xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx             \n");

	printf("\n\n");

	printf("        xx                             xx         xxxxxxxxxxxxxxxxxxxxxxxxx    \n");
	printf("        xx                             xx                      x \n");
	printf("        xx                             xx                      x\n");
	printf("        xx                             xx                      x \n");
	printf("        xx                             xx                      x \n");
	printf("        xx                             xx                      x\n");
	printf("        xx                             xx                      x\n");
	printf("        xx                             xx                      x\n");
	printf("        xx                             xx                      x\n");
	printf("        xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx                      x\n");
	printf("        xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx                      x\n");
	printf("        xx                             xx                      x\n");
	printf("        xx                             xx                      x\n");
	printf("        xx                             xx                      x \n");
	printf("        xx                             xx                      x\n");
	printf("        xx                             xx                      x\n");
	printf("        xx                             xx          xx         xx\n");
	printf("        xx                             xx           xx       xx\n");
	printf("        xx                             xx             xx    xx\n");
	printf("        xx                             xx               xxx\n");


	printf("\n\n\n");

	for (i = 1; j <= 9; i++)
	{
		for (j = 2; j <= 9; j++)
		{
			printf("%d * %d = %d", i, j, i * j);
		}
		printf("\n");
	}
}