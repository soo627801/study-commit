// while��

//#include <stdio.h>
//int main()
//{
//	int num;
//	for (num = 0; num < 3; num++)
//	{
//		printf("Hello world %d \n", num);
//	}
//	return 0;
//}

// for���� while������ ��ġ��

//#include <stdio.h>
//int main()
//{
//	int num = 0;		// �ʱ��
//	while (num < 3)
//	{
//		printf("Hello world %d \n", num);
//		num++;			// ������
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <conio.h>
//#define ESC		0x1b		// ��ó���� ���� (define - ����) -> esc��� Ű����� ������. ������ �Ұ����ϰ� ġȯ�ϴ� ����
//int main(void)
//{
//	char ch;
//	while ((ch = getch()) != ESC)		// esc Ű�� ������ ���� ������ ��.
//	{
//		if (ch >= 'a' && ch <= 'z')
//			ch = ch - 32;				// �빮�ڿ� �ҹ��ڴ� 32 ���̰� ��.
//		putch(ch);		// getch�� �ݴ� ����. �빮���� ��� (��������� �� �ᵵ �ٷ� ��µ�)
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <conio.h>
//#define ESC 0x1b
//int main(void)
//{
//	char ch;
//	while (1)		// ���ǽ� ��� ��� 1�� ����. �ٲ��� �ʰ� ����ؼ� ���̹Ƿ� ���� �ݺ��� �ǹ���. / while�� 1�� �ְ� ���ӹ����� ������ ���� ������ ����� ����ϴ� ��찡 ����.
//	{
//		ch = getch();
//		if (ch == ESC)		// esc�� ������ break�� ��������.
//			break;
//		if (ch >= 'a' && ch <= 'z')
//			ch = ch - 32;
//		putch(ch);
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//#define TRUE 1		// ��ó���� ������ �̿��ؼ� true, false�� �����ؾ� ��.
//int main(void)
//{
//	int i, j, sum = 0;
//	while (TRUE)		// 1 ��� true��� Ű���带 ����ص� ���ѹݺ��� ��.
//	{
//		printf("���Է�(1~100)");
//		scanf("%d", &i);
//		if (i >= 1 && i <= 100)		// 1~100�� ���� �ԷµǸ� break�� �������ͼ� for���� ���� �Էµ� ������ ���� �ջ���.
//			break;
//		printf("�߸� �Է�, �ٽ�");
//	}
//	for (j = 1; j <= i; j++)
//		sum += j;
//	printf("%d", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int i, j, flag, sum = 0;
//	flag = 1;		// while ���ǽĿ� ���� �̿��ϴ� ����. flag�� �̿��ؼ� switching ������ ����. flag�� � ���¸� ��Ÿ���� ����. ���� ���º��ٴ� ����Ī�ϴ� �뵵�� �� ���� ����. �����Ģ�� �ƴ϶� �Ϲ����̰� ���������� flag��� ������ �����. flag��� ������ ���� ����Ī �ȴٴ� ���� ��Ÿ�� �� �־ ���� flag�� �����.
//	while (flag)
//	{
//		printf("���Է�(1~100)");
//		scanf("%d", &i);
//		if (i >= 1 && i <= 100)
//			flag = 0;
//		else
//			printf("�߸� �Է�, �ٽ�");
//	}
//	for (j = 1; j <= i; j++)
//		sum += j;
//	printf("%d", sum);
//
//	return 0;
//}



// ���� ������
//#include <stdio.h>
//#define TRUE 1
//int main(void)
//{
//	int i, temp;
//	printf("�� �Է�");
//	scanf("%d", &i);
//	while (TRUE)
//	{
//		temp = i % 10;		// temp�� i�� 10���� ����� �������� ������.
//		i = i / 10;			// i���� ���� ������.
//		printf("%d", temp);
//		if (i == 0)			// i�� 0�� �ƴϸ� ���� ������ ��� �ݺ��ؼ� �������� ����ϸ� �������� ���� �ϳ��� ��µ�. ������ ���� �̿��ؼ� �ڸ����� �и� ���Ѽ� ���ڸ��� �������� �����ؼ� ����� ��.
//			break;
//	}
//	printf("\n");
//
//	return 0;
//}



/* do while�� (�� ���� �� �Ǵ�)
* ������ ����� (�����̾)
*/



//#include <stdio.h>
//int main(void)
//{
//	int su = 0, sum = 0;
//	do
//	{
//		su++;		// su�� 1 ������Ű��, while������ ���ǹ��� ������ �������� �Ǵ��Ͽ�, ������ �� ������ do�� �ݺ��ؼ� ������. do while������ �� ������ �ǹǷ� 10���� ������ �ǰ� ����. 11���� �� �Ѿ. ���ϴ� ���ڱ����� �ݺ��� ����� �� ����ϴ� ����
//		sum += su;
//	} while (su < 10);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



// quiz 1.

//#include <stdio.h>
//int main(void)
//{
//	int i, temp = 0;
//	printf("�� �Է�");
//	scanf("%d", &i);
//	while (1)
//	{
//		
//		if (i == 0)
//			break;
//	}
//	
//	printf("%d", temp);
//}


// 1. answer
//#include <stdio.h>
//#define TRUE 1
//int main()
//{
//	int i, temp, reverse = 0;
//	printf("�� �Է� : ");
//	scanf("%d", &i);
//	printf("��� : %d -> ", i);
//	while (TRUE)
//	{
//		temp = i % 10;		// 123�̶�� 10���� ������ ������ 3�� reverse�� ����ǰ�, 3�� 10�� ���ϰ� ������ 2�� �������� 32, 32�� 10�� ���ϰ� ������ 1�� �������� ���������� 321�̶�� ���� ����Ǿ� ��µ�.
//		reverse *= 10;
//		reverse += temp;
//		i = i / 10;
//		if (i == 0)
//			break;
//	}
//	printf("%d\n", reverse);
//}


// quiz 2.

//#include <stdio.h>
//int main(void)
//{
//	int i, sum = 0;
//	printf("�� �Է�");
//	scanf("%d", &i);
//	while (1)
//	{
//		sum += i % 10;
//		i = i / 10;
//		if (i == 0)
//			break;
//	}
//	printf("%d", sum);
//
//	return 0;
//}



// 2. answer
//#include <stdio.h>
//#define TRUE 1
//int main(void)
//{
//	int i, temp, sum = 0;
//	printf("�� �Է� : ");
//	scanf("%d", &i);
//	while (TRUE)
//	{
//		temp = i % 10;
//		sum += temp;
//		i = i / 10;
//		if (i == 0)
//			break;
//	}
//	printf("�� �ڸ����� �� : %d\n", sum);
//}



/* ��Ÿ���
- break�� �Ҽ� �Ǿ� �ִ� ��������� ���.
- countinue
*/


// ��ø while�� �ٲٱ�
//#include <stdio.h>
//int main(void)
//{
//	int su1, su2;
//	for (su1 = 1; su1 <= 2; su1++)
//	{
//		for (su2 = 1; su2 <= 5; su2++)
//		{
//			printf("su1 = %d su2 = %d\n", su1, su2);
//			if (su2 == 2)
//				break;
//		}
//		printf("%d * %d = %d\n", su1, su2, su1 * su2);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int su1 = 1, su2 = 1;
//	while (su1 <= 2)
//	{
//		while (su2 <= 5)
//		{
//			printf("su1 = %d su2 = %d\n", su1, su2);
//			su2++;
//			if (su2 > 2)
//				break;
//		}
//		if (su2 <= 2)
//			continue;
//		printf("%d * %d = %d\n", su1, su2, su1 * su2);
//		su1++;
//	}
//	return 0;
//}


// ��ø while. answer
//#include <stdio.h>
//int main(void)
//{
//	int su1 = 1, su2;
//	while (su1 <= 2)
//	{
//		su2 = 1;		// su2�� �ʱ�ȭ�� ���� while �ȿ� �־��ָ� ���� while�� �ٽ� 1�� �ʱ�ȭ �Ǿ su2=1���� ���۵�.
//		while (su2 <= 5)
//		{
//			printf("su1 = %d su2 = %d\n", su1, su2);
//			if (su2 == 2)
//				break;
//			su2++;
//		}
//		printf("%d * %d = %d\n", su1, su2, su1 * su2);
//		su1++;
//	}
//}