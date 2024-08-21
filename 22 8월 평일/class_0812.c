/* 연산자 우선순위
- 다른 사람의 코드를 볼 때는 우선순위가 가장 낮은 대입연산자, 복합대입연산자를 먼저 찾기 -> (복합)대입연산자를 기준으로 우측을 먼저 신경 쓰면 됨. -> 우측항에서 우선순위가 가장 낮은 논리연산자를 찾기 -> 논리 연산자를 기준으로 좌측을 먼저 봄 -> 좌측에서 우선순위가 가장 낮은 비트연산자 찾기 // 가장 낮은 연산자부터.. 연산자를 기준으로 좌우를 나누고, 좌측부터 수행하고 우측을 수행함. * 주의 : 비트 연산자와 논리 연산자는 서로 다른 결과가 나옴. *
- 내가 코드를 작성할 때는 제일 먼저 연산해야 되는 것부터 나열하고, 괄호를 씌워나가면서 계속 우선순위를 잡아줌.
- 암기하는 것보다는 연습하면서 익숙해지기

!!! 간소화 연습 -> 불필요한 건 없애고, 연산식은 최대한 줄이는 연습..
*/

/* 조건문
제어문
- 모든 컴퓨터 언어는 기본적으로 절차지향적 성향을 갖고 있습니다.
절차지향이란, 좌에서 우로 위에서 아래의 우리가 책을 읽는 방향과 같습니다.
즉, 컴퓨터가 순서대로 명령을 처리해 나가는 거죠.
그런데 기본적인 흐름을 제어해서 경우에 따른 실행명령이나, 또는 특정구간을 반복순환하는 흐름을 가져야 할 때가 있습니다.
이때 사용하는 문법이 바로 제어문입니다.

조건 제어문 (= 조건 분기문)
= 일반적으로 if라는 키워드를 사용하며 조건식의 참, 거짓여부에 명령실행이 갈리는(분기점) 구조를 갖는 제어문

- 단순 if문
- 파이썬에서는 종속문이 없으면 에러 발생. -> pass를 이용해서 종속문을 대신함.
- 종속문장이 여러 개인 경우, 중괄호 사용 / 종속은 무조건 한 덩어리가 옴. / 중괄호로 묶지 않으면, 첫번째 문장은 종속문장이 되고, 나머지는 다음문장 처리가 됨.
*/



//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 5;
//	// scanf("%d%d", &num1, &num2);
//	// if (num1 > num2)
//	// if (num1 - num2)		// 결과가 0이 아니면 참이어서 실행됨.
//	if ("나는 실행될까?")		// if문 안에는 다양한 데이터가 올 수 있음. (연산식만 오는 게 아님)
//		printf("%d", num1 > num2);		// 참이면 1이 출력되고, 거짓이면 실행되지 않기 때문에 아무것도 출력되지 않음.
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 1, num2 = 0;
//	if (num1)		// 변수 이용. 입력된 데이터에 따라서 참거짓이 바뀔 수 있는 경우에는 변수를 이용해서 조건식을 넣음.
//		printf("참");
//
//	if (num2)
//		printf("거짓");
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 1;
//	if (num1)
//		printf("참");
//	num1 = 0;
//	if (num1)
//		printf("거짓");
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	if (1)		// 상수 -> 참거짓이 바뀌지 않고 결과가 무조건 똑같음. / 변수를 넣을지 상수를 넣을지는 반복문에서 사용할 때 차이가 있음.
//		printf("참이므로 출력");
//
//	if (0)
//		printf("거짓이므로 출력 안함");
//
//	return 0;
//}



// 입력한 값이 짝수인 경우 "짝수"를 홀수인 경우 "홀수"를 출력하는 프로그램을 작성하시오
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;
//	scanf("%d", &num1);
//	num2 = num1 % 2;
//	if (num2 == 0)
//		printf("짝수");
//	if (num2 != 0)		// if(num2)로 표현 가능 -> 짝수이면 num2=0이므로 거짓이어서 실행안됨. 홀수면 num2=1이므로 참이어서 실행됨. / if(num1 % 2)로도 표현 가능
//		printf("홀수");
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int su;
//	printf("10보다 큰 정수를 입력하세요...");
//	scanf("%d", &su);
//	if (su <= 10)
//		printf("10 이하의 수를 입력하였습니다.\n");
//	printf("%d", su);		// 다음문장 -> 참거짓 관계 없이 실행됨
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int su;
//	printf("10보다 큰 정수를 입력하세요...");
//	scanf("%d", &su);
//	if (su <= 10)
//	{
//		printf("10 이하의 수를 입력하였습니다.\n");
//		printf("%d", su);		// 다음문장 -> 참거짓 관계 없이 실행됨
//	}		// 10 이하일 때만 출력됨
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int num;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//	if (num < 0)		// 범위가 겹치지 않기 때문에 2개 이상 실행되는 경우가 발생하지 않음.
//		printf("입력 값은 0보다 작다.\n");
//	if (num > 0)
//		printf("입력 값은 0보다 크다.\n");
//	if (num == 0)
//		printf("입력 값은 0이다.\n");
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	if (num > 0)		// 조건식을 제대로 만들지 않으면 버그 발생 -> 범위가 겹쳐지는 부분이 있음. / 범위가 겹쳐지는 부분이 있게 조건식을 만들면 여러 개가 실행될 수 있음.
//		printf("입력 값은 0보다 크다.\n");
//
//	if (num > 50)
//		printf("입력 값은 50보다 크다.\n");
//
//	if (num > 100)
//		printf("입력 값은 100보다 크다.\n");
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int opt;
//	double num1, num2;
//	double result;
//
//	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈\n");
//	scanf("%d", &opt);
//	printf("두 개의 실수 입력 : ");
//	scanf("%lf %lf", &num1, &num2);
//
//	if (opt == 1)		// 단순 if 문에서 menu 고르는 건 비효율적임.
//		result = num1 + num2;
//	if (opt == 2)
//		result = num1 - num2;
//	if (opt == 3)
//		result = num1 * num2;
//	if (opt == 4)
//		result = num1 / num2;
//
//	printf("결과 : %f\n", result);
//
//	return 0;
//}



// quiz_날짜를 입력받아 요일을 구하시오. (1일은 무조건 월요일, 7일은 일요일, 8일은 월요일)
//#include <stdio.h>
//
//int main(void)
//{
//	int days, day;
//
//	printf("날짜를 입력하세요 : ");
//	scanf("%d", &days);
//
//	day = days % 7;
//
//	if (day == 1)
//		printf("월요일");
//	if (day == 2)
//		printf("화요일");
//	if (day == 3)
//		printf("수요일");
//	if (day == 4)
//		printf("목요일");
//	if (day == 5)
//		printf("금요일");
//	if (day == 6)
//		printf("토요일");
//	if (day == 0)
//		printf("일요일");
//
//	return 0;
//}



// quiz_answer
//#include <stdio.h>
//
//int main(void)
//{
//	int day;
//	printf("날짜 입력 : ");
//	scanf("%d", &day);
//	if (day % 7 == 1) printf("월요일\n");
//	if (day % 7 == 2) printf("화요일\n");
//	if (day % 7 == 3) printf("수요일\n");
//	if (day % 7 == 4) printf("목요일\n");
//	if (day % 7 == 5) printf("금요일\n");
//	if (day % 7 == 6) printf("토요일\n");
//	if (day % 7 == 0) printf("일요일\n");		// 나머지가 7이 아니라 0임 !!!
//}



// 문제-1 (단순 if문만 사용)
// 1. 수를 입력 받아 입력한 수가 3의 배수인 경우 출력하시오. -> 입력한 수는 3의 배수입니다.
// 2. 수를 입력 받아 절댓값을 구하여 출력하시오.
// 3. 수를 입력 받아 짝, 홀수를 구분하여 출력하시오. -> 3항 연산자 X, 앞의 예제랑 다른 방식으로 생각해보기
// 4. 두 수를 입력 받아 큰 수를 출력하시오.
/*
입력
첫번째 수를 입력하세요: 수 입력
두번째 수를 입력하세요: 수 입력
출력
"첫번째 수가 더 큽니다."
"두번째 수가 더 큽니다."
"두 수가 같은 수 입니다."
*/

// 문제-2
// 1. 세 수를 입력 받아 큰 수를 출력하시오. -> 세 수가 전부 다르다고 가정하고 코드 작성
// 2. 두 수를 입력 받아 큰 수가 짝수이면 출력하시오. -> 두가지 조건 만족 1. 큰 수, 2. 짝수
// 3. 두 수를 입력 받아 합이 짝수이고 3의 배수인 수를 출력하시오. -> 합 먼저 구하고, 합이 짝수이면서 3의 배수여야 함



// 문제-1
// 1. 수를 입력 받아 입력한 수가 3의 배수인 경우 출력하시오.
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//
//	printf("수를 입력하세요 : ");
//	scanf("%d", &num);
//
//	if (num % 3 == 0)
//		printf("입력한 수는 3의 배수입니다.");
//
//	return 0;
//}

// 2. 수를 입력 받아 절댓값을 구하여 출력하시오.
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//
//	printf("수를 입력하세요 : ");
//	scanf("%d", &num);
//
//	if (num < 0)
//		printf("절댓값 : %d", (-num));
//
//	if (num >= 0)
//		printf("절댓값 : %d", num);
//
//	return 0;
//}

// 3. 수를 입력 받아 짝, 홀수를 구분하여 출력하시오.
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//
//	printf("수를 입력하세요 : ");
//	scanf("%d", &num);
//
//	if (num % 2 == 0)
//		printf("입력된 값은 짝수입니다.");
//
//	if (num % 2 != 0)
//		printf("입력된 값은 홀수입니다.");
//
//	return 0;
//}

// 4. 두 수를 입력 받아 큰 수를 출력하시오.
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;
//
//	printf("첫번째 수를 입력하세요 : ");
//	scanf("%d", &num1);
//
//	printf("두번째 수를 입력하세요 : ");
//	scanf("%d", &num2);
//
//	if (num1 > num2)
//		printf("첫번째 수가 더 큽니다.");
//
//	if (num1 < num2)
//		printf("두번째 수가 더 큽니다.");
//
//	if (num1 == num2)
//		printf("두 수가 같은 수 입니다.");
//
//	return 0;
//}

// 문제-2
// 1. 세 수를 입력 받아 큰 수를 출력하시오. -> 세 수가 전부 다르다고 가정하고 코드 작성
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, num3;
//
//	printf("첫번째 수를 입력하세요 : ");
//	scanf("%d", &num1);
//	printf("두번째 수를 입력하세요 : ");
//	scanf("%d", &num2);
//	printf("세번째 수를 입력하세요 : ");
//	scanf("%d", &num3);
//
//	if ((num1 > num2) & (num1 > num3))
//		printf("가장 큰 수는 %d입니다.\n", num1);
//
//	if ((num2 > num1) & (num2 > num3))
//		printf("가장 큰 수는 %d입니다.\n", num2);
//
//	if ((num3 > num1) & (num3 > num2))
//		printf("가장 큰 수는 %d입니다.\n", num3);
//
//	return 0;
//}

// 2. 두 수를 입력 받아 큰 수가 짝수이면 출력하시오. -> 두가지 조건 만족 1. 큰 수, 2. 짝수
//#include <stdio.h>
// 
//int main(void)
//{
//	int num1, num2;
//
//	printf("첫번째 수를 입력하세요 : ");
//	scanf("%d", &num1);
//	printf("두번째 수를 입력하세요 : ");
//	scanf("%d", &num2);
//	
//	if ((num1 > num2) & (num1 % 2 == 0))
//		printf("큰 수인 %d는 짝수입니다.", num1);
//
//	if ((num2 > num1) & (num2 % 2 == 0))
//		printf("큰 수인 %d는 짝수입니다.", num2);
//
//	return 0;
//}

// 3. 두 수를 입력 받아 합이 짝수이고 3의 배수인 수를 출력하시오. -> 합 먼저 구하고, 합이 짝수이면서 3의 배수여야 함
#include <stdio.h>

int main(void)
{
	int num1, num2, sum;

	printf("첫번째 수를 입력하세요 : ");
	scanf("%d", &num1);
	printf("두번째 수를 입력하세요 : ");
	scanf("%d", &num2);

	sum = num1 + num2;

	if ((sum % 2 == 0) & (sum % 3 == 0))
		printf("%d는 짝수이면서 3의 배수이다.\n", sum);

	return 0;
}