#include <stdio.h>


int odd;    // �������� �ʱ�ȭ 
int even;
int a;

int main() {

	
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(����� 0 �Է�)\n");
	
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
	printf("�Է¹��� ���� �� ¦����\n¦���� ���� : %d\tȦ���� ����: %d", is_even(a), is_odd(a));
	
}

int is_even(int num) { // ¦�� �Ǻ� �� count
	
	if (num % 2 == 0)
		even++;
	return even - 1;

}
int is_odd(int num) { // Ȧ�� �Ǻ� �� count
	
	if (num % 2 == 1)
		odd++;
	
	return odd;
	
}



