#include <stdio.h>

void initialize()
{
	printf("초기화");
}

void coordinate(int x, int y)
{
	printf("좌표 = x : %d, y : %d \n", x, y);
}

void reset(char grade, int level, float experience)
{
	printf("grade : %c level %d: experience : %f", grade, level, experience);
}

void swap(int argumentX, int argumentY)
{
	int temporary = argumentY;
	argumentY = argumentX;
	argumentX = argumentY;
	
}



void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기위해
	// 독립적으로 설계된 코드의 집합.

	// initialize();


#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 함수를 내부로
	// 전달하기위해 사용하는 변수

	// coordinate(10, 20);

	// 매개변수는 함수 내부에서만 연산이 이루어지며
	// 함수가 종료되면 메모리에서 해제됨
	
	// reset('f', 0, 0.0);

	// 하나의 함수에 서로 다른 자료형의 매개면수를 함께
	// 정의할 수 잇으며, 여러개의 매개변수를 생성할수맀음
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값
	
	int x = 10;
	int y = 20;
	swap(x, y);
	

	printf("x : %d\n", x);
    printf("y : %d\n", y);

	// 인수의 셩우 함수에 있는 매개변수에따라 전달할 수 있는
	// 인수의 수가 결정되며 값을 일정하게 
	
	// [ call by reference ]
	


#pragma endregion



}
