/*
- 일반 변수는 자료형에 맞는 데이터만 저장할 수 있음
- 배열은 하나의 종류의 타입에 맞는 데이터들을 그룹화할 수 있음
- 파이썬의 리스트 : 서로 다른 자료형의 데이터를 그룹화할 수 있음
- 구조체 : 파이썬의 리스트와 비슷함.

- 구조체 선언을 통해서 틀을 먼저 잡아줌.
*/

//#include <stdio.h>
//#include <string.h>
//struct student		// 구조체 선언은 헤더파일과 메인함수 사이에 해줌.
//{
//	int number;
//	char name[10];
//	double grade;
//};
//int main(void)
//{
//	struct student s;		// 일반 변수와 구분짓기 위해서 struct를 사용함. / student라는 구조물을 s라는 변수를 이용한다는 뜻
//	
//	s.number = 20190001;	// s라는 변수 안에 number라는 멤버에 데이터를 대입함. (number라는 일반 변수인지 구조체 변수인지 구분하기 위해서 구조체 변수를 써줘야 함.)
//	strcpy(s.name, "홍길동");		// 배열 변수에 문자열을 바로 대입할 수 없음. -> 대입하는 방법은 배열 안에 복사 붙여넣기 방식만을 상용해야 함. 그런 기능을 가진 함수 strcpy를 사용함. / 메인함수에서 선언이 되고나서 메모리가 할당되기 때문에 직접 데이터를 저장할 수 없어서 복사 붙여넣기를 사용함. 단, scanf를 이용하는 건 상관 없음.
//	s.grade = 4.3;
//
//	printf("학번 : %d\n", s.number);
//	printf("이름 : %s\n", s.name);
//	printf("학점 : %f\n", s.grade);
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
//	struct student s;					// 메인함수의 도입부에 선언
//
//	printf("학번을 입력하시오 : ");
//	scanf("%d", &s.number);				// 메모리 공간을 할당받는 위치에 저장을 해야하기 때문에 & 사용해야 함.
//
//	printf("이름을 입력하시오 : ");		// scanf로 입력을 받을 때는 strcpy를 사용하지 않아도 됨.
//	scanf("%s", s.name);
//
//	printf("학점을 입력하시오(실수) : ");
//	scanf("%lf", &s.grade);				// double -> 서식제어문 lf 사용
//
//	printf("학번 : %d\n", s.number);
//	printf("이름 : %s\n", s.name);
//	printf("학점 : %f\n", s.grade);
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
//	p2 = p1;								// 대입 가능
//
//	//if (p1 == p2)							// 비교 -> 컴파일 오류 !!! // 배열 변수끼리도 비교 불가능
//	//printf("p1와 p2이 같습니다.");
//
//	if ((p1.x == p2.x) && (p1.y == p2.y))	// 올바른 비교 // 구조체 멤버와 배열의 인덱스끼리 비교는 가능
//		printf("p1와 p2이 같습니다.");
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
//	struct student list[100];			// 구조체의 배열 선언
//
//	list[2].number = 24;
//	strcpy(list[2].name, "홍길동");
//	list[2].grade = 4.3;
//
//	printf("번호 : %d\n", list[2].number);
//	printf("이름 : %s\n", list[2].name);
//	printf("성적 : %f\n", list[2].grade);
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
//	struct student list[SIZE];		// 변수를 하나만 선언함.
//	int i;
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("학번을 입력하시오 : ");
//		scanf("%d", &list[i].number);
//		printf("이름을 입력하시오 : ");
//		scanf("%s", list[i].name);
//		printf("학점을 입력하시오(실수) : ");
//		scanf("%lf", &list[i].grade);
//	}
//	for (i = 0; i < SIZE; i++)
//		printf("학번 : %d, 이름 : %s, 학점 : %f\n", list[i].number, list[i].name, list[i].grade);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h> // rand() : 0~32764 범위의 수 중 랜덤하게 불러 옴 (난수 발생) // 특정한 연산을 해서 나온 값을 가져 옴. -> 랜덤 함수를 초기화 할 필요가 있음.
//int main()
//{
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}


//#include <stdio.h>
//#include <stdlib.h> // rand() : 0~32764 범위의 수 중 랜덤하게 불러 옴 (난수 발생) // 특정한 연산을 해서 나온 값을 가져 옴. -> 랜덤 함수를 초기화 할 필요가 있음.
//#include <time.h>
//int main()
//{
//	int i;
//	srand(time(NULL)); // 랜덤 함수의 시드를 시간을 이용해서 초기화 해줌
//	for (i = 0; i < 5; i++)
//		printf("%d\n", rand());
//}

//#include <stdio.h>
//#include <stdlib.h> // rand() : 0~32764 범위의 수 중 랜덤하게 불러 옴 (난수 발생) // 특정한 연산을 해서 나온 값을 가져 옴. -> 랜덤 함수를 초기화 할 필요가 있음.
//#include <time.h>
//int main()
//{
//	int i;
//	srand(time(NULL)); // 랜덤 함수의 시드를 시간을 이용해서 초기화 해줌
//	for (i = 0; i < 5; i++)
//		printf("%d\n", rand()%5);
//}


// 가위바위보 게임 만들기
// 업그레이드 해나가기 (점수를 매기거나 레벨을 높인다거나..)
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int user, com, menu;
//	srand(time(NULL));		// 랜덤 함수 초기화
//	printf("---------------- 가위바위보 게임 ----------------\n");
//	
//	while (1)				// 무한반복
//	{
//		printf("가위 : 0, 바위 : 1, 보 : 2\n");
//		printf("user : ");
//		scanf("%d", &user);			// 사용자의 가위바위보 입력 받기
//		com = rand() % 3;
//		printf("com : %d\n", com);	// com의 가위바위보 랜덤으로 출력
//
//		if ((com + 1) % 3 == user)
//			printf("이겼습니다.\n");
//		if ((user + 1) % 3 == com)
//			printf("졌습니다.\n");
//		if (user == com)
//			printf("비겼습니다.\n");
//
//		printf("\n1) 게임을 계속하기 2) 끝내기\n");		// 1을 입력 받으면 게임을 계속 진행하기 2를 입력 받으면 break로 종료시키기
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
	char menu[3][10] = { "가위","바위","보" };
	srand(time(NULL));
	printf("==== 가위 바위 보 게임 ====\n");
	printf("0. 가위    1. 바위    2. 보\n>>> ");
	scanf("%d", &user);
	com = rand() % 3;
	printf("User : %s  VS  Com : %s\n", menu[user], menu[com]); // user와 com이 무엇을 냈는지 보여줌
	if (user == com)
		printf("무승부 !!!\n");
	else if (user - com == -2 || user - com == 1)
		printf("승  리 !!!\n");
	else
		printf("패  배 !!!\n");
	return 0;
}