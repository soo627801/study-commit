//#include <stdio.h>
//int main(void)
//{
//	char str[50];
//	int idx = 0;
//
//	printf("���ڿ� �Է� : ");
//	scanf("%[^\n]s", str);		// �⺻������ ������ �����ڰ� \n�� �������� �Ǿ� �ִµ�, ������ �����ϰ� \n���θ� �����ڸ� �������ִ� �ڵ�
//	/*gets(str);*/				// ������ �����ؼ� �ѹ��� ���ڿ��� �Է��� �� ���
//	/*scanf("%s", str);*/		// ������ �ִ� ���ڿ��� �Է��ϸ� ��������� �ϳ����� ���� ���Ĵ� ��µ��� ����.
//	printf("�Է� ���� ���ڿ� : %s \n", str);
//
//	printf("���� ���� ��� : ");
//	
//	while (str[idx] != '\0')	// �ι��ڸ� ���� ������ �� ���ھ� ��� �ݺ�
//	{
//		printf("%c", str[idx]);
//		idx++;
//	}
//	printf("\n");
//}



//#include <stdio.h>		// �ι��ڰ� �������ԵǸ� � ����� �������� �˾ƺ� �� �ִ� �ڵ�
//int main(void)
//{
//	char str[50] = "I like C programing";
//	printf("string : %s \n", str);
//
//	str[8] = '\0';		// �ι��ڸ� ������ ����� �ߴ��ϱ� ������ I like C ������ ��µ�. -> �������� �����ص� �ι��ڸ� ������ �����ٴ� ���� �� �� ����.
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



/* �������� �˰���
- ������ �̿��ؼ� �ڸ��� ���� �ٲ���� ��.
- �ȿ� �ִ� ���ڵ鸸 �ڸ��� �ٲ�.
- ������ �Ǵ� ���ڰ� �񱳵Ǵ� ���ں��� ũ�� ���� �ڸ��� �ٲ�.
- ������ �Ǵ� ���� [0]���� ���ʴ��, �� �� ���� �񱳴���� ����.
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
//	for (i = 0; i < 4; i++)				// ���� �ε���
//	{
//		for (j = i + 1; j < 5; j++)		// �񱳴�� �ε���
//		{
//			if (num[i] > num[j])
//			{
//				tmp = num[i];
//				num[i] = num[j];
//				num[j] = tmp;
//			}
//		}
//	}
//	printf("���� �� : ");
//	for (i = 0; i < 5; i++)
//		printf("%3d", num[i]);
//	printf("\n");
//}


/* �������ϱ� �˰���
- ���� �ٲ��� ����.
- �ڱ� �ڽ��� ������ 4���� ���� ��� ����. (����� ������̱� ������, ��ü ������� ��)
- ���غ��� �񱳴���� �� ũ�� ����� 1�� ī��Ʈ ��. (+1�� ��)
1. ������ ����� �ִ� �迭
2. ����� ����� �ִ� �迭 -> ��� 1�� �ʱ�ȭ �Ǿ� �־�� ��.
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
//	printf("���� / ���\n");
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
//		printf("%d�� / %d��\n", jumsu[i], rank[i]);
//}



/* ������ �迭
- 2���� �迭 (��, ��)
- �ʱ�ȭ �� �� ������ �߰�ȣ ���� ǥ���ص� 3���� ��� �˾Ƽ� �ʱ�ȭ ��.
- ���� ���� ���� ���� �������ִ� �� ����������, ���� �����ϰ� ���� ���� �� �Ұ�����.
*/



//#include <stdio.h>
//int main(void)
//{
//	int arr1[3][4];
//	int arr2[7][9];
//	printf("����3, ����4 : %d\n", sizeof(arr1));
//	printf("����7, ����9 : %d\n", sizeof(arr2));
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
//			printf(" �迭 ��� a[%d][%d] : %d", i, j, a[i][j]);
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
//	}*/					// ��¹� ����(answer)
//}



// quiz 1. (2���� ���)
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


// quiz 2. (2���� ���)
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

// 2. answer (�� : ������ / �� : ������)
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

// (�� : ������ / �� : ������)
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