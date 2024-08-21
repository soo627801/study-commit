//#include <stdio.h>
//int main(void)
//{
//	char str[50];
//	int idx = 0;
//
//	printf("문자열 입력 : ");
//	scanf("%[^\n]s", str);		// 기본적으로 데이터 구분자가 \n과 공백으로 되어 있는데, 공백을 제외하고 \n으로만 구분자를 설정해주는 코드
//	/*gets(str);*/				// 공백을 포함해서 한번에 문자열을 입력할 때 사용
//	/*scanf("%s", str);*/		// 공백이 있는 문자열을 입력하면 서식제어문이 하나여서 공백 이후는 출력되지 않음.
//	printf("입력 받은 문자열 : %s \n", str);
//
//	printf("문자 단위 출력 : ");
//	
//	while (str[idx] != '\0')	// 널문자를 만날 때까지 한 문자씩 출력 반복
//	{
//		printf("%c", str[idx]);
//		idx++;
//	}
//	printf("\n");
//}



//#include <stdio.h>		// 널문자가 수동삽입되면 어떤 결과가 나오는지 알아볼 수 있는 코드
//int main(void)
//{
//	char str[50] = "I like C programing";
//	printf("string : %s \n", str);
//
//	str[8] = '\0';		// 널문자를 만나면 출력을 중단하기 때문에 I like C 까지만 출력됨. -> 수동으로 삽입해도 널문자를 만나면 끝낸다는 것을 알 수 있음.
//	printf("string : %s \n", str);
//
//	str[6] = '\0';
//	printf("string : %s \n", str);
//
//	str[1] = '\0';
//	printf("string : %s \n", str);
//
//	return 0;
//}



/* 선택정렬 알고리즘
- 변수를 이용해서 자리를 서로 바꿔줘야 함.
- 안에 있는 숫자들만 자리가 바뀜.
- 기준이 되는 숫자가 비교되는 숫자보다 크면 서로 자리가 바뀜.
- 기준이 되는 수는 [0]부터 차례대로, 맨 끝 수는 비교대상이 없음.
*/



//#include <stdio.h>
//int main(void)
//{
//	int num[5] = { 4,8,2,7,6 };
//	int tmp, i, j;
//
//	for (i = num[0]; i < num[4]; i++)
//	{
//		for (j = num[1]; j <= num[4]; j++)
//			if (i > j)
//			{
//				tmp = j;
//				j = i;
//				i = tmp;
//			}
//	}	
//	printf("%d %d %d %d %d", num[0], num[1], num[2], num[3], num[4]);
//}

// answer
//#include <stdio.h>
//int main(void)
//{
//	int num[5] = { 4,8,2,7,6 };
//	int tmp, i, j;
//	for (i = 0; i < 4; i++)				// 기준 인덱스
//	{
//		for (j = i + 1; j < 5; j++)		// 비교대상 인덱스
//		{
//			if (num[i] > num[j])
//			{
//				tmp = num[i];
//				num[i] = num[j];
//				num[j] = tmp;
//			}
//		}
//	}
//	printf("정렬 후 : ");
//	for (i = 0; i < 5; i++)
//		printf("%3d", num[i]);
//	printf("\n");
//}


/* 순위구하기 알고리즘
- 값을 바꾸지 않음.
- 자기 자신을 제외한 4개의 값과 모두 비교함. (등수는 상대적이기 때문에, 전체 대상으로 비교)
- 기준보다 비교대상이 더 크면 등수가 1개 카운트 됨. (+1이 됨)
1. 점수가 담겨져 있는 배열
2. 등수가 담겨져 있는 배열 -> 모두 1로 초기화 되어 있어야 함.
*/

//#include <stdio.h>
//int main(void)
//{
//	int score[5] = { 82,85,76,79,96 };
//	int num[5] = { 1,1,1,1,1 };
//	int i, j;
//		
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++);
//		{
//			if (score[i] < score[j])
//			{
//				num[i] += 1;
//			}
//		}
//	}
//	printf("점수 / 등수\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d / %d", score[i], num[i]);
//		printf("\n");
//	}
//}



//#include <stdio.h>
//int main(void)
//{
//	int jumsu[5] = { 82,85,76,79,96 }, rank[] = { 1,1,1,1,1 };
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (jumsu[i] < jumsu[j])
//				rank[i] += 1;
//		}
//	}
//	for (i = 0; i < 5; i++)
//		printf("%d점 / %d등\n", jumsu[i], rank[i]);
//}



/* 다차원 배열
- 2차원 배열 (행, 열)
- 초기화 할 때 별도의 중괄호 없이 표현해도 3개씩 묶어서 알아서 초기화 됨.
- 행을 비우고 열에 값을 지정해주는 건 가능하지만, 행을 지정하고 열만 비우는 건 불가능함.
*/



//#include <stdio.h>
//int main(void)
//{
//	int arr1[3][4];
//	int arr2[7][9];
//	printf("세로3, 가로4 : %d\n", sizeof(arr1));
//	printf("세로7, 가로9 : %d\n", sizeof(arr2));
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int a[3][3] = { 11,12,13,21,22,23,31,32,33 };
//	int i, j;
//	for (i = 0; i < 3; ++i)
//	{
//		for (j = 0; j < 3; ++j)
//			printf(" 배열 요소 a[%d][%d] : %d", i, j, a[i][j]);
//		printf("\n");
//	}
//}



//#include <stdio.h>
//int main(void)
//{
//	int num_arr[5][5];
//	int i, j, cnt = 1;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			num_arr[i][j] = cnt++;
//			printf("%3d", num_arr[i][j]);
//		}
//		printf("\n");
//	}
//	/*for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d\t", num_arr[i][j]);
//		printf("\n");
//	}*/					// 출력문 형태(answer)
//}



// quiz 1. (2가지 방법)
//#include <stdio.h>
//int main(void)
//{
//	int num_arr[5][5];
//	int i, j, cnt = 25;
//	
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			num_arr[i][j] = cnt--;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d\t", num_arr[i][j]);
//		printf("\n");
//	}
//}

// 1. answer
//#include <stdio.h>
//int main(void)
//{
//	int num_arr[5][5];
//	int i, j, cnt = 25;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			num_arr[i][j] = cnt--;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d\t", num_arr[i][j]);
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	int num_arr[5][5];
//	int i, j, cnt = 1;
//	for (i = 4; i > -1; i--)
//	{
//		for (j = 4; j > -1; j--)
//			num_arr[i][j] = cnt++;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d\t", num_arr[i][j]);
//		printf("\n");
//	}
//}


// quiz 2. (2가지 방법)
//#include <stdio.h>
//int main(void)
//{
//	int num_arr[5][5];
//	int i, j, cnt = 1;
//
//	for (i = 4; i >= 0; i--)
//	{
//		for (j = 0; j < 5; j++)
//			num_arr[i][j] = cnt++;
//	}
	//for (i = 0; i < 5; i++)
	//{
	//	for (j = 0; j < 5; j++)
	//		printf("%d\t", num_arr[i][j]);
	//	printf("\n");
	//}
//}

// 2. answer (열 : 역방향 / 행 : 정방향)
//#include <stdio.h>
//int main(void)
//{
//	int num_arr[5][5];
//	int i, j, cnt = 25;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 4; j > -1; j--)
//		{
//			num_arr[i][j] = cnt--;
//		}
//	}
	//for (i = 0; i < 5; i++)
	//{
	//	for (j = 0; j < 5; j++)
	//		printf("%d\t", num_arr[i][j]);
	//	printf("\n");
	//}
//}

// (열 : 정방향 / 행 : 역방향)
#include <stdio.h>
int main(void)
{
	int num_arr[5][5];
	int i, j, cnt = 1;
	for (i = 4; i > -1; i--)
	{
		for (j = 0; j < 5; j++)
			num_arr[i][j] = cnt++;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\t", num_arr[i][j]);
		printf("\n");
	}
}


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