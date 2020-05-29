#include <stdio.h>


int odd;    // 전역변수 초기화 
int even;
int a;

int main() {

	
	printf("정수를 빈칸으로 구분해서 입력하세요.(종료시 0 입력)\n");
	
	for (int i = 1; i <= 12; i++)
	{
		scanf_s("%d", &a);
		if (a == 0)
		{
			break;
		}
		
		is_even(a);
		is_odd(a);
		
	}
	printf("입력받은 정수 중 짝수는\n짝수의 개수 : %d\t홀수의 개수: %d", is_even(a), is_odd(a));
	
}

int is_even(int num) { // 짝수 판별 후 count
	
	if (num % 2 == 0)
		even++;
	return even - 1;

}
int is_odd(int num) { // 홀수 판별 후 count
	
	if (num % 2 == 1)
		odd++;
	
	return odd;
	
}



