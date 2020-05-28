#include <stdio.h>
#include <limits.h>
#include <float.h>




int main(void)
{
	int number;
	int sum;
	number = 1;
	sum = 0;

	while (number <= 10)
	{
		sum = sum + number;
			number++;
	}
	printf("\n1+2+3+4+5+6+7+8+9+10=%d\n", sum);
	//----------------------------------------------------------------------
	int num1 = 2000, num2 = 2;
	printf("hello "), printf("world! \n");
	num1++, num2++;
	printf("%d ", num1), printf("%d", num2), printf("\n\n\n\n");
	//----------------------------------------------------------------------
	int num3 = 10;
	int num4 = 12;
	int result1, result2, result3;

	result1 = (num3 == 10 && num4 == 12);
	result2 = (num3 < 12 || num4>12);
	result3 = (!num3);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	printf("\n\n\n");
	//----------------------------------------------------------------------
	char bell = '\b';

	printf("%c 프로그램을 시작합니다.\n", bell);
	printf("c:\\work\\chap03\\Ex03_06\\Debug\n");
	printf("\t탭 문자를 출력합니다.\n");
	printf("\n\n\n\n");

	// ----------------------------------------------------------------------
	float x = 3.40282e38;
	float y = 1.17549e-38;

	printf("x = %30.25e\n", x);
	printf("y = %30.25e\n", y);

	x = x * 100;
	printf("x= %30.25e\n", x);

	y = y / 1000;
	printf("y = %30.25e\n", y);
	printf("\n\n\n\n");
	//----------------------------------------------------------------------

	int numTest1 = 12;
	int numTest2 = 12;

	printf("numTest1: %d \n", numTest1);
	printf("numTest1 Postfix: %d  \n", numTest1++);
	printf("numTest1: %d \n\n", numTest1);

	printf("numTest2: %d \n", numTest2);
	printf("numTest2 Prefix: %d  \n", ++numTest2);
	printf("numTest2: %d \n\n", numTest2);

	printf("----------------------------------------------------------------------\n\n\n\n");
	
	char a = CHAR_MAX;
	char b = CHAR_MAX + 1;
	short c = SHRT_MAX;
	short d = SHRT_MAX + 1;
	int e = INT_MAX;
	int f = INT_MAX + 1;
	float g = FLT_MAX;
	float h = FLT_MAX * 10;

	printf("a = %d, b = %d\n", a, b);
	printf("c = %d, d = %d\n", c, d);
	printf("e = %d, f = %d\n", e, f);
	printf("g = %30.25e, h = %30.25e\n", a, b);

	printf("----------------------------------------------------------------------\n\n\n\n");

	int amount = 0, price = 0;
	const double VAT_RATE = 0.1;
	int total_price = 0;

	printf("수량? ");
	scanf_s("%d", &amount);

	printf("단가? ");
	scanf_s("%d", &price);

	total_price = amount * price * (1 + VAT_RATE);
	printf("합계: %d원\n", total_price);

	printf("----------------------------------------------------------------------\n\n\n\n");

	double rad;
	double area;
	printf("원의 반지금 입력: ");
	scanf_s("%lf", &rad);

	area = rad * rad * 3.141592;
	printf("원의 넓이: %f \n", area);
	printf("----------------------------------------------------------------------\n\n\n\n");

	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	printf("----------------------------------------------------------------------\n\n\n\n");

	int num = 123;

	printf("%08d\n", num);

	printf("----------------------------------------------------------------------\n\n\n\n");
	int Rxpos, Rypos;
	int Lxpos, Lypos;
	int areaSquare;

	printf("R location: ");
	scanf_s("%d, %d \n", &Rxpos, &Rypos);
	printf("L location: ");
	scanf_s("%d, %d \n", &Lxpos, &Lypos);

	areaSquare = (Rxpos - Lxpos) * (Rypos - Lypos);
	printf("Square area %d\n", areaSquare);

	printf("----------------------------------------------------------------------\n\n\n\n");

	int items = 0;
	int pages = 0;
	int items_per_page = 0;

	printf("항목수? ");
	scanf_s("%d", &items);

	printf("한 페이지 당 항목수? ");
	scanf_s("%d", &items_per_page);

	pages = items / items_per_page;
	items %= items_per_page;
	printf("%d 페이지와 %d 항목\n", pages, items);

	printf("----------------------------------------------------------------------\n\n\n\n");

	int La = 0, Lb = 0;

	printf("두개의 정수? ");
	scanf_s("%d %d", &La, &Lb);

	printf("%d > %d : %d\n", La, Lb, La > Lb);
	printf("%d < %d : %d\n", La, Lb, La < Lb);
	printf("%d >= %d : %d\n", La, Lb, La >= Lb);
	printf("%d <= %d : %d\n", La, Lb, La <= Lb);
	printf("%d == %d : %d\n", La, Lb, La == Lb);
	printf("%d != %d : %d\n", La, Lb, La != Lb);

	printf("----------------------------------------------------------------------\n\n\n\n");


	int Oa = 5;
	int Ob = 9;
	int OPPP;
	OPPP = Oa++, ++Ob;

	printf("%d\n", OPPP);

	printf("----------------------------------------------------------------------\n\n\n\n");

	short Ua, Ub, Uc;

	printf("정수 2개? ");
	scanf_s("%hd %hd", &Ua, &Ub);

	printf("%d * %d = %d\n", Ua, Ub, Ua * Ub);
	printf("sizeof(a * b) = %d\n", sizeof(Ua * Ub));

	Uc = Ua * Ub;
	printf("c = %d\n", Uc);
	printf("sizeof(c) = %d\n", sizeof(Uc));


	



	return 0;
}