//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 1; su < 5; su++)
//	{
//		if (su == 3)
//		{
//			continue;		// continue;�� ������ �ٷ� �ݺ� ���� for�� ���ư�. -> 3�� ��µ��� ����. / 3�� ����ϰ� �ʹٸ�, ���� �ڵ带 continue; ������ ��ġ�� �ٲ��ָ� 3�� ����� ��.
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
//		ch = getch() - 32;		// ��ҹ��� ��� ���� 32�� ���ֱ� ������ �ҹ��ڴ� �빮�ڷ� ����� �� ������, �빮�ڴ� Ư�����ڵ��� ��µ�.
//		putch(ch);
//		if (ch != 'q' && ch != 'Q')		// �빮�� Q�� ������ Ư�����ڰ� ������ ������ ���� �Ǿ ��� �����.
//			continue;
//		else
//			exit();
//	}
//}



// quiz 1. � ���� ����� ���ϴ� ���α׷��� �ۼ��Ͽ���

//#include <stdio.h>
//int main(void)
//{
//	int i, j = 1;
//	printf("����� ���Ϸ��� ���� �Է��ϼ���...");
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
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//	printf("%d�� ��� :", num);
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


// quiz 2. 1�������� �Էµ� � ������ ���� �ִ� �Ҽ��� ã�� ���α׷��� �ۼ��϶�.
// ����� ������ ���ؼ� 2�� �̻��̸�..

// i�� 9�� �ԷµǾ��ٸ�, k��� ������ 1���� 9�� �� ������ j��� ������ �������� �� 0�� �Ǹ�, count�� 1�� ������. j�� k�� �Ȱ����������� �ݺ��ϰ� count�� 2���, k�� ����ϰ�, count�� 2�� �ʰ��Ѵٸ� ������� �ʰ� k�� 1�� ������.
//#include <stdio.h>
//int main(void)
//{
//	int i, j = 1, k = 1, count = 0;
//	printf("�� �Է� : ");
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


// quiz 2. answer (��ø for�� ���)
//#include <stdio.h>
//int main(void)
//{
//	int i, j, num, cnt = 0;
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//	printf("%d������ �Ҽ� :", num);
//	for (i = 2; i <= num; i++)		// 1�� �Ҽ����� ���ܵǱ� ������ 2���� // �Է��� ��
//	{
//		for (j = 2; j <= num; j++)		// 1�� ��� ���� ����̱� ������ 2���� // ����� ã�� ��
//		{
//			if (i % j == 0)
//				cnt++;
//		}
//		if (cnt == 1)
//			printf("%3d", i);
//		cnt = 0;		// ���� ���� ��� ���� �ľ��� ���� 0���� ����
//	}
//	printf("\n");
//}


// quiz 3.  1���� 1000������ �ڿ����߿��� 4�� ����� 6���� ����� �������� 1�� ���� ���� ����϶�.

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
//	printf("��� : %d", sum);
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
//		if (num % 4 == 1 && num % 6 == 1)		// (num % 12 == 1)�� �ڵ带 �ۼ����� �ʰ� �����ϱ�
//			sum += num;
//		num++;
//	}
//	printf("��� : %d\n", sum);
//}



// quiz 4.  �μ��� �ּ� ������� �ִ� ������� ���ϴ� ���α׷��� �ۼ��϶�.
// �� ���� i�� �������� �� ��� 0�̸� i�� ����� -> ������� �����ϴٺ��� ���������� ���������� ����� ������� �ִ�����, �ּҰ������ ������ �̿��ؼ� ���ϸ� �� (�˻� ����)



//#include <stdio.h>
//int main(void)
//{
//	int a, b, i = 1, max = 0, min = 0;
//	printf("�� ���� �Է��ϼ���...");
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
//	printf("�ִ����� : %d\n", max);
//
//	return 0;
//}

// quiz 4. answer
//#include <stdio.h>
//int main(void)
//{
//	int num1, num2, max, min, i = 1;		// ����� ���� i�� 1�� �ʱ�ȭ
//	printf("�� ���� ���ʴ�� �Է� : ");
//	scanf("%d%d", &num1, &num2);
//	while (i <= num1)		// num2�� �����ص� ��� ����.
//	{
//		if (num1 % i == 0 && num2 % i == 0)
//			max = i;		// ����� ����. �������� ����Ǵ� ����� �ִ������� �Ǵ� ����.
//		i++;
//	}
//	min = num1 * num2 / max;		// �ּҰ���� ���ϴ� ����.
//	printf("�ִ����� : %d\n�ּҰ���� : %d\n", max, min);
//}



// quiz. �� 100���� ����Ǿ� �ִ� â�� �ϼ� 1���� �㰡 �ִ�. �� �� ������ �Ϸ翡 20g���� ���� �԰�, 10��(10, 20, 30)���� ���� ���� 2�辿 �����Ѵ�.��ĥ ���� â���� ���� ��� ���� ���̰� �ɱ�. �׸��� ��� �� �� ���� �ΰ� ? (�� �� �� = 1kg)(���� ���� �� 2�� �����ϴ� ����

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
//		/*printf("%d��\n�� %d����\n�� %dg\n", day, m, r);*/
//		
//		if (r <= 0)
//			break;
//
//		day++;
//	}
//	printf("%d��\n�� %d����\n", day, m);
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
//	printf("���� �� ���� �� : %d�� / �� : %d����\n", day, mouse);
//}