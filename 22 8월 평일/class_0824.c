
// 1. 구구단

//#include <stdio.h>
//int main(void)
//{
//	int su1, su2;
//	printf("---------------------------------------------------------------\n");
//	printf("\t\t    ****** 구 구 단 ******\n");
//	printf("---------------------------------------------------------------\n");
//	printf("2단\t3단\t4단\t5단\t6단\t7단\t8단\t9단\n");
//	printf("---------------------------------------------------------------\n");
//
//	for (su1 = 1; su1 <= 9; su1++)
//	{
//		for (su2 = 2; su2 <= 9; su2++)
//			printf("%d*%d=%d\t", su2, su1, su1 * su2);
//		printf("\n");
//	}
//}


// 1. answer
//#include <stdio.h>		// 행 단위로 출력되기 때문에 고정되는 수, 변하는 수를 잘 확인해야 함 
//int main(void)
//{
//	int num1, num2;
//	printf("==============================================================\n");
//	printf("\t\t\t    구 구 단\n");
//	printf("==============================================================\n");
//	for (num1 = 2; num1 <= 9; num1++)
//		printf("%d단\t", num1);
//	printf("\n");
//	printf("--------------------------------------------------------------\n");
//	for (num1 = 1; num1 <= 9; num1++)		// 곱해지는 수
//	{
//		for (num2 = 2; num2 <= 9; num2++)		// 단수
//			printf("%dX%d=%d\t", num2, num1, num2 * num1);
//		printf("\n");
//	}
//}


// 2. 마지막날 입금되는 금액, 총 얼마인지 둘 다 구함 (난이도 상)
// 첫날에 1원을 예금하고, 다음날에는 전날의 2배를 예금하는 방식으로 한달(30일) 동안 저축하면서 마지막 입금되는 금액과 총 저축액의 금액은 ?

//#include <stdio.h>
//int main(void)
//{
//	int money, sum = 0, day;
//	
//	for (money = 1, day = 1; day <= 30; money *= 2, day++)		// 30일까지 전날 금액에 2배를 곱한 값을 sum에 더해주기
//	{
//		sum += money;
//		/*printf("%d일 입금 금액 : %d\n총 저축액 : %d\n", day, money, sum);*/
//		/*printf("마지막 입금 금액 : %d\n총 저축액 : %d\n", money, sum);*/
//	}
//	money /= 2;
//	printf("마지막 입금 금액 : %d\n총 저축액 : %d\n", money, sum);
//
//	return 0;
//}


// 2. answer
//#include <stdio.h>
//int main(void)
//{
//	int day, money = 1, save = 1;	// day는 날짜, money는 2배씩 입금하는 돈, save는 총 저축액
//	for (day = 2; day <= 30; day++)	// 다음날부터 ~ 이므로 day=2부터 시작해야 함. day=1로 시작하면 틀린 답.
//	{
//		money *= 2;
//		save += money;
//		/*printf("%d일 %d / %d\n", day, money, save);*/		// 검산식
//	}
//	printf("마지막 입금액 : %d원\n총 저축금액 : %d원\n", money, save);
//}



// 3. 1~1000의 합을 구하고 나서 3의 배수이면서 5의 배수가 아닌 수를 모두 더해서 전체에서 빼주기 (난이도 중하)
// 1~1000까지의 합을 구하라. 단 3의 배수는 제외하고 3의 배수이면서 5의 배수는 제외하지 않는 조건으로 구하라.

//#include <stdio.h>
//int main()
//{
//	int su, sum = 0, sum1 = 0, sum2 = 0;
//	
//	for (su = 1; su <= 1000; su++)
//	{
//		sum1 += su;			// 1부터 1000까지 모두 더하기
//	}
//	if ((su % 3 == 0) && (su % 5 != 0))
//		sum2 += su;			// 3의 배수이면서 5의 배수가 아닌 수 모두 더하기 // if문이 for문 안에 들어가야 함.
//
//	sum = sum1 - sum2;		// 1부터 1000까지 모두 더한 수에서 3의 배수이면서 5의 배수가 아닌 수를 모두 더한 값을 빼주기
//
//	printf("결과 : %d", sum);
//
//	return 0;
//}

// 3. answer
//#include <stdio.h>
//int main(void)
//{
//	int i, sum1 = 0, sum2 = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		sum1 += i;	// 우선 1~1000까지의 합을 구함
//		if (i % 3 == 0 && i % 5 != 0)	// 3의 배수이면서 5의 배수가 아닌 수 찾기
//			sum2 += i;
//	}
//	printf("결과 : %d\n", sum1 - sum2);
//}


// 4. (난이도 중상) 1부터 시작하여 홀수의 합을 구하면서 그 합이 10000을 넘지 않는 마지막 수를 구하는 프로그램을 작성하여라

//#include <stdio.h>
//int main(void)
//{
//	int su, sum=0;
//
//	for (su = 1; sum < 10000; su += 2)
//	{
//		sum += su++;
//		if (sum > 10000)		// 합계가 10000이 넘어갈 경우 중단하기
//			break;
//	}
//	sum -= su;
//	printf("홀수의 합 : %d\n마지막 수 : %d\n", sum, su);
//
//	return 0;
//}

// 4.answer
//#include <stdio.h>
//int main(void)
//{
//	int i, sum = 0;
//	for (i = 1;; i+=2)
//	{
//		sum += i;
//		//printf("%d / %d\n", i, sum);		// 검산식
//		if (sum >= 10000)
//			break;
//	}
//	printf("결과 : %d\n", i);
//}

//#include <stdio.h>
//int main(void)
//{
//	int i, sum = 0;
//	for (i = 1; sum < 10000; i += 2)
//	{
//		sum += i;
//		/*if (sum >= 10000)
//			break;*/
//	}
//	printf("결과 : %d\n", i-2);		// 틀린 답은 아님.
//}



// quiz. 중첩 for문
//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("상위포문 %d 일 때 하위 포문 : ", i);
//		for (j = 0; j < 5; j++)
//			printf("%d ", i * j);
//		printf("\n");
//	}
//	return 0;
//}


// quiz. answer
//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		printf("상위포문 %d일 때 하위 포문:", i);		// 나눠서 출력해야 함.
//		for (j = 0; j < 5; j++)
//			printf("%3d", i * j);		// 숫자가 한자릿수도 있고 두자릿수도 있어서 깔끔하게 출력하기 위해서 %3d를 사용함.
//		printf("\n");
//	}
//}



// quiz. 중첩 for문 (2개 이상 만들어보기)
//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//
//	for (i = 0; i <= 20; i += 5)
//	{
//		for (j = 1; j <= 5; j++)
//			printf("%d\t", i + j);
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//
//	for (i = 5; i <= 25; i += 5)
//	{
//		for (j = 4; j >= 0; j--)
//			printf("%d\t", i - j);
//		printf("\n");
//	}
//	return 0;
//}



// quiz. answer
//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//	for (i = 0; i < 22; i += 5)		// 맨 왼쪽의 포지션 잡기 // 세로 방향의 규칙
//	{		// 맨 왼쪽을 선출력 후, 하위 for문으로 우측에 4개를 출력하는 방법도 있음.
//		for (j = 1; j < 6; j++)		// 가로 방향의 규칙
//			printf("%d\t", i + j);
//		printf("\n");
//	}
//
//}


//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 1; j < 6; j++)
//			printf("%d\t", j + 5 * i);		// 출력할 때 위에서 만든 규칙을 한꺼번에 만듦.
//		printf("\n");
//	}
//}


//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 21; i += 5)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d\t", i + j);
//		printf("\n");
//	}
//}


/* while문
- 조건문이 참인 동안 종속 문장을 반복 실행함.
- 무언가 실행을 하고 끝내야 될 때는 while else

for와 while의 차이점
- c언어에서는 for와 while의 차이점을 찾기 쉽지 않습니다. 하지만 파이썬은 for와 while의 용도가 분명합니다.
굳이 용도를 구분하자면 for는 반복의 범위가 정해져있거나 반복의 간격이 일정한 경우 알맞은 문법
while은 반복의 범위가 정해져있지 않거나 반복의 간격이 일정하지 않은 경우 알맞은 문법


- 공통점은 언젠가는 끝이 난다는 것이다.
- for는 반복문 안에 끝이 나타나있다. while은 끝이 불분명한 경우가 대부분이다.
*/