// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 5, b = 6, c = 10, d;
//	d = ++a * b--;
//	printf("a = %d, b = %d, d = %d\n", a, b, d);
//	d = a++ + ++c - b--;
//	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
//	a = 1;
//	b = 0;
//
//	d = a++ || ++b * d-- / ++c;		// b=0, c=11? -> 전치증감연산자의 값만 그대로임. 후치는 값이 바뀜.
//	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
//	d = b++ && ++a / ++c * d++;		// -> 전치증감연산자.. a, c의 값만 그대로. 나머지는 바뀜.
//	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
//
//	return 0;
//}


/*
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
	d = a++ || b++;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	a = 1, b = 0, c = 11, d;
	d = b++ && ++a / ++c * d++;		// a가 2가 아니고 1이 됨.
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	a = 1, b = 0, c = 11, d;
	d = a++ && ++b * d--;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	a = 1, b = 0, c = 11, d;
	d = a++ && ++b * d-- / ++c;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	a = 1, b = 0, c = 11, d;
	d = a++ || b++ * d-- / c++;		// || 뒤에 있는 증감 연산자는
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	d = a++ || ++b * d-- / ++c;		// b=0, c=11? -> 전치증감연산자의 값만 그대로임. 후치는 값이 바뀜.
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	d = b++ && ++a / ++c * d++;		// -> 전치증감연산자.. a, c의 값만 그대로. 나머지는 바뀜.
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	return 0;
}
*/



//#include <stdio.h>
//
//int main(void)
//{
//	int a = 5, b = 6, c = 10, d;
//	d = ++a * b--;		// 전치 증감 먼저, a=6 / d = 6*6 = 36 / 후치 b = 5
//	printf("a = %d, b = %d, d = %d\n", a, b, d);		// a=6, b=5, d=36
//	d = a++ + ++c - b--;		// a=6, b=5, c=10, d=36 // 전치 먼저, c=11 / d = 6+11-5 = 12 / 후치 a=7, b=4 
//	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);		// a=7, b=4, c=11, d=12
//	a = 1;		// 값을 리셋시키는 초기화 (정의 초기화가 아니라, 재정의함)
//	b = 0;
//	// a=1, b=0, c=11, d=12
//	// 연산자가 복잡하게 있는 경우, 연산자의 우선순위를 따라야 함.
//	d = a++ || ++b * d-- / ++c;		// 전치 증감 먼저, b=1, c=12 / b*d/c=1*12/12=1 / 후치 a=2 // 논리합의 왼쪽이 참이면, 오른쪽은 무시됨. 왼쪽이 거짓이면 오른쪽도 확인함. // 오른쪽이 무시되서 값이 그대로임.
//	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
//	d = b++ && ++a / ++c * d++;		// 왼쪽이 참이어도, 우측을 확인해야 함. 왼쪽이 거짓이면 무조건 거짓이므로 확인 안 해도 됨. // 왼쪽이 거짓이면 오른쪽은 무시됨. // b가 0이어서 오른쪽값은 그대로 유지됨.
//	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
//
//	return 0;
//}



// 조건연산자
// 조건제어문은 if를 사용하는데, if를 사용하지 않으므로 연산자로 분류됨.
//#include <stdio.h>
//
//int main(void)
//{
//	int su;
//	su = 8;
//	(su % 2 == 0) ? printf("%d : 짝수\n", su) :		// ?전이 1항, :까지가 2항, : 이후부터가 3항 // 1항이 참이면 : 전까지를 실행, 거짓이면 : 이후를 실행함. 
//		printf("%d : 홀수\n", su);
//
//	su = 9;
//	(su % 2 == 0) ? printf("%d : 짝수\n", su) :
//		printf("%d : 홀수\n", su);
//
//	return 0;
//}



// quiz
//#include <stdio.h>
//
//int main(void)
//{
//	char name[10];
//	int num, a, b, c, sum;
//	double avg;
//
//	printf("이름 :");
//	scanf("%s", name);
//
//	printf("학번 :");
//	scanf("%d", &num);
//
//	printf("\n3과목 성적을 입력하세요...");
//	scanf("%d%d%d", &a, &b, &c);
//
//	sum = a + b + c;
//	printf("합계 : %d\n", sum);
//
//	avg = sum / 3.0;
//	printf("평균 : %f\n", avg);
//
//	(avg >= 90) ? printf("A") :
//		(avg >= 80) ? printf("B") :
//		(avg >= 70) ? printf("C") :
//		(avg >= 60) ? printf("D") :
//		printf("F");
//
//	return 0;
//}



// quiz_answer1)
//#include <stdio.h>
//
//int main(void)
//{
//	int kor, eng, mat, sum, hak;		// 학번은 연산할 게 아니어서 문자열로 입력 받아도 됨.
//	char name[20];
//	double avg;
//	printf("이름 입력 : ");
//	scanf("%s", name);
//	printf("학번 입력 : ");
//	scanf("%d", &hak);
//	printf("세과목의 성적을 차례대로 입력 : ");
//	scanf("%d%d%d", &kor, &eng, &mat);
//	sum = kor + eng + mat;
//	avg = (double)sum / 3;
//	(avg >= 90) ? printf("A학점\n") :
//		(avg >= 80) ? printf("B학점\n") :
//		(avg >= 70) ? printf("C학점\n") :
//		(avg >= 60) ? printf("D학점\n") :
//		printf("F학점\n");
//
//	return 0;
//}


// quiz_answer2  )
//#include <stdio.h>
//
//int main(void)
//{
//	int kor, eng, mat, sum, hak;		// 학번은 연산할 게 아니어서 문자열로 입력 받아도 됨.
//	char name[20], level;				// 문자형 변수 level 지정
//	double avg;
//	printf("이름 입력 : ");
//	scanf("%s", name);
//	printf("학번 입력 : ");
//	scanf("%d", &hak);
//	printf("세과목의 성적을 차례대로 입력 : ");
//	scanf("%d%d%d", &kor, &eng, &mat);
//	sum = kor + eng + mat;
//	avg = (double)sum / 3;
//	(avg >= 90) ? level = 'A' :
//		(avg >= 80) ? level = 'B' :
//		(avg >= 70) ? level = 'C' :
//		(avg >= 60) ? level = 'D' :
//		(level = 'F');		// 마지막 항을 괄호로 묶어주지 않으면, 실패가 뜸. / 변수인 level까지 3항으로, ='F'는 다르게 인식되기 때문에 3항이 2개인 걸로 인식됨. -> 괄호로 묶어서 하나로 인식할 수 있게 해야 함.
//
//	printf("========================== 성적표 ==========================\n");
//	printf("이름\t학번\t국어\t영어\t수학\t총점\t평균\t학점\n");
//	printf("------------------------------------------------------------\n");
//	printf("%s\t%d\t%d\t%d\t%d\t%d\t%.2f\t%c\n", name, hak, kor, eng, mat, sum, avg, level);
//
//	return 0;
//}



/* 비트 연산자
- 비트 연산자를 써야하는데 논리 연산자를 쓰면 다른 결과가 나옴. 논리 연산자를 써야하는데 비트 연산자를 쓰는 것은 상관 없음.
128		64		32		16		8		4		2		1
										1		0		1
										0		1		1
										-----------------
										1		1		1(or 연산 결과)
										0		0		1(and 연산 결과)
										1		1		0(xor 연산 결과)
		5
|&^		3
---------
|		7(or)
&		1(and)
^		6(xor)

xor 연산에서는 11 00 인 경우에는 0, 01 10 인 경우에는 1이 나옴

1) 2진수로 바꿈
2) or, and, xor 연산을 함
3) 연산한 값을 10진수로 바꿈


- 비트 부정(NOT) : ~ (보수를 구하는 연산자)
- 양수를 음수로, 음수를 양수로 만들어줌. 양수에서 음수로 갈 때는 숫자가 1씩 커짐. 음수에서 양수로 갈 때는 1씩 작아짐.
- 2진수는 음수 표현이 없음. -> 부호 비트를 사용함. 맨 왼쪽의 비트를 부호 비트로 사용함. 양수는 0 음수는 1 사용

128		64		32		16		8		4		2		1
0		0		0		0		0		1		0		1 (양수 5)
1		0		0		0		0		1		0		1 (음수 5)
---------------------------------------------------------

- 보수 사용 (빠른 연산을 위해서)
- 10진수의 n의 보수는 10을 만들기 위해 상대되는 수
- 2진수의 보수는 1의 보수를 취하고 1을 더해서 구함 -> 1의 보수는 비트를 반전 시킴
- 8비트로 만들 수 있는 가장 큰수, 작은 수 : 127, -128
- ~-5 -> 4
- ~10 -> -11
- 이해 안 되면 그냥 결과 외우기 !!!!!!!!!!

- 비트 이동 연산자
- 5 << 2 -> 20 (왼쪽으로 이동하면 숫자가 커짐) 1) 2진수로 변환 2) << 뒤의 숫자의 개수만큼 0을 붙여줌
- 20 >> 2 -> 5 
- 20 >> 6 -> 6 / 2의 0승 이하로 이동하게 되면 0 처리가 됨.

*/



//#include <stdio.h>
//
//int main(void)
//{
//	int su1 = 12, su2 = 7, result;
//
//	result = su1 | su2;
//	printf("su1과 su2의 논리합 : %d\n", result);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int su1 = 12, su2 = 7, result;
//
//	result = su1 & su2;
//	printf("su1과 su2의 논리곱 : %d\n", result);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int su1 = 12, su2 = 7, result;
//
//	result = su1 ^ su2;
//	printf("su1과 su2의 배타적 논리합(xor) : %d\n", result);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int su1 = 15;
//	su1 = ~su1;
//	printf("su1의 비트 부정 : %d\n", su1);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int su1 = -15;
//	su1 = ~su1;
//	printf("su1의 비트 부정 : %d\n", su1);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int op = 30, result;
//	result = op << 3;
//	printf("30을 좌측으로 3비트 이동시킨 결과 = %d\n", result);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int op = 30, result;
//	result = op >> 6;
//	printf("30을 우측으로 6비트 이동시킨 결과 = %d\n", result);		// 2의 0승 안으로 들어가므로 0이 됨.
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0, c = 0;
//	printf("정수의 크기는 %d 입니다.\n", sizeof(int));		// sizeof 연산자 : 배열에서 주로 사용함. 메모리 공간에 할당되는 크기의 값을 반환해줌. / 32비트 기반이므로 4바이트..로 출력됨.
//	a = (b = 3, c = 5, b + c);		// 콤마연산자 : 왼쪽부터 오른쪽으로 차례로 수행함 / ;(세미콜론)을 사용하면 3개의 명령이 되고, ,(콤마)를 이용하면 3개의 명령을 하나로 인식하고 차례대로, 연속적으로 명령을 수행함. (국어상 그리고의 개념과 비슷함)
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int su1 = 123;
//	char ch = 'a';
//	float su2 = 12.345;
//
//	printf("변수 su1의 크기		: %d byte\n", sizeof(su1));
//	printf("문자형 자료형의 크기	: %d byte\n", sizeof(char));
//	printf("문자형 자료형의 크기	: %d byte\n", sizeof(ch));
//	printf("수식(su1+su2)의 크기	: %d byte\n", sizeof(su1 + su2));	// 정수 + 실수 = 실수 / float -> 4byte
//	printf("실수 1.23456의 크기	: %d byte\n", sizeof(1.23456));		// 상수 실수를 쓰면 double로 -> 8byte
//	printf("문자형 상수 'a'의 크기	: %d byte\n", sizeof('a'));		// 문자는 실제로 4byte의 공간을 할당 받음. 문자형 변수, 문자형은 1byte라고 표기되지만, 실제로는 4byte
//
//	return 0;
//}



#include <stdio.h>

int main(void)
{
	int su1, su2, su3;
	float result;
	result = (su1 = 5, su2 = su1 + 2, su2++, su3 = su2 / su1);		// su2++은 단항이므로 선치 후치 상관 없음. -> 8이 됨. / su3=8/5의 몫값인 1 -> result에는 1이 들어가는데, 실수이므로 1.000000이 출력됨.
	printf(" su1 = %d\n su2 = %d\n su3 = %d\n result = %f\n", su1, su2, su3, result);

	return 0;
}