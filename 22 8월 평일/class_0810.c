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
//	scanf("%f", &su);
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
//	scanf("%lf", &dou);
//	printf("입력한 값은 %lf 입니다.", dou);
//
//	return 0;
//}



// 1. answer - float 사용
//#include <stdio.h>
//
//int main(void)
//{
//	float num;
//	printf("임의의 실수 입력 : ");
//	scanf("%f", &num);
//	printf("결과 출력 : %f\n", num);
//
//	return 0;
//}

// double 사용
//#include <stdio.h>
//
//int main(void)
//{
//	double num;
//	printf("임의의 실수 입력 : ");
//	scanf("%lf", &num);					// double을 사용할 때는 long float -> %lf 의 서식제어문 사용
//	printf("결과 출력 : %f\n", num);
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



// 2. answer 
//#include <stdio.h>
//
//int main(void)
//{
//	char a, b, c, name[10];
//	printf("이니셜 1 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("이니셜 2 입력 : ");
//	scanf("%s", name);
//	printf("이니셜 1 출력 : %c%c%c\n", a, b, c);
//	printf("이니셜 2 출력 : %s\n", name);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	char a, b, c, name[10];
//	printf("이니셜 2 입력 : ");		// 이니셜 1, 2 위치 바꿈 -> 결과가 이상하게 나옴
//	scanf("%s", name);				// 문자열은 엔터값이 다음 입력함수에 영향을 줌. -> 이니셜 1 에서 첫번째 %c에는 엔터값이 적용되고, %c가 두개만 남아서 한 글자가 출력이 안 됨.
//	printf("이니셜 1 입력 : ");
//	scanf(" %c%c%c", &a, &b, &c);	// 서식제어문의 맨앞에 공백을 넣어주면 엔터가 공백에 적용되고, 뒤의 서식제어문이 살아남아서 제대로 출력됨. // 단일문자는 입력할 때 공백 없이 3개의 값을 넣어주어야 함.
//	printf("이니셜 2 출력 : %s\n", name);
//	printf("이니셜 1 출력 : %c%c%c\n", a, b, c);
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



// 3. answer
//#include <stdio.h>
//
//int main(void)
//{
//	int kor, eng, mat, sum;
//	double avg;					// 입력함수에서는 무조건 lf 사용, 출력함수에서는 f, lf의 결과가 같음.
//	printf("3과목의 성적을 차례대로 입력 : \n>>> ");
//	scanf("%d%d%d", &kor, &eng, &mat);
//	sum = kor + eng + mat;		// 연산식을 위에 두면 안 됨. 변수에 데이터값이 안 들어가있기 때문에 연산이 안 됨. 입력을 받은 후에 연산식을 넣어주어야 함.
//	avg = (double)sum / 3;		// (double) 사용하면 완전 연산됨. 아니면 정수값만 나옴.
//	printf("총점 : %d\n평균 : %.2f\n", sum, avg);
//
//	return 0;
//
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



// 4. answer
//#include <stdio.h>
//
//int main(void)
//{
//	int age; char name[20];
//	printf("당신의 이름은 무엇입니까? \n>>> ");
//	scanf("%s", name);
//	printf("%s님의 나이는 몇 살입니까? \n>>> ", name);
//	scanf("%d", &age);
//	printf("%s님의 나이는 %d살입니다.\n", name, age);
//
//	return 0;
//}




// <<<<< 3. 연산자 >>>>>

/*
- 왼쪽에 있는 값에 오른쪽에 있는 값을 더하고, 빼고, 곱함
- c언어에서는 /을 사용하면 몫값만 반환됨
- %는 나머지 값을 반환해줌
- 나눗셈을 하면 몫과 나머지를 다 구하는데 /, %에 따라서 반환값이 다름
- 제곱 ** 사용 불가

*/



//#include <stdio.h>
//
//int main(void)
//{
//	int su1 = 20, su2 = 3;
//	printf("%d + %d = %d\n", su1, su2, su1 + su2);
//	printf("%d - %d = %d\n", su1, su2, su1 - su2);
//	printf("%d * %d = %d\n", su1, su2, su1 * su2);
//	printf("%d / %d = %d\n", su1, su2, su1 / su2);
//	printf("%d %% %d = %d\n", su1, su2, su1 % su2);		// 이스케이프 문자는 다른 문자와 만나면 약속된 것을 수행함. -> 두번 써줘야 함.
//
//	return 0;
//}



/* 관계연산자
- 좌우값을 비교해서 참, 거짓을 0과 1로 반환함. 1 - 참, 0 - 거짓
- 0을 제외한 모든 데이터는 참을 가지고, 0만 거짓임.
- 왼쪽 값은 기준, 오른쪽 값은 비교대상
- !는 부정의 의미, != : 같지 않다.
- 미만, 초과와 이상, 이하를 잘 구분해서 써야 함
*/



//#include <stdio.h>
//
//int main(void)
//{
//	float su1 = 3.01, su2 = 3.0;
//	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 <= su2);
//	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 >= su2);
//	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 == su2);
//	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 != su2);
//
//	return 0;
//}



/* = 대입 연산자의 규칙
- 유일하게 우측에서 좌측으로 진행
- 우측항의 결과를 좌측항에 대입한다.
- 그래서 좌측항은 무조건 변수만 올 수 있다.
- 변수 = 상수
- 변수 = 변수 (값이 존재하는 변수)
- 변수 = 연산식 (연산된 결과값을 대입함)
- 변수 = 함수 (함수를 통해서 가공된 값을 대입함)

복합대입연산자
- 산술 + 대입 연산자 (대입 연산자가 뒤에 옴)
- 좌측에는 변수만 올 수 있음 (대입해야 하니까)
- 우측에는 상수, 변수, 함수, 연산식 모두 올 수 있음
- 좌측 우측의 피연산자를 산술해서 좌측의 변수에 대입함
*/


// 결과 예측
// su1+1=6
// su1-1=4 -> su1의 값이 6이므로 su1-1 = 5
// su1*su2=25 -> su1 = 5, su2 = 5 -> su1*su2=25
// su1/su2=1 -> su1=25, su2=5 ->su1/su2=5
// su1%su2=0 -> su1=5, su2=5 -> su1%su2=0

//#include <stdio.h>
//
//int main(void)
//{
//	int su1, su2;
//	su1 = su2 = 5;		// 5를 su2에, su2의 5를 su1에 대입함. (우측에서 좌측으로)
//	printf("su1 + 1 = %d\n", su1 += 1);			// {}가 끝나기 전까지는 변하는 su1, su2의 값을 그대로 유지해야 함. 초기화 시켜서 5로 계산하면 안됨
//	printf("su1 - 1 = %d\n", su1 -= 1);
//	printf("su1 * su2 = %d\n", su1 *= su2);
//	printf("su1 / su2 = %d\n", su1 /= su2);
//	printf("su1 %% su2 = %d\n", su1 %= su2);
//
//	return 0;
//}



/* 논리연산자
- || 둘중 하나만 참이어도 참, 둘다 거짓이면 거짓 (논리합)
- && 둘다 참일때만 참, 그외에는 모두 거짓 (논리곱)
- ! 연산식이 참이면 거짓으로, 거짓이면 참으로 만들어줌.
*/



//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	printf("점수를 입력하세요...");
//	scanf("%d", &num);
//	if (!((num > 0) && (num <= 100)))			// 세미콜론으로 마무리 하면 다음 문장이 참, 거짓 상관 없이 무조건 실행(출력)됨.
//		printf("입력 범위를 벗어났습니다.\n");
//
//	return 0;
//}



/* 증감연산자 - 반복문에서 유용하게 쓰임
- 전치 : 선 증감 후 연산
- 후치 : 선 연산 후 증감
*/



//#include <stdio.h>
//
//int main(void)
//{
//	int su1;
//	float su2;
//	su1 = 5; ++su1; printf("++su1 = %d\n", su1);
//	su1 = 5; su1++; printf("su1++ = %d\n", su1);		// 연산할 게 없다면, 전치와 후치의 결과가 같음. -> 단항일 경우, 전치나 후치나 결과가 바뀌지는 않음.
//	su2 = 12.3; ++su2; printf("++su2 = %f\n", su2);
//	su2 = 12.3; su2++; printf("su2++ = %f\n", su2);		// 실수여도 정수 1만큼 증가하거나 정수 1만큼 감소한다. 
//	
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int su1, su2, su3;
//	su1 = 10;
//	su2 = ++su1;		// su1 = 11, su2에 11 대입
//	su1 = 10;
//	su3 = su1++;		// su1 = 10을 su3에 10 대입, su1은 1 증가 / 대입도 연산임. 단항으로 착각하면 안됨. 대입을 먼저 하고 1 증가함
//	printf("su2 = %d\n", su2);
//	printf("su3 = %d\n", su3);
//	printf("su1 = %d\n", su1);		// su3에 대입 후 1 증가해서 11이 출력됨.
//
//	return 0;
//}


// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <stdio.h>

int main(void)
{
	int a = 5, b = 6, c = 10, d;
	d = ++a * b--;
	printf("a = %d, b = %d, d = %d\n", a, b, d);
	d = a++ + ++c - b--;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	a = 1;
	b = 0;

	d = a++ || ++b * d-- / ++c;		// b=0, c=11? -> 전치증감연산자의 값만 그대로임. 후치는 값이 바뀜.
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	d = b++ && ++a / ++c * d++;		// -> 전치증감연산자.. a, c의 값만 그대로. 나머지는 바뀜.
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	return 0;
}


#include <stdio.h>

int main(void)
{
	int a = 1, b = 0, c = 11, d;
	d = a++ && ++b;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	a = 1, b = 0, c = 11, d;
	d = a++ || ++b;		// b가 1이 아니고 0이 됨.
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	a = 1, b = 0, c = 11, d;
	d = a++ && ++b * d--;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	a = 1, b = 0, c = 11, d;
	d = a++ && ++b * d-- / ++c;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	return 0;
}