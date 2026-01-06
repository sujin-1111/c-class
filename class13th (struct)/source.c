#include <stdio.h>
#include <math.h>

struct Unit
{
	char grade;
	int heart;
	double experience;
};

struct Point2D
{
	int x;
	int y;
};

struct Ability
{
	short rank;
	double attack;
	int strength;
};

int main()
{
#pragma region 구조체
	// // 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// // 하나의 객채를 생성하는 것
	// 
	// struct Unit unit = { 'B', 80, 82.4 };
	// 
	// printf("grade : %c\n", unit.grade);
	// printf("heart : %d\n", unit.heart);
	// printf("experience : %lf\n\n", unit.experience);
	// 
	// // 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화되며,
	// // 이 순서는 초기화 목록의 값들이 왼쪽에서부터 오른쪽으로 시작됨
	// 
	// unit.grade = 'A';
	// unit.heart = 100;
	// unit.experience = 135.75;
	// 
	// printf("grade : %c\n", unit.grade);
	// printf("heart : %d\n", unit.heart);
	// printf("experience : %lf\n", unit.experience);
	// 
	// 
	// // 구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로,
	// // 구조체 내부에 있는 데이터를 초기화할 수 있음

#pragma endregion

#pragma region  두 점 사이의 거리

	// printf("%lf\n", sqrt(81));
	// printf("%lf\n\n", pow(2,4));

	// struct Point2D character = { 4, -5 };
	// struct Point2D slime = { 4, 0 };
	// 
	// int distancex = character.x - slime.x;
	// int distancey = character.y - slime.y;
	// 
	// double distance = sqrt(pow(distancex, 2) + pow(distancey, 2));
	// 
	// printf("두 점 사이의 거리 : %lf\n", distance);
	// 
	// if (distance <= 5.0)
	// {
	// 	printf("공격 주의!");
	// }
	// else
	// {
	// 	printf("안전");
	// }

#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
	// 읽을 수 있도록 컴파일러가 레지스터의 블록에
	// 맟추어 바이트를 패딩해주는 최적화 작업

	  // struct Unit object = { 'C', 10, 12.5 };
	  // printf("object의 크기 : %u\n", sizeof(object));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
	// 가장 큰 자료형의 배수가 되도록 설정됨

	  // struct Ability ability = { 'A', 30, 22.3 };
	  // printf("ability의 크기 : %u\n", sizeof(ability));

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가
	// 다르게 설정될 수 있음
#pragma endregion


	return 0;
}
