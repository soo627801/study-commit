// quiz
// 1. �� ���� �Է� �޾� ū ���� ����ϴ� �Լ��� ����ÿ�.
//#include <stdio.h>
//void func(int a, int b);
//int main(void)
//{
//	int a, b;
//	printf("�� ���� �Է��ϼ���...\n");
//	scanf("%d%d", &a, &b);
//	func(a, b);
//}
//void func(int a, int b)
//{
//	if (a > b)
//		printf("ū �� : %d\n", a);
//	else if (a < b)
//		printf("ū �� : %d\n", b);
//	else if (a == b)
//		printf("%d�� %d�� ���� �� �Դϴ�.\n", a, b);
//}

// 1. answer
// //#include <stdio.h>
//int main()
//{
//	int num1, num2;
//	printf("�� ���� ���ʴ�� �Է� : ");
//	scanf("%d%d", &num1, &num2);
//	if (num1 > num2)
//		printf("%d�� ū ���̴�.\n", num1);
//	if (num2 > num1)
//		printf("%d�� ū ���̴�.\n", num2);
//}


//#include <stdio.h>
//void Big_num()		// ��ȯ��ų �� ���� -> void
//{
//	int num1, num2;
//	printf("�� ���� ���ʴ�� �Է� : ");
//	scanf("%d%d", &num1, &num2);
//	if (num1 > num2)
//		printf("%d�� ū ���̴�.\n", num1);
//	if (num2 > num1)
//		printf("%d�� ū ���̴�.\n", num2);
//}
//int main()
//{
//	Big_num();
//}

//#include <stdio.h>
//void Big_num(int num1, int num2)
//{
//	if (num1 > num2)
//		printf("%d�� ū ���̴�.\n", num1);
//	if (num2 > num1)
//		printf("%d�� ū ���̴�.\n", num2);
//}
//int main()
//{
//	int num1, num2;
//	printf("�� ���� ���ʴ�� �Է� : ");
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
//	printf("�� ���� ���ʴ�� �Է� : ");
//	scanf("%d%d", &num1, &num2);
//	result = Big_num(num1, num2);
//	printf("%d�� ū ���̴�.\n", result);
//}


// 2. �Է� ���� ���� ¦������ Ȧ������ �Ǻ��ϴ� �Լ� ����
//#include <stdio.h>
//void func(i)
//{
//	if (i % 2 == 0)
//		printf("¦��\n");
//	else
//		printf("Ȧ��\n");
//}
//int main()
//{
//	int i;
//	printf("������ �Է��ϼ���...\n");
//	scanf("%d", &i);
//
//	func(i);
//}

// 2. answer
//#include <stdio.h>
//int main()
//{
//	int num1;
//	printf("���� �Է� : ");
//	scanf("%d", &num1);
//	if (num1 % 2 == 0)
//		printf("%d�� ¦����.\n", num1);
//	else
//		printf("%d�� Ȧ����.\n", num1);
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
//	printf("���� �Է� : ");
//	scanf("%d", &num1);
//	if (Hol_jjak(num1))
//		printf("%d�� ¦����.\n", num1);
//	else
//		printf("%d�� Ȧ����.\n", num1);
//}


//#include <stdio.h>
//int Hol_jjak(int num1)
//{
//	return num1 % 2;		// num1�� 2�� ���� ����� �ٷ� return ��Ŵ. -> ¦���� 0, Ȧ���� 1�� ��. -> ���� if������ ���� ��찡 Ȧ��, ���� �ƴ� ��찡 ¦���� �ٲ��� ��.
//}
//int main()
//{
//	int num1;
//	printf("���� �Է� : ");
//	scanf("%d", &num1);
//	if (Hol_jjak(num1))
//		printf("%d�� Ȧ����.\n", num1);
//	else
//		printf("%d�� ¦����.\n", num1);
//}


//#include <stdio.h>
//int Hol_jjak(int num1)
//{
//	return !(num1 % 2);		// num1�� 2�� ���� ����� �ٷ� return ��Ŵ. -> ������Ű�� ���� ¦��, ������ Ȧ���� ������ �� �� ����.
//}
//int main()
//{
//	int num1;
//	printf("���� �Է� : ");
//	scanf("%d", &num1);
//	if (Hol_jjak(num1))
//		printf("%d�� ¦����.\n", num1);
//	else
//		printf("%d�� Ȧ����.\n", num1);
//}


// 3. 3�� ����� �Ǻ��ϴ� �Լ��� ����� �� �Լ��� �̿��Ͽ� main���� 3�� ����� ����Ͻÿ�
// �Լ����� return ��Ű�� / ��ȯ ���Ѽ� main���� ���
//#include <stdio.h>
//int get()
//{
//	int num;
//	printf("������ �Է��ϼ���...");
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		return num;
//	else
//		exit();
//}
//int main()
//{
//	int num = get();
//	printf("��� : %d\n", num);
//}


//3. answer
//#include <stdio.h>
//int main()
//{
//	int num1;
//	printf("���� �Է� : ");
//	scanf("%d", &num1);
//	if (num1 % 3 == 0)
//		printf("%d�� 3�� ����̴�.\n", num1);
//}


//#include <stdio.h>
//int Three_Func(int num1)
//{
//	if (num1 % 3 == 0)
//		return 1;
//	else
//		return 0;		// else�� ���� ������ ������ �ƹ� ���̳� ��ȯ�Ǿ ������ �νĵǾ, 3�� ����� �ƴϾ 3�� ����� ��µ�. -> ��� ���� ���� �Ǵ� ���װ� �߻��ϱ� ������, ������ ������ 0�� ������� ��.
//}
//int main()
//{
//	int num1;
//	printf("���� �Է� : ");
//	scanf("%d", &num1);
//	if(Three_Func(num1))
//		printf("%d�� 3�� ����̴�.\n", num1);
//}


//#include <stdio.h>
//int Three_Func(int num1)
//{
//	return!(num1 % 3);
//}
//int main()
//{
//	int num1;
//	printf("���� �Է� : ");
//	scanf("%d", &num1);
//	if(Three_Func(num1))
//		printf("%d�� 3�� ����̴�.\n", num1);
//}


// 4. ������ ���ϴ� �Լ��� �����Ͻÿ�.
//#include <stdio.h>
//int get()
//{
//	int num;
//	printf("������ �Է��ϼ���...");
//	scanf("%d", &num);
//	return num;
//}
//int main()
//{
//	int num = get();
//	if (num < 0)
//		num *= -1;
//	printf("���� : %d", num);
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
//	printf("���� �Է� : ");
//	scanf("%d", &num1);
//	printf("��� : %d\n", Jul_Dae(num1));
//}


// 5. �Ųٷ� ���� ��ȯ�ϴ� �Լ��� �����Ͻÿ�.
// �Ųٷ� ���� ����� main �Լ����� ��� / ��ȯ ���Ѽ� main���� ���
//#include <stdio.h>
//int get()
//{
//	int i, temp, reverse = 0;
//	printf("�� �Է� : ");
//	scanf("%d", &i);
//	printf("��� : %d -> ", i);
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
//	printf("���� �Է� : ");
//	scanf("%d", &num1);
//	printf("��� : %d\n", Reverse_Num(num1));
//}



/* �迭
- �ε��� ��ȣ�� 0 ~ n-1�� ���� �ڵ����� �ο���.
- �ڷ����� �־�� ��� ���� ũ���� �޸𸮰� �� �� �ʿ����� �� �� �ִ�.
- ���� ���� �������� �޸𸮿� ���������� !!!!!!!! ������ �����Ͽ� ���� �ӵ��� ����Ŵ. (�Ϲ����� ������ �������� �����)

- ���� �ڷ����� ���� �� �ֱ� ������ �ڷ����� �� ��������� ��.

- �ڷ����� ���ٸ� []�� ���� �ε��� ���� �ǹ���.
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
//	printf("�� : %d\n", sum);
//	return 0;
//}



//#include <stdio.h>
//main()
//{
//	int arr[10];		// �迭 ������ �ʱ�ȭ�� �߿���
//	arr[0] = 1;
//	arr[1] = 2;
//	arr[2] = 3;
//	arr[3] = 4;
//	arr[4] = 5;
//	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//	/*printf("%d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);*/		// arr[5]�� ������ Ȯ���ǰ�, �޸� ���� ���� ������, ������ ���� ��µ�.
//}



//#include <stdio.h>
//int main(void)
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,5,6,7 };
//	int arr3[5] = { 1,2 };
//	int len1, len2, len3, i;
//
//	printf("arr1�� ũ�� : %d\n", sizeof(arr1));		// sizeof ������ ����� �迭�� ũ�⸦ ��ȯ
//	printf("arr2�� ũ�� : %d\n", sizeof(arr2));
//	printf("arr3�� ũ�� : %d\n", sizeof(arr3));
//
//	len1 = sizeof(arr1) / sizeof(int);				// �迭�� ���̸� ���
//	len2 = sizeof(arr2) / sizeof(int);
//	len3 = sizeof(arr3) / sizeof(int);
//	printf("arr1 : %d arr2 : %d arr3 : %d\n", len1, len2, len3);		// ������ ���
//
//	for (i = 0; i < len1; i++)						// �ݺ����� �̿��� arr1�� ���������� ������ ����
//		printf("%d", arr1[i]);
//	printf("\n");
//
//	for (i = 0; i < len2; i++)						// �ݺ����� �̿��� arr2�� ���������� ������ ����
//		printf("%d", arr2[i]);
//	printf("\n");
//
//	for (i = 0; i < len3; i++)						// �ݺ����� �̿��� arr3�� ���������� ������ ����
//		printf("%d", arr3[i]);
//	printf("\n");
//}



//#include <stdio.h>
//int main(void)
//{
//	char str[14] = "Good morning!";		// ���ڿ��� ������ ����ǥ "" �̿��ؼ� �����ֱ� (�߰�ȣ ��� x)
//
//	printf("%s \n", str);
//
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	char str[] = "Good morning!";		// ���ڿ��� �ǳ����� ���ڿ��� ������ �˸��� \0�� �ڵ����� ���� �ǹǷ� ���ڿ� 1���� ������. null ����!!!
//
//	printf("�迭�� ũ�� : %d \n", sizeof(str));
//	printf("%s \n", str);
//
//	return 0;
//}



#include <stdio.h>
int main(void)
{
	char str[] = "Good morning!";		// �迭�� ���̰� 14!
	
	printf("�迭�� ũ�� : %d \n", sizeof(str));
	printf("�� ���� ������ ��� : %c \n", str[13]);
	printf("�� ���� ������ ��� : %d \n", str[13]);

	str[12] = '?';						// str�� ����� ���ڿ� �����ʹ� ���� ����
	printf("%s \n", str);

	return 0;
}