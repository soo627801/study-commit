//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 1; su < 5; su++)
//	{
//		if (su == 3)
//		{
//			continue;		// continue;를 만나면 바로 반복 구문 for로 돌아감. -> 3은 출력되지 않음. / 3을 출력하고 싶다면, 밑의 코드를 continue; 앞으로 위치를 바꿔주면 3도 출력이 됨.
//			printf("su = 3\n");
//		}
//		else
//			printf("su = %d\n", su);
//	}
//}



//#include <stdio.h>
//#include <conio.h>
//int main(void)
//{
//	char ch;
//	while (1)
//	{
//		ch = getch() - 32;		// 대소문자 상관 없이 32를 빼주기 때문에 소문자는 대문자로 출력이 잘 되지만, 대문자는 특수문자들이 출력됨.
//		putch(ch);
//		if (ch != 'q' && ch != 'Q')		// 대문자 Q를 누르면 특수문자가 찍히기 때문에 참이 되어서 계속 진행됨.
//			continue;
//		else
//			exit();
//	}
//}



// quiz 1. 어떤 수의 약수를 구하는 프로그램을 작성하여라

//#include <stdio.h>
//int main(void)
//{
//	int i, j = 1;
//	printf("약수를 구하려는 수를 입력하세요...");
//	scanf("%d", &i);
//
//	while (j <= i)
//	{
//		if (i % j == 0)
//			printf("%d, ", j);
//		j++;
//	}
//	printf("\b\b \n");
//
//	return 0;
//}


// quiz 1. answer
//#include <stdio.h>
//int main(void)
//{
//	int num, su = 1;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//	printf("%d의 약수 :", num);
//	while (1)
//	{
//		if (num % su == 0)
//			printf("%3d", su);
//		if (num == su)
//			break;
//		su++;
//	}
//	printf("\n");
//}


// quiz 2. 1에서부터 입력된 어떤 수까지 내에 있는 소수를 찾는 프로그램을 작성하라.
// 약수의 개수를 구해서 2개 이상이면..

// i에 9가 입력되었다면, k라는 변수가 1부터 9가 될 때까지 j라는 변수로 나누었을 때 0이 되면, count에 1을 더해줌. j가 k랑 똑같아질때까지 반복하고 count가 2라면, k를 출력하고, count가 2를 초과한다면 출력하지 않고 k에 1이 더해짐.
//#include <stdio.h>
//int main(void)
//{
//	int i, j = 1, k = 1, count = 0;
//	printf("수 입력 : ");
//	scanf("%d", &i);
//
//	while (k >= i)
//	{
//		while (j >= k)
//		{
//			if (k % j == 0)
//				count++;
//			j++;
//		}
//		if (count == 2)
//			printf("%d", k);
//		k++;
//		
//	}
//	
//
//}


// quiz 2. answer (중첩 for문 사용)
//#include <stdio.h>
//int main(void)
//{
//	int i, j, num, cnt = 0;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//	printf("%d까지의 소수 :", num);
//	for (i = 2; i <= num; i++)		// 1은 소수에서 제외되기 때문에 2부터 // 입력한 수
//	{
//		for (j = 2; j <= num; j++)		// 1은 모든 수의 약수이기 때문에 2부터 // 약수를 찾는 수
//		{
//			if (i % j == 0)
//				cnt++;
//		}
//		if (cnt == 1)
//			printf("%3d", i);
//		cnt = 0;		// 다음 수의 약수 개수 파악을 위해 0으로 리셋
//	}
//	printf("\n");
//}


// quiz 3.  1에서 1000까지의 자연수중에서 4로 나누어도 6으로 나누어도 나머지가 1인 수의 합을 출력하라.

//#include <stdio.h>
//int main(void)
//{
//	int i, sum = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		if ((i % 4 == 1) && (i % 6 == 1))
//		{
//			sum += i;
//		}
//	}
//	printf("결과 : %d", sum);
//
//	return 0;
//}



// quiz 3. answer
//#include <stdio.h>
//int main(void)
//{
//	int num = 1, sum = 0;
//	while (1)
//	{
//		if (num > 1000)
//			break;
//		if (num % 4 == 1 && num % 6 == 1)		// (num % 12 == 1)로 코드를 작성하지 않게 조심하기
//			sum += num;
//		num++;
//	}
//	printf("결과 : %d\n", sum);
//}



// quiz 4.  두수의 최소 공배수와 최대 공약수를 구하는 프로그램을 작성하라.
// 두 수를 i로 나누었을 때 모두 0이면 i가 공약수 -> 공약수를 저장하다보면 최종적으로 마지막으로 저장된 공약수가 최대공약수, 최소공배수는 공식을 이용해서 구하면 됨 (검색 가능)



//#include <stdio.h>
//int main(void)
//{
//	int a, b, i = 1, max = 0, min = 0;
//	printf("두 수를 입력하세요...");
//	scanf("%d%d", &a, &b);
//
//	while (1)
//	{
//		if ((a % i == 0) && (b % i == 0)) 
//			
//			max = i;
//		
//		i++;
//
//		if (i > a || i > b)
//			break;
//	}
//	printf("최대공약수 : %d\n", max);
//
//	return 0;
//}

// quiz 4. answer
//#include <stdio.h>
//int main(void)
//{
//	int num1, num2, max, min, i = 1;		// 약수를 구할 i는 1로 초기화
//	printf("두 수를 차례대로 입력 : ");
//	scanf("%d%d", &num1, &num2);
//	while (i <= num1)		// num2를 지정해도 상관 없음.
//	{
//		if (num1 % i == 0 && num2 % i == 0)
//			max = i;		// 공약수 저장. 마지막에 저장되는 약수가 최대공약수가 되는 것임.
//		i++;
//	}
//	min = num1 * num2 / max;		// 최소공배수 구하는 공식.
//	printf("최대공약수 : %d\n최소공배수 : %d\n", max, min);
//}



// quiz. 쌀 100통이 저장되어 있는 창고에 암수 1쌍의 쥐가 있다. 쥐 한 마리가 하루에 20g씩의 쌀을 먹고, 10일(10, 20, 30)마다 쥐의 수가 2배씩 증가한다.며칠 만에 창고의 쌀이 모두 쥐의 먹이가 될까. 그리고 쥐는 총 몇 마리 인가 ? (쌀 한 통 = 1kg)(쌀을 먹은 후 2배 증가하는 조건

//#include <stdio.h>
//int main(void)
//{
//	int r, m = 2, day = 1;
//	r = 100 * 1000;
//	while (1)
//	{
//		r = r - m * 20;
//
//		if (day % 10 == 0)
//			m *= 2;
//		/*printf("%d일\n쥐 %d마리\n쌀 %dg\n", day, m, r);*/
//		
//		if (r <= 0)
//			break;
//
//		day++;
//	}
//	printf("%d일\n쥐 %d마리\n", day, m);
//}


// quiz. answer
//#include <stdio.h>
//int main(void)
//{
//	int day = 0, rice = 100 * 1000, mouse = 2;
//	while (rice > 0)
//	{
//		day += 1;
//		rice -= (mouse * 20);
//		if (day % 10 == 0)
//			mouse *= 2;
//	}
//	printf("쌀을 다 먹은 날 : %d일 / 쥐 : %d마리\n", day, mouse);
//}