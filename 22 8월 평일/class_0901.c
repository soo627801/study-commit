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

// 3. answer (�� : ������, ¦���������� ������, Ȧ���������� ������ -> ���� ���� for�� ��ġ�� �ٲ�)
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
// ��Ģ : ��� ���� �ε����� ���ؼ� 5�� ������ ���� �������� 1�� ���ϸ� ��.
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



/* ������ -> �޸� ���� �Ҵ翡 ���� �׸����� �׷����鼭 �����ϸ� ���� !!!
- �Ϲ� ���� : ���� ����
- ������ ���� : ���� ���� / ������ �ּ� ������ ���� �ִ� �Ǵٸ� ������ �־, �� ������ �̿��ؼ� ���������� ������.
- ������ �ڷ����� ���� �����ϴ� �޸� ������ �޶�����. (�������� 4����Ʈ�� �Ҵ������, �����δ� 1����Ʈ ���� ������.)
- ������ �ּҸ� ����ϴ� ������ : & !!!!!! (�߿���)

*/


//#include <stdio.h>
//int main(void)
//{
//	int num = 5;			// �Ϲ� ���� num, ������ ���� *pnum / ������ �������� �޸𸮿� �Ҵ�Ǵ� �ּ� �������� �����. / 4���� �ּ� �� ù��° �ּ� ������ ���� ����. ������ �ڷ����� ���ؼ� ������ ���� �� �� ����.
//	int* pnum = &num;		// ���� num�� �ּҸ� ������ ������ ���� pnum�� �Ҵ�
//	printf("pnum : %d\n", pnum);		// ����� ���� ������ ��
//	printf("&num : %d\n", &num);		// �����ڸ� ���ؼ� ����� ���� ������ ��
//	printf("*pnum : %d\n", *pnum);		// *�� �� �پ������� ���⸸ ����Ű�� �ִ� ����. *�� ������ ������ ����Ű�� �޸� �ּ� ������ �� ����. / pnum�� ����Ű�� �ִ� ���� ����Ǿ� �ִ� ���� ���
//	printf("num : %d\n", num);			// num�� �����ϰ� �ִ� ���� ���
//}


//#include <stdio.h>
//int main(void)
//{
//	int num = 5;
//	double su = 3.14;
//	int* pnum;		// ������ �����ͺ��� pnum�� ������
//	double* psu;	//������ ������ ���� psu�� ������
//	pnum = &num;	// ���� num�� �ּ� ���� ������ ������ ���� pnum�� �Ҵ�
//	psu = &su;		// ���� su�� �ּ� ���� ������ ������ ���� psu�� �Ҵ�
//	printf("pnum : %d\n", pnum);
//	printf("*pnum : %d\n", *pnum);
//	printf("*psu : %f\n", *psu);
//}


//#include <stdio.h> // ���� ������ ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� ��. -> ��ġ���� ������ �������� ������ ���� ���̳� �ٸ� ����� ����.
//int main(void)
//{
//	int num = 5;
//	double su = 3.14;
//	int* pnum;		// ������ �����ͺ��� pnum�� ������
//	double* psu;	//������ ������ ���� psu�� ������
//	pnum = &su;	// ���� num�� �ּ� ���� ������ ������ ���� pnum�� �Ҵ�
//	psu = &num;		// ���� su�� �ּ� ���� ������ ������ ���� psu�� �Ҵ�
//	/*printf("pnum : %d\n", pnum);*/
//	printf("*pnum : %f\n", *pnum);
//	printf("*psu : %d\n", *psu);
//}


// �ּҴ� �����̱� ������ ������ �� ���� �޶���. (�Ҵ�Ǵ� ��ġ�� �޶���) �ּҸ��� 4�� ���̰� ������ ����(�������� �������� �Ҵ�Ǳ� ������)
//#include <stdio.h>
//int main(void)
//{
//	int i = 10;
//	char c = 69;
//	float f = 12.3;
//
//	printf("i�� �ּ� : %u\n", &i);		// ���� i�� �ּ� ���
//	printf("c�� �ּ� : %u\n", &c);		// ���� c�� �ּ� ���
//	printf("f�� �ּ� : %u\n", &f);		// ���� f�� �ּ� ���
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int num = 10;
//	int* pnum = &num;		// pnum�� num�� ����Ų��
//	*pnum = 20;				// pnum�� ����Ű�� ������ 20�� �����Ѵ�.
//	printf("%d\n", *pnum);	// pnum�� ����Ű�� ������ ����� �� ���
//	printf("%d\n", num);
//}


// �ڷ����� ������ ���� �������� ������ �� ������ ���� �ϳ����� �����ؼ� ������ �� ����. (�ڷ����� ���� ��쿡��)
//#include <stdio.h>
//int main(void)
//{
//	int num1 = 100, num2 = 100;
//	int* pnum;
//
//	pnum = &num1;		// ������ pnum�� num1�� ����Ŵ
//	(*pnum) += 30;		// num1 += 30;�� ����
//
//	pnum = &num2;		// ������ pnum�� num2�� ����Ŵ
//	(*pnum) -= 30;		// num2 -= 30;�� ����
//
//	printf("num1 : %d, num2 : %d\n", num1, num2);
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	/*int* p = NULL;*/		// null�� �ʱ�ȭ �Ǿ �ּҰ� ���� ������ ������� ���� -> �̷� ������ ������� ���� !
//	int *p;			// ������ p�� �ʱ�ȭ�� �ȵǾ� ����
//	*p = 100;		// ������ ���� p�� ����Ű�� ���� 100�� �־�� -> ��� ����Ű���� �𸣱� ������ ���� �߻�. // int *p = NULL;�� �̿��ؼ� NULL�� �ʱ�ȭ�ϸ� ������ �߻����� ����. ������ �ʱ�ȭ���� ������ ���� ���� ������ �߻���.
//	// p = 100; �̶�� ������ �ڵ�. 100�̶�� �޸��� �ּҰ� ���� Ȯ���� ����.
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
//	pd = &i;		// ����! double�� �����Ϳ� int�� ������ �ּҸ� ����
//	*pd = 36.5;		// i�� �Ҵ� ���� �޸𸮸� �Ѿ�� ������ ���� ���� ������ �߻���.
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
//	printf("\n ���� ch1�� �ּҴ� %d�����̴�.", &ch1);
//	printf("\n ���� ptr�� �ּҴ� %d�����̴�.", ptr);
//	printf("\n ���� *ptr�� ������ %c�̴�.", *ptr);
//	printf("\n ���� ch2�� ������ '%c'�̴�.\n", ch2);
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
//	pc = &vc; /* ������ ������ ���� pc�� vc�� �ּҰ��� �Ҵ���*/
//
//	printf("\n pc-1 = %d���� pc = %d���� pc+1 = %d����", pc - 1, pc, pc + 1);
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int vi = 123, *pi;
//
//	pi = &vi; /* ������ ������ */
//
//	printf("\n pi-1 = %d���� pi = %d���� pi+1 = %d����", pi - 1, pi, pi + 1);		// �ڷ����� ����(int -> 4)��ŭ �ּҿ��� -4, +4�� ��.
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
//	printf("������ ������ ũ�� : %d\n", sizeof(a));		// ������ -> 1
//	printf("�Ǽ��� ������ ũ�� : %d\n", sizeof(b));		// �Ǽ��� -> 8
//	printf("������ ������ ������ ũ�� : %d\n", sizeof(pa));	// ������ ������ ������ ������ ���Ƿ� 4����Ʈ�� �Ҵ��. / �����͸� ������ ������ ���� Ȯ���ϴ� ������ �ʿ��ؼ� ������ ������ �ڷ����� ��������. -> ������ ������ �� �� ���� (4����Ʈ / 8����Ʈ ��)
//	printf("������ �Ǽ��� ������ ũ�� : %d\n", sizeof(pb));
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
//		printf("�迭�� �ּ� %d, �迭�� �� %d\n", p + i, *(p + i));
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
//		printf("�迭�� �ּ� %d, �迭�� �� %d\n", a + i, *(a + i));
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
//	(*p++); // *(p++); �� ���� �ǹ�
//	printf("(4) a = %d, *p = %d, *(p+1) = %d\n", a, *p, *(p + 1));
//	return 0;
//}



// Call by value (cbv) : ���� ���� ���� ���
//#include <stdio.h>
//void ex_func(int sa, int sb);
//int main(void)
//{
//	int ma = 100, mb = 200;
//	ex_func(ma, mb);
//	printf("��2 : %d %d\n", ma, mb);
//	return 0;
//}
//void ex_func(int sa, int sb)
//{
//	sa += 5;
//	sb += 5;
//	printf("��1 : %d %d\n", sa, sb);
//}



// Call by reference (cbr) : �ּҿ� ���� ����
//#include <stdio.h>
//void int_swap(int* x, int* y);
//int main(void)
//{
//	int a = 100, b = 200;
//	printf("��ȯ �� : a = %d, b = %d\n", a, b);
//	int_swap(&a, &b);			// �Լ��� ȣ���� �� �ּҰ��� �̿���
//	printf("��ȯ �� : a = %d, b = %d\n", a, b);
//	return 0;
//}
//void int_swap(int* x, int* y)	// �����͸� �̿���
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
//	printf("��ȯ ���� ��Ʈ�� : %s\n", string);
//	convertToUppercase(string);
//	printf("��ȯ ���� ��Ʈ�� : %s\n", string);
//	return 0;
//}
//void convertToUppercase(char* s)		// ������ ������ ���� / �ѹ��� �������� �����͸� ���� �� ��� �Լ��� �̿��ؼ� �ּҰ��� ������ ������.
//{
//	while(*s != '\0')		// �ι��ڶ� ���� ������ ��
//	{
//		if (*s >= 'a' && *s <= 'z')		// �ҹ��ڸ� �빮�ڷ� �ٲ� (�������� �ڵ� ���Ե� �ι��ڱ��� �ݺ�)
//			*s = *s - 32;		// ASCII �빮�� ��ȯ
//		++s;		// ���� ���ڷ� ������ ����
//	}
//}