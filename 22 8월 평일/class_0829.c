//#include <mydefine.h>		// 헤더파일을 바탕화면에 두면 ", <> 둘 다 파일이 열리지 않음. / 소스코드가 저장되어 있는 곳에 두면 "을 이용해서 파일이 열림. 
//int main()
//{
//	int ret;
//	ret = PI * 2 * 5;
//	printf("%d\n", ret);
//	printf("%d\n", (int)PI);	// (int)PI를 강제적으로 정수 표현
//}



/* #include : 디스크 상에 수록된 특정 파일의 내용을 원시 프로그램에 포함시키는 기능
#include <파일 이름> : c에서 지원
- C:\Program Files (x86)\Windows Kits\10\Include\10.0.19041.0\ucrt
- 표준라이브러리(표준함수가 저장되어 있는 경로)가 저장된 경로만 확인

#include "파일 이름" : 사용자 정의
- 프로젝트 폴더(소스코드가 저장되는 경로)를 우선 확인 후 헤더파일이 존재하지 않은 경우 표준라이브러리가 저장된 경로를 확인함.
	-> 두 경로 모두 존재하지 않을 경우 에러

*/

// 예제 쳐볼 때 int main() 괄호 안에 있는 걸 안 쳐야지 에러가 안 남 !!!!!!!!!!!!!!!!!!!!!!!



// 지역변수

// main 함수의 영역 안에서 선언된 지역 변수, if 함수의 영역 안에서 선언된 지역 변수
// a라는 같은 이름으로 변수가 선언되었지만 실제로는 다른 변수임.
// if 블럭이 끝나고 나면 if 안에 있던 지역변수는 자연스럽게 소멸됨. 하지만 main 함수의 지역변수는 그대로 남아 있어서 100이 출력됨.
// if 안에서 새로 선언해주지 않고 그냥 a = 10;이라고 한다면 변수 자체가 10으로 바뀌어서 10, 10이 출력됨.
// 그림 그려보면서 이해하는 게 가장 좋음.
//#include <stdio.h>
//int main(void)
//{
//	int a = 100;		// int main(void)에 속한 a
//	if (a == 100)
//	{
//		int a = 10;		// if()에 속한 a
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//}


//#include <stdio.h>
//int a = 100;		// main문 외부에 선언된 전역변수
//int main(void)
//{
//	// int a = 10;		// 지역변수가 새로 선언되면서, main 함수 안에서는 지역변수가 우선시 됨. -> a = 10이 됨. (변수의 이름이 같을 때에만 적용됨!!!) // a = 10으로 재선언 해주면, if가 실행되지 않음.
//	if (a == 100)
//	{
//		printf("if %d\n", a);
//	}
//	printf("main %d\n", a);
//}


//#include <stdio.h>
//int main(void)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		int a = 100;		// 계속해서 새롭게 100으로 정의 되기 때문에 101만 출력됨.
//		a++;
//		printf("%d\n", a);
//	}
//}


//#include <stdio.h>
//int main(void)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		static int a = 100;		// 정적변수(값을 초기화 시키지 않고 계속 보존해줌.) 선언 / static은 for 영역이 끝나고 나서 소멸됨.
//		a++;
//		printf("%d\n", a);
//	}
//	/*printf("영역 밖 %d\n", a);*/
//}


/* 함수
함수란?
함수 = function = 기능

- 함수는 어떠한 기능을 가진 독립적인 소규모의 작은 프로그램을 의미
- 함수는 함수의 정의와 함수의 호출에 의해 수행됨
- 함수는 크게 표준함수와 사용자 정의 함수로 나뉜다.
- 표준함수란? c언어를 배포(설치) 시 저장장치에 저장되있어 주로 include라는 키워드로 문서에 포함시켜 함수를 호출하여 사용함.
- 사용자 정의함수란? 작성자가 필요에 의하여 새롭게 정의된 함수를 의미함
- 함수를 사용하는 목적
	-> 코드의 간소화
	-> 프로그램의 흐름을 한눈에 알아볼 수 있다.(가독성 향상)
	-> 코드의 부품화 (재생산성 향상)
	-> 수정, 편집이 용이함
*/



//#include <stdio.h>
//void func(void)		// 컴퓨터가 가공하는 게 전혀 없음. 컴퓨터는 읽어서 메모리만 저장함.
//{
//	printf("function ");
//	printf("program");
//	printf("ming\n");
//}
//int main(void)		// 프로그램의 시작은 언제나 main 함수로부터 시작됨.
//{
//	printf("main start \n");
//	func();			// 함수 호출에 의해서 사용됨.
//	/*printf("중간\n");
//	printf("중간\n");
//	func();
//	printf("중간\n");
//	printf("중간\n");
//	printf("중간\n");
//	func();
//	printf("중간\n");*/		// 중간중간 같은 코디가 간헐적으로 반복될 때 유용함.
//}



//#include <stdio.h>
//int func(int num1, int num2)
//{
//	num1 *= num2;
//	return num1;
//}
//int main(void)
//{
//	int sum = 0;
//	sum = func(10, 2);
//	printf("sum : %d\n", sum);
//	return 0;
//}

/* 
함수의 호출
- 함수명 ()
- 함수명 (인수1, 인수2...)
- 변수 = 함수()
- 변수 = 함수(인수1, 인수2...)

함수의 정의
- 예) int func(int num1, int num2)
	   1)  2)   3)
1) 함수를 호출한 곳으로 반환(되돌려주는) 값에 대한 자료형 지정
	만일 되돌려주는 것이 없으면 void를 채워준다.
2) 함수명
3) 매개변수 (인수를 받아서 함수에서 가공할 수 있도록 해주는 중간 변수)
	- 단, 인수에서 변수로 전달했을 때 매개변수명과 일치할 필요는 없다.
	매개변수를 사용할 필요가 없다면 void를 채워야 하는 게 정석이나 비워둬도 크게 문제가 되지 않는다.
	인수와 매개변수의 자료형은 같아야 함.
*/



//#include <stdio.h>
//int main(void)
//{
//	int i, n, sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//		sum += i;
//	printf("%d", sum);
//}


// 함수 만들기 연습 - 1
//#include <stdio.h>
//SumFunc()		// 함수가 끝나고 나면 정의되어있던 i, n, sum 모두 소멸됨.
//{
//	int i, n, sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//		sum += i;
//	printf("%d", sum);
//}
//int main(void)
//{
//	SumFunc();		// 함수명
//}


// 함수 만들기 연습 - 2
//#include <stdio.h>
//SumFunc(int n)		// 함수 안에 변수 n 선언 
//{
//	int i, sum = 0;
//	for (i = 0; i <= n; i++)
//		sum += i;
//	printf("%d", sum);
//}
//int main(void)		// main함수에서 입력 받아서 함수에서 가공하고 출력함.
//{
//	int n;
//	scanf("%d", &n);
//	SumFunc(n);
//}




//#include <stdio.h>
//int SumFunc(int n)		// int 자료형 지정
//{
//	int i, sum = 0;
//	for (i = 0; i <= n; i++)
//		sum += i;
//	return sum;			// sum이라는 결과를 함수를 호출한 곳으로 되돌려줌.
//}
//int main(void)
//{
//	int n, ret;
//	scanf("%d", &n);
//	ret = SumFunc(n);		// sum 값을 받아서 ret에 저장하고
//	printf("%d\n", ret);	// 저장된 ret의 값을 출력함.
//}



//#include <stdio.h>
//float avrg(int x, int y);				// 함수의 선언만 할 경우 세미콜론을 찍고, 함수는 main 함수 밑으로 빼줌. // 자료형과 개수는 일치해야 하지만, 변수명은 달라도 됨.
//void show_avrg(int, int, float);		// 변수명은 안 써도 되지만, 자료형은 지정해줘야 함.
//
//int main(void)
//{
//	int i, j; float f;
//	i = 2; j = 3;
//	f = avrg(i, j);						// 2, 3을 함수로 호출함.
//	show_avrg(i, j, f);					// 2.5가 f로 저장됨.
//}
//float avrg(int j, int k)
//{
//	int total; float f;
//	total = j + k;
//	f = total / 2.0f;
//	return f;
//}
//void show_avrg(int a, int b, float c)	// 2, 3, 2.5
//{
//	printf("\n%d와 %d의 평균", a, b);
//	printf("값은 %3.1f입니다. \n", c);
//}



//#include <stdio.h>
//char big(int x, int y)
//{
//	if (x > y)
//		return 'Y';		// return을 이용해서 함수를 종료하면서 0, 1 대신 (main 함수에서 활용할 수 있는) 지정된 문자 상수를 되돌려줌. -> size에 저장함.
//	else if (x < y)
//		return 'N';
//	else
//		return '=';
//}
//void main(void)
//{
//	int a = 100, b = 200;
//	char size = big(a, b);
//
//	if (size == 'Y')
//		printf("\n %d는(은) %d보다 크다. ", a, b);
//	else if (size == 'N')
//		printf("\n %d는(은) %d보다 작다. ", a, b);
//	else if (size == '=')
//		printf("\n %d는(은) %d과(와) 같다. ", a, b);
//}



//#include <stdio.h>		// cbv (Call By Value) - 값에 의한 호출
//void func(int a, int b);
//int main(void)
//{
//	int a = 5, b = 10;
//	func(a, b);
//	printf("a = %d, b = %d\n", a, b);
//}
//void func(int a, int b)
//{
//	a += 5;
//	b *= 10;
//	printf("a = %d, b = %d\n", a, b);
//}



//#include <stdio.h>
//void main(void)
//{
//	printf("recursive function\n");		// 재귀함수라는 영문장 출력
//	main();								// 자기 자신 재호출 -> 무한반복 (직접 재귀 - 자기 자신을 직접 호출)
//}



//#include <stdio.h>
//void main(void)
//{
//	static int a = 0;		// 정적변수 (함수가 종료 될 때까지 값 보존)
//	if (a >= 3)
//		return;
//	else
//		a = a + 1;
//	printf("recursive function\n");
//	main();
//}



//#include <stdio.h>
//long fact(long n)
//{
//	if (n == 1L) return 1L;
//	else return (n * fact(n - 1));
//}
//void main(void)
//{
//	long x = 5L;
//	printf("\n %ld!의 값은 %ld이다. \n", x, fact(x));
//}



/* 
재귀함수
-> 자기 자신을 호출하는 함수 

장점
- 수정, 편집이 용이함
- 코드의 간소화가 가능

단점
- 입문자가 이해하기 어렵다.
- 메모리를 비효율적으로 사용한다. (정적 변수를 사용하기 때문에 -> 프로그램의 반복 횟수가 늘어날수록 사용하는 메모리가 커짐)
*/


// quiz
// 1. 두 수를 입력 받아 큰 수를 출력하는 함수를 만드시오.
#include <stdio.h>
void func(int a, int b)
{
	printf("두 수 입력 : \n>>>");
	scanf("%d%d", &a, &b); 
	if (a > b)
		return 'L';
	else if (a < b)
		return 'R';
	else
		return '=';
		
}
int main(void)
{
	char size = big(a, b);
	
	if (size == 'L')
		printf("\n %d는(은) %d보다 크다. ", a, b);
	else if (size == 'R')
		printf("\n %d는(은) %d보다 작다. ", a, b);
	else if (size == '=')
		printf("\n %d는(은) %d과(와) 같다. ", a, b);
	
}


// 2. 입력 받은 값이 짝수인지 홀수인지 판별하는 함수 제작



// 3. 3의 배수를 판별하는 함수를 만들고 이 함수를 이용하여 main에서 3의 배수만 출력하시오
// 함수에서 return 시키기 / 반환 시켜서 main에서 출력



// 4. 절댓값을 구하는 함수를 정의하시오.



// 5. 거꾸로 수를 반환하는 함수를 정의하시오.
// 거꾸로 수를 만들고 main 함수에서 출력 / 반환 시켜서 main에서 출력