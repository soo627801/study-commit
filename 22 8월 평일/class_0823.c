// ���� (���� ����)
//#include <stdio.h> //printf(), scanf()
//#include <stdlib.h> //exit(), system()
//int main(void) {
//	int num, kor, eng, math, sum;
//	double avg;
//	char name[10];
//
//	while (1) {
//		printf("=================================\n");
//		printf("\tM e n u\n");
//		printf("=================================\n");
//		printf("\t1. �л��̸� �Է�\n");
//		printf("\t2. ���� 3���� �Է�\n");
//		printf("\t3. �л��̸� ���\n");
//		printf("\t4. �հ� ���\n");
//		printf("\t5. ��� ���\n");
//		printf("\t6. ����\n");
//		printf("=================================\n");
//
//		scanf("%d", &num);
//
//		switch (num) {
//		case 1:
//			printf("�л� �̸��� �Է��ϼ���...\n");
//			scanf("%s", &name);
//			break;
//		case 2:
//			printf("3������ ������ �Է��ϼ���...\n");
//			scanf("%d%d%d", &kor, &eng, &math);
//			break;
//		case 3:
//			printf("�л� �̸� : %s\n", name);
//			break;
//		case 4:
//			sum = kor + eng + math;
//			printf("�հ� : %d\n", sum);
//			break;
//		case 5:
//			avg = sum / 3.0;
//			printf("��� : %.2f\n", avg);
//			break;
//		case 6:
//			exit(1);
//		}
//	}
//}



// answer
//#include <stdio.h> //printf(), scanf()
//#include <stdlib.h> //exit(), system()
//#include <conio.h>
//int main(void) 
//{
//	int num, kor, eng, math, sum;
//	double avg;
//	char name[20];
//
//	while (1) {
//		printf("=================================\n");
//		printf("\tM e n u\n");
//		printf("=================================\n");
//		printf("\t1. �л��̸� �Է�\n");
//		printf("\t2. ���� 3���� �Է�\n");
//		printf("\t3. �л��̸� ���\n");
//		printf("\t4. �հ� ���\n");
//		printf("\t5. ��� ���\n");
//		printf("\t6. ����\n");
//		printf("=================================\n");
//
//		scanf("%d", &num);
//
//		switch (num) {
//		case 1:
//			printf("�л� �̸� �Է�\n>>> ");
//			scanf("%s", name);		// ���ڿ������� &�� �����ص� ��.
//			break;
//		case 2:
//			printf("3������ ������ ���ʴ�� �Է�\n>>> ");
//			scanf("%d%d%d", &kor, &eng, &math);
//			break;
//		case 3:
//			printf("�л� �̸� : %s\n", name);
//			getch(); break;
//		case 4:
//			sum = kor + eng + math;
//			printf("�հ� : %d\n", sum);
//			getch(); break;
//		case 5:
//			avg = (double)sum / 3;
//			printf("��� : %.2f\n", avg);
//			getch(); break;
//		case 6:
//			exit(1);
//		}
//		system("cls");
//	}
//}



// goto �� - �������� �ٷ��� ����
//#include <stdio.h>
//int main(void)
//{
//	int num;
//	printf("�ڿ��� �Է� : ");
//	scanf("%d", &num);
//	
//	if (num == 1)
//		goto ONE;
//	else if (num == 2)
//		goto TWO;
//	else
//		goto OTHER;
//
//ONE:
//	printf("1�� �Է��ϼ̽��ϴ�.\n");
//	goto END;
//TWO:
//	printf("2�� �Է��ϼ̽��ϴ�.\n");
//	goto END;
//OTHER:
//	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̱���.\n");
//END:
//
//	return 0;
//}



/* �ݺ� ��� (= �ݺ� ��ȯ��)
���ӵ� ������ �ڵ带 �ѹ��� �ݺ���ȯ ��Ű�� ����
���� : for, while, do while
���� : �ڵ带 ����ȭ �� �� �ִ�.

�ݺ��������� �ٽ� : ��Ģ�� ã�ƶ�!!!!! (������ ��� �󸶳� �ݺ���ų��)

1. �Ȱ��� ��ġ�� �Ȱ��� ���� �ݺ� -> ������ �ݺ�
2. ������ �������� ���/�϶� -> �ܰ��� �ݺ�
3. ��Ģ���� �� ã�� �ݺ�

�ʱⰪ : �ݺ��� ���۵Ǵ� ������ �� (= ���۰�)
���ǽ� : �ݺ��� ���� ���� ���� ��
������ : ���ǽ��� ������ ���� ���� ����

���ӹ����� ���� ���� ��� �߰�ȣ�� �� �����ֱ�
�߰�ȣ�� �������� ���װ� �߻��� (�ι�° ���ӹ����� �������� ó�� �Ǿ �� ���� �����)
for �ڿ��� �����ݷ��� ���� ���� ����. ���� ���ǽĿ� ��� ���� ���ӹ����� �� ���� �����.
*/

//#include <stdio.h>
//int main(void)
//{
//	int su, sum = 0;
//
//	for (su = 1; su <= 10; su++)		// �ܰ������� ��� / �� ���� �����ݷ��� ����. ���� ������ ��ɾ���. �ʱⰪ�� ���۵� �� 1ȸ�� ����. ���ǽĿ� ���̸� �ݺ��� �����ϰ� �����̸� �ߴ���. �������� ��ġ ��ġ ��� ���� (�����̾) / 1) �ʱⰪ 2) ���ǽ� 3) ���ӹ��� 4) ������ 5) ���ӹ����� ������ �� ������ �ݺ� -> ������ �Ǹ� ���ӹ����� �������� �ʰ� ���� �������� �Ѿ. / �����ݷ��� ������ 11�� ��µ�
//		sum += su;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int su, sum = 0;
//
//	for (su = 10; su >= 1; su--)		// �ܰ������� �ϰ� / ���迬����� �� ���� ��. �ܰ��� ��½ÿ��� �����Ŀ��� +�� �̿��߰�, �ܰ��� �ϰ��ÿ��� -�� �̿����� / for �ڿ� �����ݷ��� ���� ��ǻ�ʹ� ��� �ݺ��� ������ ���� ������ ������� �ʾƼ� �ƹ��͵� ������� ����. / �����ݷ��� ������ 0�� ��µ� / �ݺ� ������ �ݺ��� Ƚ���� ����
//		sum += su;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int su, sum = 0;
//
//	for (su = 1; su <= 10; su++)		// 10ȸ �ݺ�
//	{
//		if (su % 2 == 1)
//			sum += su;					// ��Ģ���� �� ã�� ��쿡 ��� ex. �Ҽ��� ���ض� �� (������ �������� �������� ����)
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int su, sum = 0;
//
//	for (su = 1; su <= 10; su++)		// 5ȸ �ݺ�
//	{
//		if (su % 2 == 1)
//		{
//			sum += su;
//			su++;		// 1�� ������ �Ŀ� �ٽ� ���ǽ����� �ö󰡱� ������ 5ȸ�� �ݺ���. Ȧ���� �ݺ��� ������ �� ����.
//		}
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int su, sum = 0;
//
//	for (su = 1; su <= 10; su += 2)		// �����Ŀ��� �ƿ� 2�� ���� ��Ŵ -> Ȧ���� ������Ŵ / ¦���� 0���� 2��, 3�� ����� 0���� 3�� ������Ű�� ��
//		sum += su;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int su = 1, sum = 0;
//
//	for (; su <= 10;)		// ���� ����� ���ÿ� �ʱ��..
//		sum += su++;		// �������� ���ӹ���� ���ÿ�.. �־ �ʱ�İ� �������� ������ �� ����. (��ġ�� �޶���..)
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int su = 1, sum = 0;
//
//	for (;;)		// ���� ���� ���� ���ǽ��� ���� ������ ���ѹݺ���. ���� ������ {}�� �̿��ؼ� ������ ���ѹݺ��� �ǰ� �ִٴ� ������ �� �� ����. ���̽㿡���� for�� �̿��ؼ� ���ѹݺ��� ������ �� ����.
//	{
//		sum += su++;
//		printf("sum = %d\n", sum);
//	}
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int su1, su2, odd_sum = 0, even_sum = 0;
//
//	for (su1 = 1, su2 = 2; (su1 <= 100 && su2 <= 100); su1 += 2, su2 += 2)		// �޸� �����ڸ� �̿��ؼ� ���� ���� ���� �� ����.
//	{
//		odd_sum += su1;
//		even_sum += su2;
//	}
//
//	printf("Ȧ���� �� = %d\n", odd_sum);
//	printf("¦���� �� = %d\n", even_sum);
//}



// quiz 1.
//#include <stdio.h>
//int main(void)
//{
//	int su;
//
//	for (su = 1; su <= 30; su++)
//	{
//		if (su % 5 == 0)
//			printf("%d\n", su);
//
//		else					// �ִ��� ����ȭ �ϱ�
//			printf("%d\t", su);
//	}
//}


// quiz 1. answer
//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 1; su <= 30; su++)
//	{
//		printf("%d\t", su);
//		if (su % 5 == 0)
//			printf("\n");
//	}
//}



// quiz 2.
//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 1; su <= 4; su++)
//	{
//		printf("%d. Hello\n", su);
//	}
//	return 0;
//}



// quiz 2. answer
//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 1; su <= 4; su++)
//		printf("%d. Hello\n", su);
//}



// quiz 3.
//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 65; su < 90; su++)
//	{
//		printf("%c, ", su);
//	}
//	su = 90;
//	printf("%c\n", su);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int su;
//	for (su = 65; su <= 90; su++)
//	{
//		printf("%c, ", su);
//	}
//	printf("\b\b\n");
//
//	return 0;
//}



// quiz 3. answer

//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	for (ch = 'A'; ch <= 'Y'; ch++)		// Z�ڿ� �޸��� �� �������� Z�� ���� �������.
//		printf("%c, ", ch);
//	printf("Z\n");
//}

//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	printf("A");
//	for (ch = 'B'; ch <= 'Z'; ch++)		
//		printf(", %c", ch);
//	printf("\n");
//}

//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	for (ch = 'A'; ch <= 'Z'; ch++)		
//		printf("%c, ", ch);
//	printf("\b\b \n");		// \b�ڿ� ������ �־ ������ \n�� �־������.
//}



/* ��ø for��
for�� �ȿ� ���ӹ��� for������ ������.
���� for���� �� ĭ �����Ϸ��� ���� for���� ������ ����Ǿ�� ��.
*/



//#include <stdio.h>
//int main(void)
//{
//	int su1, su2, sum = 0;
//
//	for (su1 = 1; su1 <= 10; su1++)			// 1~10���� 10ȸ. ���� for���� 1ȸ ����Ǵ� ���� ���� for���� 10ȸ ����ǹǷ� 10*10=100ȸ �����.
//	{
//		for (su2 = 1; su2 <= 10; su2++)		// 1~10���� 10ȸ
//			sum += 1;
//	}
//	printf("sum = %d\n", sum);
//}



//#include <stdio.h>
//int main(void)
//{
//	int su1, su2;
//
//	for (su1 = 1; su1 <= 3; su1++)		// ���� for���� ������ �� ������ �ݺ�
//	{
//		for (su2 = 1; su2 <= 3; su2++)
//			printf("su1 = %d\t su2 = %d\n", su1, su2);
//	}
//}



// 1. ������

//#include <stdio.h>
//int main(void)
//{
//	int su1, su2;
//	printf("---------------------------------------------------------------\n");
//	printf("\t\t    ****** �� �� �� ******\n");
//	printf("---------------------------------------------------------------\n");
//	printf("2��\t3��\t4��\t5��\t6��\t7��\t8��\t9��\n");
//	printf("---------------------------------------------------------------\n");
//
//	for (su1 = 1; su1 <= 9; su1++)
//	{
//		for (su2 = 2; su2 <= 9; su2++)
//			printf("%d*%d=%d\t", su2, su1, su1 * su2);
//		printf("\n");
//	}
//}


// 2. �������� �ԱݵǴ� �ݾ�, �� ������ �� �� ���� (���̵� ��)




// 3. 1~1000�� ���� ���ϰ� ���� 3�� ����̸鼭 5�� ����� �ƴ� ���� ��� ���ؼ� ��ü���� ���ֱ� (���̵� ����)

#include <stdio.h>
int main(void)
{
	int su, sum, sum1, sum2;
	
	for (su = 1; su <= 1000; su++)
	{
		sum1 += su;

		
	}
	if ((su % 3 == 0) & (su % 5 != 0))
		sum2 += su;

	sum = sum1 - sum2;

	printf("��� : %d", sum);

	return 0;
}


// 4. (���̵� �߻�)