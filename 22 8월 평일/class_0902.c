/*
- �Ϲ� ������ �ڷ����� �´� �����͸� ������ �� ����
- �迭�� �ϳ��� ������ Ÿ�Կ� �´� �����͵��� �׷�ȭ�� �� ����
- ���̽��� ����Ʈ : ���� �ٸ� �ڷ����� �����͸� �׷�ȭ�� �� ����
- ����ü : ���̽��� ����Ʈ�� �����.

- ����ü ������ ���ؼ� Ʋ�� ���� �����.
*/

//#include <stdio.h>
//#include <string.h>
//struct student		// ����ü ������ ������ϰ� �����Լ� ���̿� ����.
//{
//	int number;
//	char name[10];
//	double grade;
//};
//int main(void)
//{
//	struct student s;		// �Ϲ� ������ �������� ���ؼ� struct�� �����. / student��� �������� s��� ������ �̿��Ѵٴ� ��
//	
//	s.number = 20190001;	// s��� ���� �ȿ� number��� ����� �����͸� ������. (number��� �Ϲ� �������� ����ü �������� �����ϱ� ���ؼ� ����ü ������ ����� ��.)
//	strcpy(s.name, "ȫ�浿");		// �迭 ������ ���ڿ��� �ٷ� ������ �� ����. -> �����ϴ� ����� �迭 �ȿ� ���� �ٿ��ֱ� ��ĸ��� ����ؾ� ��. �׷� ����� ���� �Լ� strcpy�� �����. / �����Լ����� ������ �ǰ��� �޸𸮰� �Ҵ�Ǳ� ������ ���� �����͸� ������ �� ��� ���� �ٿ��ֱ⸦ �����. ��, scanf�� �̿��ϴ� �� ��� ����.
//	s.grade = 4.3;
//
//	printf("�й� : %d\n", s.number);
//	printf("�̸� : %s\n", s.name);
//	printf("���� : %f\n", s.grade);
//	return 0;
//}


//#include <stdio.h>
//struct student
//{
//	int number;
//	char name[10];
//	double grade;
//};
//int main(void)
//{
//	struct student s;					// �����Լ��� ���Ժο� ����
//
//	printf("�й��� �Է��Ͻÿ� : ");
//	scanf("%d", &s.number);				// �޸� ������ �Ҵ�޴� ��ġ�� ������ �ؾ��ϱ� ������ & ����ؾ� ��.
//
//	printf("�̸��� �Է��Ͻÿ� : ");		// scanf�� �Է��� ���� ���� strcpy�� ������� �ʾƵ� ��.
//	scanf("%s", s.name);
//
//	printf("������ �Է��Ͻÿ�(�Ǽ�) : ");
//	scanf("%lf", &s.grade);				// double -> ������� lf ���
//
//	printf("�й� : %d\n", s.number);
//	printf("�̸� : %s\n", s.name);
//	printf("���� : %f\n", s.grade);
//	return 0;
//}


//#include <stdio.h>
//struct point
//{
//	int x;
//	int y;
//};
//int main(void)
//{
//	struct point p1 = { 10,20 };
//	struct point p2 = { 30,40 };
//
//	p2 = p1;								// ���� ����
//
//	//if (p1 == p2)							// �� -> ������ ���� !!! // �迭 ���������� �� �Ұ���
//	//printf("p1�� p2�� �����ϴ�.");
//
//	if ((p1.x == p2.x) && (p1.y == p2.y))	// �ùٸ� �� // ����ü ����� �迭�� �ε������� �񱳴� ����
//		printf("p1�� p2�� �����ϴ�.");
//}


//#include <stdio.h>
//#include <string.h>
//struct student
//{
//	int number;
//	char name[20];
//	double grade;
//};
//int main(void)
//{
//	struct student list[100];			// ����ü�� �迭 ����
//
//	list[2].number = 24;
//	strcpy(list[2].name, "ȫ�浿");
//	list[2].grade = 4.3;
//
//	printf("��ȣ : %d\n", list[2].number);
//	printf("�̸� : %s\n", list[2].name);
//	printf("���� : %f\n", list[2].grade);
//
//	return 0;
//}


//#include <stdio.h>
//#define SIZE 3
//struct student
//{
//	int number;
//	char name[20];
//	double grade;
//};
//int main(void)
//{
//	struct student list[SIZE];		// ������ �ϳ��� ������.
//	int i;
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("�й��� �Է��Ͻÿ� : ");
//		scanf("%d", &list[i].number);
//		printf("�̸��� �Է��Ͻÿ� : ");
//		scanf("%s", list[i].name);
//		printf("������ �Է��Ͻÿ�(�Ǽ�) : ");
//		scanf("%lf", &list[i].grade);
//	}
//	for (i = 0; i < SIZE; i++)
//		printf("�й� : %d, �̸� : %s, ���� : %f\n", list[i].number, list[i].name, list[i].grade);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h> // rand() : 0~32764 ������ �� �� �����ϰ� �ҷ� �� (���� �߻�) // Ư���� ������ �ؼ� ���� ���� ���� ��. -> ���� �Լ��� �ʱ�ȭ �� �ʿ䰡 ����.
//int main()
//{
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}


//#include <stdio.h>
//#include <stdlib.h> // rand() : 0~32764 ������ �� �� �����ϰ� �ҷ� �� (���� �߻�) // Ư���� ������ �ؼ� ���� ���� ���� ��. -> ���� �Լ��� �ʱ�ȭ �� �ʿ䰡 ����.
//#include <time.h>
//int main()
//{
//	int i;
//	srand(time(NULL)); // ���� �Լ��� �õ带 �ð��� �̿��ؼ� �ʱ�ȭ ����
//	for (i = 0; i < 5; i++)
//		printf("%d\n", rand());
//}

//#include <stdio.h>
//#include <stdlib.h> // rand() : 0~32764 ������ �� �� �����ϰ� �ҷ� �� (���� �߻�) // Ư���� ������ �ؼ� ���� ���� ���� ��. -> ���� �Լ��� �ʱ�ȭ �� �ʿ䰡 ����.
//#include <time.h>
//int main()
//{
//	int i;
//	srand(time(NULL)); // ���� �Լ��� �õ带 �ð��� �̿��ؼ� �ʱ�ȭ ����
//	for (i = 0; i < 5; i++)
//		printf("%d\n", rand()%5);
//}


// ���������� ���� �����
// ���׷��̵� �س����� (������ �ű�ų� ������ ���δٰų�..)
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int user, com, menu;
//	srand(time(NULL));		// ���� �Լ� �ʱ�ȭ
//	printf("---------------- ���������� ���� ----------------\n");
//	
//	while (1)				// ���ѹݺ�
//	{
//		printf("���� : 0, ���� : 1, �� : 2\n");
//		printf("user : ");
//		scanf("%d", &user);			// ������� ���������� �Է� �ޱ�
//		com = rand() % 3;
//		printf("com : %d\n", com);	// com�� ���������� �������� ���
//
//		if ((com + 1) % 3 == user)
//			printf("�̰���ϴ�.\n");
//		if ((user + 1) % 3 == com)
//			printf("�����ϴ�.\n");
//		if (user == com)
//			printf("�����ϴ�.\n");
//
//		printf("\n1) ������ ����ϱ� 2) ������\n");		// 1�� �Է� ������ ������ ��� �����ϱ� 2�� �Է� ������ break�� �����Ű��
//		scanf("%d", &menu);
//		printf("\n");
//
//		if (menu == 2)
//			break;
//	}
//	return 0;
//}


// sample
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int user, com;
	char menu[3][10] = { "����","����","��" };
	srand(time(NULL));
	printf("==== ���� ���� �� ���� ====\n");
	printf("0. ����    1. ����    2. ��\n>>> ");
	scanf("%d", &user);
	com = rand() % 3;
	printf("User : %s  VS  Com : %s\n", menu[user], menu[com]); // user�� com�� ������ �´��� ������
	if (user == com)
		printf("���º� !!!\n");
	else if (user - com == -2 || user - com == 1)
		printf("��  �� !!!\n");
	else
		printf("��  �� !!!\n");
	return 0;
}