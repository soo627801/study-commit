// 문제 (응용 연습)
//#include <stdio.h> //printf(), scanf()
//#include <stdlib.h> //exit(), system()
//int main(void) {
//	int num, kor, eng, math, sum;
//	double avg;
//	char name[10];
//
//	while (1) {
//		printf("=================================\n");
//		printf("\tM e n u\n");
//		printf("=================================\n");
//		printf("\t1. 학생이름 입력\n");
//		printf("\t2. 성적 3과목 입력\n");
//		printf("\t3. 학생이름 출력\n");
//		printf("\t4. 합계 출력\n");
//		printf("\t5. 평균 출력\n");
//		printf("\t6. 종료\n");
//		printf("=================================\n");
//
//		scanf("%d", &num);
//
//		switch (num) {
//		case 1:
//			printf("학생 이름을 입력하세요...\n");
//			scanf("%s", &name);
//			break;
//		case 2:
//			printf("3과목의 성적을 입력하세요...\n");
//			scanf("%d%d%d", &kor, &eng, &math);
//			break;
//		case 3:
//			printf("학생 이름 : %s\n", name);
//			break;
//		case 4:
//			sum = kor + eng + math;
//			printf("합계 : %d\n", sum);
//			break;
//		case 5:
//			avg = sum / 3.0;
//			printf("평균 : %.2f\n", avg);
//			break;
//		case 6:
//			exit(1);
//		}
//	}
//}



// answer
//#include <stdio.h> //printf(), scanf()
//#include <stdlib.h> //exit(), system()
//#include <conio.h>
//int main(void) 
//{
//	int num, kor, eng, math, sum;
//	double avg;
//	char name[20];
//
//	while (1) {
//		printf("=================================\n");
//		printf("\tM e n u\n");
//		printf("=================================\n");
//		printf("\t1. 학생이름 입력\n");
//		printf("\t2. 성적 3과목 입력\n");
//		printf("\t3. 학생이름 출력\n");
//		printf("\t4. 합계 출력\n");
//		printf("\t5. 평균 출력\n");
//		printf("\t6. 종료\n");
//		printf("=================================\n");
//
//		scanf("%d", &num);
//
//		switch (num) {
//		case 1:
//			printf("학생 이름 입력\n>>> ");
//			scanf("%s", name);		// 문자열에서는 &를 생략해도 됨.
//			break;
//		case 2:
//			printf("3과목의 성적을 차례대로 입력\n>>> ");
//			scanf("%d%d%d", &kor, &eng, &math);
//			break;
//		case 3:
//			printf("학생 이름 : %s\n", name);
//			getch(); break;
//		case 4:
//			sum = kor + eng + math;
//			printf("합계 : %d\n", sum);
//			getch(); break;
//		case 5:
//			avg = (double)sum / 3;
//			printf("평균 : %.2f\n", avg);
//			getch(); break;
//		case 6:
//			exit(1);
//		}
//		system("cls");
//	}
//}



// goto 문 - 수업에서 다루지 않음
//#include <stdio.h>
//int main(void)
//{
//	int num;
//	printf("자연수 입력 : ");
//	scanf("%d", &num);
//	
//	if (num == 1)
//		goto ONE;
//	else if (num == 2)
//		goto TWO;
//	else
//		goto OTHER;
//
//ONE:
//	printf("1을 입력하셨습니다.\n");
//	goto END;
//TWO:
//	printf("2를 입력하셨습니다.\n");
//	goto END;
//OTHER:
//	printf("3 혹은 다른 값을 입력하셨군요.\n");
//END:
//
//	return 0;
//}



/* 반복 제어문 (= 반복 순환문)
연속된 구간의 코드를 한번에 반복순환 시키는 문법
종류 : for, while, do while
장점 : 코드를 간소화 할 수 있다.

반복문에서의 핵심 : 규칙을 찾아라!!!!! (무엇을 어떻게 얼마나 반복시킬지)

1. 똑같은 위치에 똑같은 것을 반복 -> 동일한 반복
2. 일정한 간격으로 상승/하락 -> 단계적 반복
3. 규칙성을 못 찾는 반복

초기값 : 반복이 시작되는 최초의 값 (= 시작값)
조건식 : 반복의 끝을 내기 위한 식
증감식 : 조건식을 끝내기 위한 보조 역할

종속문장이 여러 개인 경우 중괄호로 꼭 묶어주기
중괄호를 빼먹으면 버그가 발생됨 (두번째 종속문장은 다음문장 처리 되어서 한 번만 실행됨)
for 뒤에는 세미콜론을 절대 쓰지 않음. 쓰면 조건식에 상관 없이 종속문장이 한 번만 실행됨.
*/

//#include <stdio.h>
//int main(void)
//{
//	int su, sum = 0;
//
//	for (su = 1; su <= 10; su++)		// 단계적으로 상승 / 식 마다 세미콜론이 있음. 각각 독립된 명령어임. 초기값은 시작될 때 1회만 사용됨. 조건식에 참이면 반복을 진행하고 거짓이면 중단함. 증감식은 전치 후치 상관 없음 (단항이어서) / 1) 초기값 2) 조건식 3) 종속문장 4) 증감식 5) 종속문장이 거짓이 될 때까지 반복 -> 거짓이 되면 종속문장을 실행하지 않고 다음 문장으로 넘어감. / 세미콜론을 넣으면 11이 출력됨
//		sum += su;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int su, sum = 0;
//
//	for (su = 10; su >= 1; su--)		// 단계적으로 하강 / 관계연산식을 잘 봐야 함. 단계적 상승시에는 증감식에서 +를 이용했고, 단계적 하강시에는 -를 이용했음 / for 뒤에 세미콜론을 쓰면 컴퓨터는 계속 반복을 하지만 종속 문장이 실행되지 않아서 아무것도 저장되지 않음. / 세미콜론을 넣으면 0이 출력됨 / 반복 구문은 반복의 횟수를 정함
//		sum += su;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int su, sum = 0;
//
//	for (su = 1; su <= 10; su++)		// 10회 반복
//	{
//		if (su % 2 == 1)
//			sum += su;					// 규칙성을 못 찾은 경우에 사용 ex. 소수를 구해라 등 (일정한 간격으로 증가하지 않음)
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int su, sum = 0;
//
//	for (su = 1; su <= 10; su++)		// 5회 반복
//	{
//		if (su % 2 == 1)
//		{
//			sum += su;
//			su++;		// 1이 증가된 후에 다시 조건식으로 올라가기 때문에 5회만 반복됨. 홀수만 반복을 진행할 수 있음.
//		}
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int su, sum = 0;
//
//	for (su = 1; su <= 10; su += 2)		// 증감식에서 아예 2씩 증가 시킴 -> 홀수로 증가시킴 / 짝수는 0부터 2씩, 3의 배수는 0부터 3씩 증가시키면 됨
//		sum += su;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int su = 1, sum = 0;
//
//	for (; su <= 10;)		// 변수 선언과 동시에 초기식..
//		sum += su++;		// 증감식을 종속문장과 동시에.. 넣어서 초기식과 증감식을 생략할 수 있음. (위치가 달라짐..)
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int su = 1, sum = 0;
//
//	for (;;)		// 끝을 내기 위한 조건식이 없기 때문에 무한반복됨. 종속 문장을 {}를 이용해서 묶으면 무한반복이 되고 있다는 과정을 볼 수 있음. 파이썬에서는 for를 이용해서 무한반복을 진행할 수 없음.
//	{
//		sum += su++;
//		printf("sum = %d\n", sum);
//	}
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int su1, su2, odd_sum = 0, even_sum = 0;
//
//	for (su1 = 1, su2 = 2; (su1 <= 100 && su2 <= 100); su1 += 2, su2 += 2)		// 콤마 연산자를 이용해서 여러 식을 넣을 수 있음.
//	{
//		odd_sum += su1;
//		even_sum += su2;
//	}
//
//	printf("홀수의 합 = %d\n", odd_sum);
//	printf("짝수의 합 = %d\n", even_sum);
//}



// quiz 1.
//#include <stdio.h>
//int main(void)
//{
//	int su;
//
//	for (su = 1; su <= 30; su++)
//	{
//		if (su % 5 == 0)
//			printf("%d\n", su);
//
//		else					// 최대한 간소화 하기
//			printf("%d\t", su);
//	}
//}


// quiz 1. answer
//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 1; su <= 30; su++)
//	{
//		printf("%d\t", su);
//		if (su % 5 == 0)
//			printf("\n");
//	}
//}



// quiz 2.
//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 1; su <= 4; su++)
//	{
//		printf("%d. Hello\n", su);
//	}
//	return 0;
//}



// quiz 2. answer
//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 1; su <= 4; su++)
//		printf("%d. Hello\n", su);
//}



// quiz 3.
//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 65; su < 90; su++)
//	{
//		printf("%c, ", su);
//	}
//	su = 90;
//	printf("%c\n", su);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 65; su <= 90; su++)
//	{
//		printf("%c, ", su);
//	}
//	printf("\b\b\n");
//
//	return 0;
//}



// quiz 3. answer

//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	for (ch = 'A'; ch <= 'Y'; ch++)		// Z뒤에 콤마가 안 붙으려면 Z를 따로 출력해줌.
//		printf("%c, ", ch);
//	printf("Z\n");
//}

//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	printf("A");
//	for (ch = 'B'; ch <= 'Z'; ch++)		
//		printf(", %c", ch);
//	printf("\n");
//}

//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	for (ch = 'A'; ch <= 'Z'; ch++)		
//		printf("%c, ", ch);
//	printf("\b\b \n");		// \b뒤에 공백을 넣어서 덮어씌우고 \n을 넣어줘야함.
//}



/* 중첩 for문
for문 안에 종속문이 for문으로 존재함.
상위 for문이 한 칸 진행하려면 하위 for문이 완전히 진행되어야 함.
*/



//#include <stdio.h>
//int main(void)
//{
//	int su1, su2, sum = 0;
//
//	for (su1 = 1; su1 <= 10; su1++)			// 1~10까지 10회. 상위 for문이 1회 진행되는 동안 하위 for문이 10회 진행되므로 10*10=100회 실행됨.
//	{
//		for (su2 = 1; su2 <= 10; su2++)		// 1~10까지 10회
//			sum += 1;
//	}
//	printf("sum = %d\n", sum);
//}



//#include <stdio.h>
//int main(void)
//{
//	int su1, su2;
//
//	for (su1 = 1; su1 <= 3; su1++)		// 상위 for문이 거짓이 될 때까지 반복
//	{
//		for (su2 = 1; su2 <= 3; su2++)
//			printf("su1 = %d\t su2 = %d\n", su1, su2);
//	}
//}



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


// 2. 마지막날 입금되는 금액, 총 얼마인지 둘 다 구함 (난이도 상)




// 3. 1~1000의 합을 구하고 나서 3의 배수이면서 5의 배수가 아닌 수를 모두 더해서 전체에서 빼주기 (난이도 중하)

#include <stdio.h>
int main(void)
{
	int su, sum, sum1, sum2;
	
	for (su = 1; su <= 1000; su++)
	{
		sum1 += su;

		
	}
	if ((su % 3 == 0) & (su % 5 != 0))
		sum2 += su;

	sum = sum1 - sum2;

	printf("결과 : %d", sum);

	return 0;
}


// 4. (난이도 중상)