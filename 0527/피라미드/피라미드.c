#include <stdio.h>

int main(void) {

	int num = 10; // 10행까지 출력하라 
	int i, j, k; // i = 행의 수(가로 라인 계산)  j = 별의 갯수 
	

	for (i = 0; i < num; i++) //   1단계:입력받은 수 만큼 행 계산  (0~num-1)까지 반복
	{
		for (j = num-1; j > i; j--) // 빈칸의 수를 라인수에 맞춰 출력 
		{
			printf("^");
		}
		for (j = 0; j <= i; j++)  // 별의 갯수를 라인의 맞춰 출력
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
		printf("\n"); // 가로라인이 한번 끝나면 줄바꿈
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