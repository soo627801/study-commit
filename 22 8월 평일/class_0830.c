// quiz
// 1. 두 수를 입력 받아 큰 수를 출력하는 함수를 만드시오.
//#include <stdio.h>
//void func(int a, int b);
//int main(void)
//{
//	int a, b;
//	printf("두 수를 입력하세요...\n");
//	scanf("%d%d", &a, &b);
//	func(a, b);
//}
//void func(int a, int b)
//{
//	if (a > b)
//		printf("큰 수 : %d\n", a);
//	else if (a < b)
//		printf("큰 수 : %d\n", b);
//	else if (a == b)
//		printf("%d와 %d는 같은 수 입니다.\n", a, b);
//}

// 1. answer
// //#include <stdio.h>
//int main()
//{
//	int num1, num2;
//	printf("두 수를 차례대로 입력 : ");
//	scanf("%d%d", &num1, &num2);
//	if (num1 > num2)
//		printf("%d가 큰 수이다.\n", num1);
//	if (num2 > num1)
//		printf("%d가 큰 수이다.\n", num2);
//}


//#include <stdio.h>
//void Big_num()		// 반환시킬 거 없음 -> void
//{
//	int num1, num2;
//	printf("두 수를 차례대로 입력 : ");
//	scanf("%d%d", &num1, &num2);
//	if (num1 > num2)
//		printf("%d가 큰 수이다.\n", num1);
//	if (num2 > num1)
//		printf("%d가 큰 수이다.\n", num2);
//}
//int main()
//{
//	Big_num();
//}

//#include <stdio.h>
//void Big_num(int num1, int num2)
//{
//	if (num1 > num2)
//		printf("%d가 큰 수이다.\n", num1);
//	if (num2 > num1)
//		printf("%d가 큰 수이다.\n", num2);
//}
//int main()
//{
//	int num1, num2;
//	printf("두 수를 차례대로 입력 : ");
//	scanf("%d%d", &num1, &num2);
//	Big_num(num1, num2);
//}

//#include <stdio.h>
//int Big_num(int num1, int num2)
//{
//	if (num1 > num2)
//		return num1;
//	if (num2 >= num1)
//		return num2;
//}
//int main()
//{
//	int num1, num2, result;
//	printf("두 수를 차례대로 입력 : ");
//	scanf("%d%d", &num1, &num2);
//	result = Big_num(num1, num2);
//	printf("%d가 큰 수이다.\n", result);
//}


// 2. 입력 받은 값이 짝수인지 홀수인지 판별하는 함수 제작
//#include <stdio.h>
//void func(i)
//{
//	if (i % 2 == 0)
//		printf("짝수\n");
//	else
//		printf("홀수\n");
//}
//int main()
//{
//	int i;
//	printf("정수를 입력하세요...\n");
//	scanf("%d", &i);
//
//	func(i);
//}

// 2. answer
//#include <stdio.h>
//int main()
//{
//	int num1;
//	printf("정수 입력 : ");
//	scanf("%d", &num1);
//	if (num1 % 2 == 0)
//		printf("%d는 짝수다.\n", num1);
//	else
//		printf("%d는 홀수다.\n", num1);
//}


//#include <stdio.h>
//int Hol_jjak(int num1)
//{
//	if (num1 % 2 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int num1;
//	printf("정수 입력 : ");
//	scanf("%d", &num1);
//	if (Hol_jjak(num1))
//		printf("%d는 짝수다.\n", num1);
//	else
//		printf("%d는 홀수다.\n", num1);
//}


//#include <stdio.h>
//int Hol_jjak(int num1)
//{
//	return num1 % 2;		// num1을 2로 나눈 결과를 바로 return 시킴. -> 짝수면 0, 홀수면 1이 됨. -> 밑의 if문에서 참일 경우가 홀수, 참이 아닐 경우가 짝수로 바껴야 함.
//}
//int main()
//{
//	int num1;
//	printf("정수 입력 : ");
//	scanf("%d", &num1);
//	if (Hol_jjak(num1))
//		printf("%d는 홀수다.\n", num1);
//	else
//		printf("%d는 짝수다.\n", num1);
//}


//#include <stdio.h>
//int Hol_jjak(int num1)
//{
//	return !(num1 % 2);		// num1을 2로 나눈 결과를 바로 return 시킴. -> 부정시키면 참이 짝수, 거짓이 홀수로 나오게 할 수 있음.
//}
//int main()
//{
//	int num1;
//	printf("정수 입력 : ");
//	scanf("%d", &num1);
//	if (Hol_jjak(num1))
//		printf("%d는 짝수다.\n", num1);
//	else
//		printf("%d는 홀수다.\n", num1);
//}


// 3. 3의 배수를 판별하는 함수를 만들고 이 함수를 이용하여 main에서 3의 배수만 출력하시오
// 함수에서 return 시키기 / 반환 시켜서 main에서 출력
//#include <stdio.h>
//int get()
//{
//	int num;
//	printf("정수를 입력하세요...");
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		return num;
//	else
//		exit();
//}
//int main()
//{
//	int num = get();
//	printf("출력 : %d\n", num);
//}


//3. answer
//#include <stdio.h>
//int main()
//{
//	int num1;
//	printf("정수 입력 : ");
//	scanf("%d", &num1);
//	if (num1 % 3 == 0)
//		printf("%d는 3의 배수이다.\n", num1);
//}


//#include <stdio.h>
//int Three_Func(int num1)
//{
//	if (num1 % 3 == 0)
//		return 1;
//	else
//		return 0;		// else를 넣지 않으면 임의의 아무 값이나 반환되어서 참으로 인식되어서, 3의 배수가 아니어도 3의 배수로 출력됨. -> 모든 수가 참이 되는 버그가 발생하기 때문에, 거짓일 때에는 0을 보내줘야 함.
//}
//int main()
//{
//	int num1;
//	printf("정수 입력 : ");
//	scanf("%d", &num1);
//	if(Three_Func(num1))
//		printf("%d는 3의 배수이다.\n", num1);
//}


//#include <stdio.h>
//int Three_Func(int num1)
//{
//	return!(num1 % 3);
//}
//int main()
//{
//	int num1;
//	printf("정수 입력 : ");
//	scanf("%d", &num1);
//	if(Three_Func(num1))
//		printf("%d는 3의 배수이다.\n", num1);
//}


// 4. 절댓값을 구하는 함수를 정의하시오.
//#include <stdio.h>
//int get()
//{
//	int num;
//	printf("정수를 입력하세요...");
//	scanf("%d", &num);
//	return num;
//}
//int main()
//{
//	int num = get();
//	if (num < 0)
//		num *= -1;
//	printf("절댓값 : %d", num);
//}


// 4. answer
//#include <stdio.h>
//int Jul_Dae(int num1)
//{
//	if (num1 < 0)
//		num1 *= -1;
//	return num1;
//}
//int main()
//{
//	int num1;
//	printf("정수 입력 : ");
//	scanf("%d", &num1);
//	printf("결과 : %d\n", Jul_Dae(num1));
//}


// 5. 거꾸로 수를 반환하는 함수를 정의하시오.
// 거꾸로 수를 만들고 main 함수에서 출력 / 반환 시켜서 main에서 출력
//#include <stdio.h>
//int get()
//{
//	int i, temp, reverse = 0;
//	printf("수 입력 : ");
//	scanf("%d", &i);
//	printf("결과 : %d -> ", i);
//	while (1)
//	{
//		temp = i % 10;
//		reverse *= 10;
//		reverse += temp;
//		i = i / 10;
//		if (i == 0)
//			break;
//	}
//	return reverse;
//}
//int main()
//{
//	int reverse = get();
//	printf("%d\n", reverse);
//}


// 5. answer
//#include <stdio.h>
//int Reverse_Num(int num1)
//{
//	int tmp, reverse = 0;
//	while (1)
//	{
//		tmp = num1 % 10;
//		reverse *= 10;
//		reverse += tmp;
//		num1 /= 10;
//		if (num1 == 0)
//			return reverse;
//	}
//}
//int main()
//{
//	int num1;
//	printf("정수 입력 : ");
//	scanf("%d", &num1);
//	printf("결과 : %d\n", Reverse_Num(num1));
//}



/* 배열
- 인덱스 번호는 0 ~ n-1의 값이 자동으로 부여됨.
- 자료형이 있어야 어느 정도 크기의 메모리가 몇 개 필요한지 알 수 있다.
- 같은 형의 변수들을 메모리에 연속적으로 !!!!!!!! 나란히 선언하여 접근 속도를 향상시킴. (일반적인 변수는 무작위로 선언됨)

- 같은 자료형만 모을 수 있기 때문에 자료형을 꼭 지정해줘야 함.

- 자료형이 없다면 []의 값은 인덱스 값을 의미함.
*/


//#include <stdio.h>
//int main(void)
//{
//	int arr[5];
//	int sum = 0, i;
//
//	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
//
//	for (i = 0; i < 5; i++)
//	{
//		sum += arr[i];
//	}
//	printf("합 : %d\n", sum);
//	return 0;
//}



//#include <stdio.h>
//main()
//{
//	int arr[10];		// 배열 변수도 초기화가 중요함
//	arr[0] = 1;
//	arr[1] = 2;
//	arr[2] = 3;
//	arr[3] = 4;
//	arr[4] = 5;
//	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//	/*printf("%d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);*/		// arr[5]는 공간만 확보되고, 메모리 값이 없기 때문에, 임의의 값이 출력됨.
//}



//#include <stdio.h>
//int main(void)
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,5,6,7 };
//	int arr3[5] = { 1,2 };
//	int len1, len2, len3, i;
//
//	printf("arr1의 크기 : %d\n", sizeof(arr1));		// sizeof 연산의 결과로 배열의 크기를 반환
//	printf("arr2의 크기 : %d\n", sizeof(arr2));
//	printf("arr3의 크기 : %d\n", sizeof(arr3));
//
//	len1 = sizeof(arr1) / sizeof(int);				// 배열의 길이를 계산
//	len2 = sizeof(arr2) / sizeof(int);
//	len3 = sizeof(arr3) / sizeof(int);
//	printf("arr1 : %d arr2 : %d arr3 : %d\n", len1, len2, len3);		// 변수를 출력
//
//	for (i = 0; i < len1; i++)						// 반복문을 이용해 arr1에 순차적으로 접근이 가능
//		printf("%d", arr1[i]);
//	printf("\n");
//
//	for (i = 0; i < len2; i++)						// 반복문을 이용해 arr2에 순차적으로 접근이 가능
//		printf("%d", arr2[i]);
//	printf("\n");
//
//	for (i = 0; i < len3; i++)						// 반복문을 이용해 arr3에 순차적으로 접근이 가능
//		printf("%d", arr3[i]);
//	printf("\n");
//}



//#include <stdio.h>
//int main(void)
//{
//	char str[14] = "Good morning!";		// 문자열은 무조건 따옴표 "" 이용해서 묶어주기 (중괄호 사용 x)
//
//	printf("%s \n", str);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	char str[] = "Good morning!";		// 문자열의 맨끝에는 문자열의 끝임을 알리는 \0가 자동으로 삽입 되므로 문자열 1개를 차지함. null 문자!!!
//
//	printf("배열의 크기 : %d \n", sizeof(str));
//	printf("%s \n", str);
//
//	return 0;
//}



#include <stdio.h>
int main(void)
{
	char str[] = "Good morning!";		// 배열의 길이가 14!
	
	printf("배열의 크기 : %d \n", sizeof(str));
	printf("널 문자 문자형 출력 : %c \n", str[13]);
	printf("널 문자 정수형 출력 : %d \n", str[13]);

	str[12] = '?';						// str에 저장된 문자열 데이터는 변경 가능
	printf("%s \n", str);

	return 0;
}