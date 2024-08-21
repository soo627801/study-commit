
/* 
	변수명 작명 규칙

- 변수명으로는 영문자, 숫자 그리고 밑줄만을 사용한다. (특수문자 사용 불가, 한글 사용 가능)
- 변수명의 첫 문자는 반드시 영문자나 밑줄(_)이어야 한다.
- C언어의 예약어(reserved word)는 변수명으로 사용할 수 없다. / C언어의 변수명은 예약어를 사용하면 안 된다. -> 문법상으로 문제는 없으나, 사용할 수 없다.
		#include<stdio.h>
		int main(void)
		{
			int printf;
			printf = 100;
			printf("%d\n", printf);
		}
- 영어 대문자와 소문자는 서로 다른 문자로 간주된다. (Name, name은 다른 변수로 구분된다.)
- 변수명 내에 공백을 둘 수 없다. (공백이 있으면 1개인지 2개인지 헷갈림) / 변수를 구분할 때는 ,(콤마)를 이용함 / 공백을 두고 싶으면 _(언더바)를 사용함
- 변수명의 길이는 보통 256자리까지 가능하다.

	변수명 작명 요령

1) 변수명은 그 프로그램 내에서 어떤 데이터를 저장하는지 또는 어떤 역할을 하는지 누가봐도 쉽게 연상할 수 있도록 지어주는 것이 바람직하다.
2) 한글 변수는 사용가능하다. 하지만, 프로그램 작성시 가급적 한글 변수 사용을 삼가하는 것이 바람직하다.

*/


//#include <stdio.h>	// 도입부에서 main 함수에 사용할 모든 변수를 선언해주어야 함 / managed 함수에서는 할당하고 바로 대입, c언어에서는 할당하고 나면 바뀌지 않음. / 정석 문법임
//
//int main(void)
//{
//	int num1;
//	int num2;
//	num1 = 10;
//	num2 = 20;
//}



//#include <stdio.h>	// 정석 문법이 아님 (c++에서 사용함) -> 요즘 버전에서는 오류 안 나고 사용 가능함
//
//int main(void)
//{
//	int num1;
//	num1 = 10;
//	int num2;
//	num2 = 20;
//}



// 자료형 마다 할당 받는 메모리의 크기가 정해져 있음 (기억해둘 것 : int 4, float 4, double 8, char 1 byte)



//#include <stdio.h>
//
//int main(void)
//{
//	int age = 21;		// 정수 변수, 변수의 선언과 동시에 초기값 대입해줌
//	double weight = 50.0, height = 163.5;		// 같은 자료형은 ,(콤마)를 사용해서 연속적으로 변수 선언 가능 / ;(세미콜론)으로 마무리를 지으면 다시 선언을 해주어야 함.
//
//	printf("나의 나이는 %d세 입니다.\n", age);
//	printf("나의 몸무게는 %f(kg) 입니다.\n", weight);
//	printf("나의 신장은 %f(cm) 입니다.\n", height);
//
//	return 0;
//}




// 중요한 예제 !!!!!!!!!!!!!!!!! (변수와 데이터가 저장되는 원리)

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 123;
//	char ch = 'D';
//
//	num = num + 1;		// = 우변의 연산식의 결과를 좌변의 num 변수에 할당
//		// 메모리 공간에 num을 할당 받고, 123을 저장함. +도, 1도 다른 메모리 공간에 할당됨. 1은 변수가 없음. 연산 결과 124라는 결과 값을 123이 있던 num에 넣음. / 123에 1을 더해서 124가 되는 건 수학적임. 123과 1을 연산하여 124를 123이 저장되어 있던 공간에 다시 넣는 것.. -> 값이 갱신됨.(이전에 있던 초기화 값은 사라짐) / 파이썬에서는 124를 다른 메모리 공간에 넣어주고, 그 메모리 공간의 값을 출력함. 갱신되지 않음.
//	ch = 'G';			// D가 G로 갱신됨.
//	printf("num = %d\n", num);		// 출력은 갱신된 값인 124, G가 출력됨.
//	printf("ch = %c\n", ch);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main(void)
//{
//	// float height_inch = 70.0;					// 출력 시 오차 발생 -> float 대신 double을 사용함. / 실수를 사용할 땐 double을 이용하는 것이 바람직함.
//	double height_inch = 70.0;
//	// double height_inch;							// 로 바꾸면 비어있는 변수로 연산할 수 없음. -> 반드시 값을 넣어주어야 함. / 공간만 할당되면 무엇을 연산해야하는지 컴퓨터는 모름.
//	// float height_cm = height_inch * 2.54;		// 초기화에 연산식을 사용함
//	double height_cm = height_inch * 2.54;
//
//	printf("나의 신장은 %f(cm) 입니다.\n", height_cm);
//
//	return 0;
//}




// 자료형 변환

//#include <stdio.h>
//
//int main(void)
//{
//	char ch = 'A';
//	int num = 5, ret;
//
//	ret = ch + num;		// 형변환 발생
//		// 연산식에서 서로 다른 자료형을 연산하려고 할 때, 메모리의 공간을 작게 차지하는 자료형이 메모리의 공간을 크게 차지하는 자료형으로 변환됨. / 문자는 1바이트, 정수 자료형은 4바이트이므로, 문자 자료형이 정수 자료형으로 바뀜. / 문자 자료형은 4바이트를 할당 받지만, 1바이트만 사용함.
//	printf("ret = %d\n", ret);
//
//	return 0;
//}



// 실수형이라도 정수형으로 변환 가능
// 지속적으로 변환해서 가공할 때 사용
//#include <stdio.h>
//
//int main(void)
//{
//	int num1;		// num1을 할당함
//	float num2 = 367.78;		// num2 할당 후, 367.78 저장
//
//	num1 = num2;	// 실수형 변수를 정수형 변수에 대입 // num2의 367.78을 num1에 복사해주는데, 소수 부분은 버리고(반올림 x), 367의 정수 부분만 들어감. / 원래의 실수는 그대로 두고 정수형으로 가공하고 싶을 때 사용함
//	printf("num1 = %d\n", num1);
//
//	return 0;
//}



// 정수 / 정수 = 정수
// 간헐적으로, 일회성으로 변환해서 결과를 얻고자 할 때 사용 -> cast 연산자를 이용한 형변환
//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 25, num2 = 3;
//
//	printf("num1 / num2 = %d\n", num1 / num2);		// c언어는 나눗셈 연산자를 사용하면 몫의 값만 반환해줌 / 파이썬에서는 완전 연산해줌.
//	printf("num1 / num2 = %f\n", (float)num1 / (float)num2);	// 완전 연산을 하고 싶을 때.. 두 변수 중 하나에만 float처리를 하면 됨. / cast 연산자 -> 내가 바꾸고 싶은 자료형으로.. / 일회성임 -> 일회성이 아니라면 밑에 있는 연산에서도 결과가 75.000000으로 나와야 하지만, 정수 75로 나옴.
//	printf("num1 * num2 = %d\n", num1 * num2);		// cast 연산자는 일회성이어서, 정수의 값으로 출력됨.
//
//	return 0;
//}



// 입력함수
// 파이썬에서는 input, c언어에서는 scanf
// scanf("형식지정제어문", 엠퍼센트 변수); -> 엠퍼센트 변수에는 메모리 공간의 주소값을 저장함. / 4바이트에 저장이 되는데, 시작 주소값을 반환함. (*포인터)
// 배열변수를 이용해서 문자열을 입력받아야 함. / 단일문자로 변수를 10개를 선언하면, 랜덤하게 10개의 공간에 1바이트씩 할당됨. / 배열은 메모리공간에 연속적으로 10개의 공간이 할당됨. / 배열 사용 -> [연속해서 할당받을 개수] -> 엠퍼센트 생략 가능 / 배열 변수 = 포인터 변수 -> 엠퍼센트를 따로 사용하지 않아도 됨.



//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, sum;
//
//	printf("정수 2개를 입력하세요...");
//	scanf("%d%d", &num1, &num2);		// scanf -> 오버플로우로 오류 발생 / 엔터 치기 전에는 메모리에 저장 안 됨.
//	sum = num1 + num2;
//	printf("두 수의 합은 %d 입니다.", sum);
//
//	return 0;
//}



// sol 1)

//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, sum;
//
//	printf("정수 2개를 입력하세요...");
//	scanf_s("%d%d", &num1, &num2, sizeof(int));		// 4바이트로 전달함. 데이터의 개수에 상관없이 -> 호환성 문제로 실제로 사용되지 않음.
//	sum = num1 + num2;
//	printf("두 수의 합은 %d 입니다.", sum);
//
//	return 0;
//}



// sol 2)

//#define _CRT_SECURE_NO_WARNINGS		// 무조건 최상단에 위치해야함. 헤더파일 밑으로 선언하면 적용안됨.
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, sum;
//
//	printf("정수 2개를 입력하세요...");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("두 수의 합은 %d 입니다.", sum);
//
//	return 0;
//}



// sol 3)

//#pragma warning(disable:4996)		// = 4996 에러를 사용하지 않겠다. / 헤어파일 밑으로 들어가도 상관 없음. 위치 상관없음.
//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, sum;
//
//	printf("정수 2개를 입력하세요...");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("두 수의 합은 %d 입니다.", sum);
//
//	return 0;
//}



// sol 4) -> 속성 지정으로 프로젝트 파일 전체에 scanf의 오류가 안 나게 적용해줌.

//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2, sum;
//
//	printf("정수 2개를 입력하세요...");	// 출력 함수로 입력 받을 데이터를 알려주어야 함. 사용자의 입장을 고려하여 입력받을 데이터를 설명해야 함.
//	scanf("%d%d", &num1, &num2);		// scanf에는 서식제어문만 들어가야함. 공백 들어가면 안됨. / 데이터를 넣을 때에는 공백이나 엔터로 구분해주어야 함.
//	sum = num1 + num2;
//	printf("두 수의 합은 %d 입니다.", sum);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main(void)
//{
//	// char name1[30], name2[30];		// 문자형의 공간을 30개 확보함.
//	// char name1[6], name2[6];
//	char name1[7], name2[7];			// null 문자가 있기 때문에 1바이트가 더 필요함. -> [7] 사용 / 넉넉하게 [30]을 사용하면 됨.
//	printf("이름을 입력하세요!");
//	scanf("%s", name1);					// 문자열의 끝에 null 문자(1바이트 차지)가 들어감 -> 구분선 역할을 함.
//	printf("별명을 입력하세요!");
//	scanf("%s", name2);
//	printf("나의 이름은 %s 입니다.\n", name1);
//	printf("나의 별명은 %s 입니다.\n", name2);
//
//	return 0;
//}



// 문제
// float double 둘 다
// 단일문자로, 문자열로 둘 다
// 임의의 3과목, 점수는 입력 함수로 받음
// 입력값의 ~~~



//1. 실수를 입력 받아 출력하시오 (float, double 둘 다)
//#include <stdio.h>
//
//int main(void)
//{
//	float su;
//
//	printf("실수를 입력하세요...");
//	scanf_s("%f", &su);
//	printf("입력한 값은 %f 입니다.", su);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	double dou;
//
//	printf("실수를 입력하세요...");
//	scanf_s("%lf", &dou);
//	printf("입력한 값은 %lf 입니다.", dou);
//
//	return 0;
//}


// 2. 자신의 이니셜을 입력 받아 출력하시오 (단일문자로, 문자열로 둘 다)
//#include <stdio.h>
//
//int main(void)
//{
//	char ini[30];
//
//	printf("이니셜을 입력하세요...");
//	scanf("%s", &ini);
//	printf("이니셜은 %s 입니다.", ini);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	char ini[30];
//
//	printf("이니셜을 입력하세요...");
//	scanf("%c%c%c", &ini[0], &ini[1], &ini[2]);
//	printf("이니셜은 %c%c%c 입니다.", ini[0], ini[1], ini[2]);
//
//	return 0;
//}



// 3. 3과목의 성적을 입력 받아 합계와 평균을 구하시오 (임의의 3과목, 점수는 입력 함수로 받음)
//#include <stdio.h>
//
//int main(void)
//{
//	int kor, eng, math, sum, avg;
//
//	printf("국어 점수를 입력하세요.");
//	scanf("%d", &kor);
//	printf("영어 점수를 입력하세요.");
//	scanf("%d", &eng);
//	printf("수학 점수를 입력하세요.");
//	scanf("%d", &math);
//
//	sum = kor + eng + math;
//	avg = sum / 3;
//
//	printf("3과목의 합계는 %d 입니다.\n", sum);
//	printf("3과목의 평균은 %d 입니다.", avg);
//
//	return 0;
//}



// 4.
//#include <stdio.h>
//
//int main(void)
//{
//	char name[30];
//	int age;
//
//	printf("당신의 이름은 무엇입니까? ");
//	scanf("%s", &name);
//
//
//	printf("%s님의 나이는 몇 살입니까? ", name);
//	scanf("%d", &age);
//
//
//	printf("%s님의 나이는 %d살입니다.", name, age);
//
//	return 0;
//}