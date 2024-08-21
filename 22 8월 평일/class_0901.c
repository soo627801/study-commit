// quiz 3.
//#include <stdio.h>
//int main(void)
//{
//	int num_arr[5][5];
//	int i, j, cnt = 1;
//
//	for (j = 0; j < 5; j++)
//	{
//		if (j % 2 == 1)
//			for (i = 4; i >= 0; i--)
//				num_arr[i][j] = cnt++;
//		else
//			for (i = 0; i < 5; i++)
//				num_arr[i][j] = cnt++;
//	}
//	
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d\t", num_arr[i][j]);
//		printf("\n");
//	}
//}

// 3. answer (열 : 정방향, 짝수열에서는 정방향, 홀수열에서는 역방향 -> 열과 행의 for문 위치가 바뀜)
//#include <stdio.h>
//int main(void)
//{
//	int num_arr[5][5];
//	int i, j, cnt = 1;
//	for (i = 0; i < 5; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (j = 0; j < 5; j++)
//				num_arr[j][i] = cnt++;
//		}
//		else
//		{
//			for (j = 4; j > -1; j--)
//				num_arr[j][i] = cnt++;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d\t", num_arr[i][j]);
//		printf("\n");
//	}
//}


// quiz 4.
//#include <stdio.h>
//int main(void)
//{
//	int num_arr[5][5];
//	int i, j, cnt = 1;
//
//	/*for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if ((i + j) % 5 == 0)
//				num_arr[i][j] = 1;
//			if ((i + j) % 5 == 1)
//				num_arr[i][j] = 2;
//			if ((i + j) % 5 == 2)
//				num_arr[i][j] = 3;
//			if ((i + j) % 5 == 3)
//				num_arr[i][j] = 4;
//			if ((i + j) % 5 == 4)
//				num_arr[i][j] = 5;
//		}
//	}*/
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			num_arr[i][0] = i + 1;
//			num_arr[i][j] = num_arr[i][0]++;
//			if (num_arr[i][j] == 5)
//				cnt = 1;	
//			
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d\t", num_arr[i][j]);
//		printf("\n");
//	}
//}


// 4. answer
// 규칙 : 행과 열의 인덱스를 더해서 5로 나누고 나눈 나머지에 1을 더하면 됨.
//#include <stdio.h>
//int main(void)
//{
//	int num_arr[5][5];
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			num_arr[i][j] = (i + j) % 5 + 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d\t", num_arr[i][j]);
//		printf("\n");
//	}
//}



/* 포인터 -> 메모리 공간 할당에 대한 그림들을 그려가면서 이해하면 좋음 !!!
- 일반 변수 : 직접 참조
- 포인터 변수 : 간접 참조 / 데이터 주소 정보를 갖고 있는 또다른 변수가 있어서, 그 변수를 이용해서 간접적으로 제어함.
- 변수의 자료형에 따라서 차지하는 메모리 공간이 달라진다. (문자형은 4바이트가 할당되지만, 실제로는 1바이트 만을 차지함.)
- 변수의 주소를 계산하는 연산자 : & !!!!!! (중요함)

*/


//#include <stdio.h>
//int main(void)
//{
//	int num = 5;			// 일반 변수 num, 포인터 변수 *pnum / 포인터 변수에는 메모리에 할당되는 주소 정보만이 저장됨. / 4개의 주소 중 첫번째 주소 정보만 갖고 있음. 범위는 자료형을 통해서 개수를 통해 알 수 있음.
//	int* pnum = &num;		// 변수 num의 주소를 정수형 포인터 변수 pnum에 할당
//	printf("pnum : %d\n", pnum);		// 저장된 값을 보여준 것
//	printf("&num : %d\n", &num);		// 연산자를 통해서 연산된 값을 보여준 것
//	printf("*pnum : %d\n", *pnum);		// *가 안 붙어있으면 방향만 가리키고 있는 것임. *가 있으면 방향을 가리키는 메모리 주소 정보가 들어가 있음. / pnum이 가리키고 있는 곳에 저장되어 있는 값을 출력
//	printf("num : %d\n", num);			// num이 저장하고 있는 값을 출력
//}


//#include <stdio.h>
//int main(void)
//{
//	int num = 5;
//	double su = 3.14;
//	int* pnum;		// 정수형 포인터변수 pnum을 선언함
//	double* psu;	//더블형 포인터 변수 psu를 선언함
//	pnum = &num;	// 변수 num의 주소 값을 정수형 포인터 변수 pnum에 할당
//	psu = &su;		// 더블 su의 주소 값을 더블형 포인터 변수 psu에 할당
//	printf("pnum : %d\n", pnum);
//	printf("*pnum : %d\n", *pnum);
//	printf("*psu : %f\n", *psu);
//}


//#include <stdio.h> // 간접 참조할 변수의 자료형과 포인터 변수의 자료형은 일치해야 함. -> 일치하지 않으면 문법상의 오류는 없어 보이나 다른 결과가 나옴.
//int main(void)
//{
//	int num = 5;
//	double su = 3.14;
//	int* pnum;		// 정수형 포인터변수 pnum을 선언함
//	double* psu;	//더블형 포인터 변수 psu를 선언함
//	pnum = &su;	// 변수 num의 주소 값을 정수형 포인터 변수 pnum에 할당
//	psu = &num;		// 더블 su의 주소 값을 더블형 포인터 변수 psu에 할당
//	/*printf("pnum : %d\n", pnum);*/
//	printf("*pnum : %f\n", *pnum);
//	printf("*psu : %d\n", *psu);
//}


// 주소는 랜덤이기 때문에 실행할 때 마다 달라짐. (할당되는 위치가 달라짐) 주소마다 4씩 차이가 나지도 않음(여기저기 랜덤으로 할당되기 때문에)
//#include <stdio.h>
//int main(void)
//{
//	int i = 10;
//	char c = 69;
//	float f = 12.3;
//
//	printf("i의 주소 : %u\n", &i);		// 변수 i의 주소 출력
//	printf("c의 주소 : %u\n", &c);		// 변수 c의 주소 출력
//	printf("f의 주소 : %u\n", &f);		// 변수 f의 주소 출력
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int num = 10;
//	int* pnum = &num;		// pnum이 num을 가리킨다
//	*pnum = 20;				// pnum이 가리키는 공간에 20을 저장한다.
//	printf("%d\n", *pnum);	// pnum이 가리키는 공간에 저장된 값 출력
//	printf("%d\n", num);
//}


// 자료형이 동일한 변수 여러개를 가공할 때 포인터 변수 하나만을 선언해서 가공할 수 있음. (자료형이 같은 경우에만)
//#include <stdio.h>
//int main(void)
//{
//	int num1 = 100, num2 = 100;
//	int* pnum;
//
//	pnum = &num1;		// 포인터 pnum이 num1을 가리킴
//	(*pnum) += 30;		// num1 += 30;과 동일
//
//	pnum = &num2;		// 포인터 pnum이 num2를 가리킴
//	(*pnum) -= 30;		// num2 -= 30;과 동일
//
//	printf("num1 : %d, num2 : %d\n", num1, num2);
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	/*int* p = NULL;*/		// null로 초기화 되어도 주소가 없기 때문에 실행되지 않음 -> 이런 형식은 사용하지 않음 !
//	int *p;			// 포인터 p는 초기화가 안되어 있음
//	*p = 100;		// 포인터 변수 p가 가리키는 곳에 100을 넣어라 -> 어디를 가리키는지 모르기 때문에 에러 발생. // int *p = NULL;을 이용해서 NULL로 초기화하면 에러는 발생하지 않음. 하지만 초기화하지 않으면 실행 도중 에러가 발생함.
//	// p = 100; 이라면 위험한 코드. 100이라는 메모리의 주소가 없을 확률이 높다.
//	/*printf("%d\n", p);
//	printf("%d\n", *p);*/
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int i;
//	double* pd;
//
//	pd = &i;		// 오류! double형 포인터에 int형 변수의 주소를 대입
//	*pd = 36.5;		// i가 할당 받은 메모리를 넘어가기 때문에 실행 도중 에러가 발생함.
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	char ch1 = 'A', ch2;
//	char* ptr;
//
//	ptr = &ch1;
//	ch2 = *ptr;
//	printf("\n 변수 ch1의 주소는 %d번지이다.", &ch1);
//	printf("\n 변수 ptr의 주소는 %d번지이다.", ptr);
//	printf("\n 변수 *ptr의 내용은 %c이다.", *ptr);
//	printf("\n 변수 ch2의 내용은 '%c'이다.\n", ch2);
//}



//#include <stdio.h>
//int main(void)
//{
//	int num1 = 10, num2;
//	int* ptr;
//
//	ptr = &num1;
//	num1++;
//	num2 = 5;
//	ptr = &num2;
//	*ptr = *ptr + num1 + num2;
//	printf("num1 = %d, num2 = %d, *ptr = %d\n", num1, num2, *ptr);
//}



//#include <stdio.h>
//int main(void)
//{
//	char vc = 'A', * pc;
//
//	pc = &vc; /* 문자형 포인터 변수 pc에 vc의 주소값을 할당함*/
//
//	printf("\n pc-1 = %d번지 pc = %d번지 pc+1 = %d번지", pc - 1, pc, pc + 1);
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int vi = 123, *pi;
//
//	pi = &vi; /* 정수형 포인터 */
//
//	printf("\n pi-1 = %d번지 pi = %d번지 pi+1 = %d번지", pi - 1, pi, pi + 1);		// 자료형의 단위(int -> 4)만큼 주소에서 -4, +4가 됨.
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	char a = 'A';
//	double b = 12.345;
//	char* pa;
//	double* pb;
//	pa = &a;
//	pb = &b;
//	printf("문자형 변수의 크기 : %d\n", sizeof(a));		// 문자형 -> 1
//	printf("실수형 변수의 크기 : %d\n", sizeof(b));		// 실수형 -> 8
//	printf("포인터 문자형 변수의 크기 : %d\n", sizeof(pa));	// 포인터 변수는 무조건 정수가 들어가므로 4바이트가 할당됨. / 데이터를 어디까지 가공할 건지 확인하는 정보가 필요해서 포인터 변수도 자료형을 지정해줌. -> 가공할 범위를 알 수 있음 (4바이트 / 8바이트 등)
//	printf("포인터 실수형 변수의 크기 : %d\n", sizeof(pb));
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int a[5] = { 10,20,30,40,50 };
//	int i, * p;
//	p = a;
//	for (i = 0; i < 5; i++)
//	{
//		printf("배열의 주소 %d, 배열의 값 %d\n", p + i, *(p + i));
//	}
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int i;
//	int a[5] = { 10,20,30,40,50 };
//	for (i = 0; i < 5; i++)
//	{
//		printf("배열의 주소 %d, 배열의 값 %d\n", a + i, *(a + i));
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a = 10, b[5] = { 20,30,40,50,60 }, * p;
//	p = &a;
//	printf("(1) a = %d, *p = %d\n", a, *p);
//	p = b;
//	printf("(2) a = %d, *p = %d, *(p+1) = %d\n", a, *p, *(p + 1));
//	(*p)++;
//	printf("(3) a = %d, *p = %d, *(p+1) = %d\n", a, *p, *(p + 1));
//	(*p++); // *(p++); 와 같은 의미
//	printf("(4) a = %d, *p = %d, *(p+1) = %d\n", a, *p, *(p + 1));
//	return 0;
//}



// Call by value (cbv) : 값에 의한 참조 방식
//#include <stdio.h>
//void ex_func(int sa, int sb);
//int main(void)
//{
//	int ma = 100, mb = 200;
//	ex_func(ma, mb);
//	printf("값2 : %d %d\n", ma, mb);
//	return 0;
//}
//void ex_func(int sa, int sb)
//{
//	sa += 5;
//	sb += 5;
//	printf("값1 : %d %d\n", sa, sb);
//}



// Call by reference (cbr) : 주소에 의한 참조
//#include <stdio.h>
//void int_swap(int* x, int* y);
//int main(void)
//{
//	int a = 100, b = 200;
//	printf("교환 전 : a = %d, b = %d\n", a, b);
//	int_swap(&a, &b);			// 함수를 호출할 때 주소값을 이용함
//	printf("교환 후 : a = %d, b = %d\n", a, b);
//	return 0;
//}
//void int_swap(int* x, int* y)	// 포인터를 이용함
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}



//#include <stdio.h>
//void convertToUppercase(char*);
//int main(void)
//{
//	char string[] = "characters";
//	printf("변환 전의 스트링 : %s\n", string);
//	convertToUppercase(string);
//	printf("변환 후의 스트링 : %s\n", string);
//	return 0;
//}
//void convertToUppercase(char* s)		// 포인터 변수로 받음 / 한번에 여러개의 데이터를 보낼 수 없어서 함수를 이용해서 주소값을 보내서 가공함.
//{
//	while(*s != '\0')		// 널문자랑 같지 않으면 참
//	{
//		if (*s >= 'a' && *s <= 'z')		// 소문자면 대문자로 바꿈 (마지막에 자동 삽입된 널문자까지 반복)
//			*s = *s - 32;		// ASCII 대문자 변환
//		++s;		// 다음 문자로 포인터 증가
//	}
//}