// while문

//#include <stdio.h>
//int main()
//{
//	int num;
//	for (num = 0; num < 3; num++)
//	{
//		printf("Hello world %d \n", num);
//	}
//	return 0;
//}

// for문을 while문으로 고치기

//#include <stdio.h>
//int main()
//{
//	int num = 0;		// 초기식
//	while (num < 3)
//	{
//		printf("Hello world %d \n", num);
//		num++;			// 증감식
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <conio.h>
//#define ESC		0x1b		// 전처리기 문법 (define - 정의) -> esc라는 키워드로 정의함. 연산은 불가능하고 치환하는 정도
//int main(void)
//{
//	char ch;
//	while ((ch = getch()) != ESC)		// esc 키를 누르는 순간 거짓이 됨.
//	{
//		if (ch >= 'a' && ch <= 'z')
//			ch = ch - 32;				// 대문자와 소문자는 32 차이가 남.
//		putch(ch);		// getch의 반대 개념. 대문자인 경우 (서식제어문을 안 써도 바로 출력됨)
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <conio.h>
//#define ESC 0x1b
//int main(void)
//{
//	char ch;
//	while (1)		// 조건식 대신 상수 1을 넣음. 바뀌지 않고 계속해서 참이므로 무한 반복을 의미함. / while에 1을 넣고 종속문에서 조건을 만들어서 끝내는 방식을 사용하는 경우가 많음.
//	{
//		ch = getch();
//		if (ch == ESC)		// esc를 누르면 break로 빠져나옴.
//			break;
//		if (ch >= 'a' && ch <= 'z')
//			ch = ch - 32;
//		putch(ch);
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//#define TRUE 1		// 전처리기 문법을 이용해서 true, false를 정의해야 함.
//int main(void)
//{
//	int i, j, sum = 0;
//	while (TRUE)		// 1 대신 true라는 키워드를 사용해도 무한반복이 됨.
//	{
//		printf("수입력(1~100)");
//		scanf("%d", &i);
//		if (i >= 1 && i <= 100)		// 1~100의 값이 입력되면 break로 빠져나와서 for문에 의해 입력된 값까지 누적 합산함.
//			break;
//		printf("잘못 입력, 다시");
//	}
//	for (j = 1; j <= i; j++)
//		sum += j;
//	printf("%d", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int i, j, flag, sum = 0;
//	flag = 1;		// while 조건식에 변수 이용하는 문법. flag를 이용해서 switching 거짓을 만듦. flag는 어떤 상태를 나타내는 변수. 보통 상태보다는 스위칭하는 용도로 더 많이 사용됨. 절대규칙이 아니라 암묵적이고 관습적으로 flag라는 변수를 사용함. flag라는 변수로 무언가 스위칭 된다는 것을 나타낼 수 있어서 보통 flag를 사용함.
//	while (flag)
//	{
//		printf("수입력(1~100)");
//		scanf("%d", &i);
//		if (i >= 1 && i <= 100)
//			flag = 0;
//		else
//			printf("잘못 입력, 다시");
//	}
//	for (j = 1; j <= i; j++)
//		sum += j;
//	printf("%d", sum);
//
//	return 0;
//}



// 숫자 뒤집기
//#include <stdio.h>
//#define TRUE 1
//int main(void)
//{
//	int i, temp;
//	printf("수 입력");
//	scanf("%d", &i);
//	while (TRUE)
//	{
//		temp = i % 10;		// temp에 i를 10으로 나누어서 나머지를 저장함.
//		i = i / 10;			// i에는 몫을 저장함.
//		printf("%d", temp);
//		if (i == 0)			// i가 0이 아니면 위의 과정을 계속 반복해서 나머지를 출력하면 역순으로 숫자 하나씩 출력됨. 나머지 값을 이용해서 자릿수를 분리 시켜서 한자리씩 역순으로 나열해서 출력한 것.
//			break;
//	}
//	printf("\n");
//
//	return 0;
//}



/* do while문 (선 실행 후 판단)
* 무조건 실행됨 (거짓이어도)
*/



//#include <stdio.h>
//int main(void)
//{
//	int su = 0, sum = 0;
//	do
//	{
//		su++;		// su를 1 증가시키고, while에서의 조건문이 참인지 거짓인지 판단하여, 거짓이 될 때까지 do를 반복해서 실행함. do while에서는 선 실행이 되므로 10까지 진행이 되고 끝남. 11까지 안 넘어감. 원하는 숫자까지만 반복이 진행될 때 사용하는 문법
//		sum += su;
//	} while (su < 10);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



// quiz 1.

//#include <stdio.h>
//int main(void)
//{
//	int i, temp = 0;
//	printf("수 입력");
//	scanf("%d", &i);
//	while (1)
//	{
//		
//		if (i == 0)
//			break;
//	}
//	
//	printf("%d", temp);
//}


// 1. answer
//#include <stdio.h>
//#define TRUE 1
//int main()
//{
//	int i, temp, reverse = 0;
//	printf("수 입력 : ");
//	scanf("%d", &i);
//	printf("결과 : %d -> ", i);
//	while (TRUE)
//	{
//		temp = i % 10;		// 123이라면 10으로 나눠서 나머지 3이 reverse에 저장되고, 3에 10을 곱하고 나머지 2가 더해져서 32, 32에 10을 곱하고 나머지 1이 더해져서 최종적으로 321이라는 값이 저장되어 출력됨.
//		reverse *= 10;
//		reverse += temp;
//		i = i / 10;
//		if (i == 0)
//			break;
//	}
//	printf("%d\n", reverse);
//}


// quiz 2.

//#include <stdio.h>
//int main(void)
//{
//	int i, sum = 0;
//	printf("수 입력");
//	scanf("%d", &i);
//	while (1)
//	{
//		sum += i % 10;
//		i = i / 10;
//		if (i == 0)
//			break;
//	}
//	printf("%d", sum);
//
//	return 0;
//}



// 2. answer
//#include <stdio.h>
//#define TRUE 1
//int main(void)
//{
//	int i, temp, sum = 0;
//	printf("수 입력 : ");
//	scanf("%d", &i);
//	while (TRUE)
//	{
//		temp = i % 10;
//		sum += temp;
//		i = i / 10;
//		if (i == 0)
//			break;
//	}
//	printf("각 자리수의 합 : %d\n", sum);
//}



/* 기타제어문
- break가 소속 되어 있는 제어문에서만 벗어남.
- countinue
*/


// 중첩 while로 바꾸기
//#include <stdio.h>
//int main(void)
//{
//	int su1, su2;
//	for (su1 = 1; su1 <= 2; su1++)
//	{
//		for (su2 = 1; su2 <= 5; su2++)
//		{
//			printf("su1 = %d su2 = %d\n", su1, su2);
//			if (su2 == 2)
//				break;
//		}
//		printf("%d * %d = %d\n", su1, su2, su1 * su2);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int su1 = 1, su2 = 1;
//	while (su1 <= 2)
//	{
//		while (su2 <= 5)
//		{
//			printf("su1 = %d su2 = %d\n", su1, su2);
//			su2++;
//			if (su2 > 2)
//				break;
//		}
//		if (su2 <= 2)
//			continue;
//		printf("%d * %d = %d\n", su1, su2, su1 * su2);
//		su1++;
//	}
//	return 0;
//}


// 중첩 while. answer
//#include <stdio.h>
//int main(void)
//{
//	int su1 = 1, su2;
//	while (su1 <= 2)
//	{
//		su2 = 1;		// su2의 초기화를 상위 while 안에 넣어주면 하위 while이 다시 1로 초기화 되어서 su2=1부터 시작됨.
//		while (su2 <= 5)
//		{
//			printf("su1 = %d su2 = %d\n", su1, su2);
//			if (su2 == 2)
//				break;
//			su2++;
//		}
//		printf("%d * %d = %d\n", su1, su2, su1 * su2);
//		su1++;
//	}
//}