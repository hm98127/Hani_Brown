#include <stdio.h>


int odd;    // 전역변수 초기화 
int even;
int a;

int main() {

	
	printf("정수를 빈칸으로 구분해서 입력하세요.(종료시 0 입력)\n");
	
	for (int i = 1; i <= 12; i++)
	{
		scanf_s("%d", &a);      // 입력받기 12개까지 나 0 입력후 종료
		if (a == 0)
		{
			break;
		}
		
		is_even(a);
		is_odd(a);
		
	}
	printf("입력받은 정수 중 짝수는\n짝수의 개수 : %d\t홀수의 개수: %d", even, odd); 
	
}

int is_even(int num) { // 짝수 판별 후 count
	
	if (num % 2 == 0)
		even++;
	return even;

}
int is_odd(int num) { // 홀수 판별 후 count
	
	if (num % 2 == 1)
		odd++;
	
	return odd;
	
}



