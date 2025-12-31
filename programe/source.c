#include <stdio.h>

int health = 5;

void render()
{
	for(int i = 0;)
	printf("♥♥♥♥");
}

void main()
{
#pragma region 메모리 영역

#pragma region Code 영역
	// 프로그램을 실행하기위해 필요한 코드가 저장되는 영역
	// 함수의 주소와 상수가 저장되는 메모리 영역

#pragma endregion

#pragma region data 영역
	// 프로그램의 시작과 함께 메모리에 저장되며, 프로그램이
	// 종료될 때 메모리가 해제되는 영역
#pragma endregion

#pragma region bss 영역
	// 프로그램
#pragma endregion

#pragma region stack 영역
	// 프로그램이 자동으로 사용ㅇ하는  임시 메모리 영역으로
	// 함수 호출 시 생성되는 지역 변수
#pragma endregion

#pragma region heap 영역
	// 사용자가 직접	 메모리 공간을 할당ㅎㅐ주는 메모리 영역으로
	
#pragma endregion

#pragma endregion

#pragma region 지역 변수
	// 함수 내부에서 선언된 변수로 함수 내부에서만 접근할 수 잇으며,
	// 함수가 종료되었을 때 메모리에서 사라지는 특징을 가지고있는 변수
	
	// int x = 10;
	// 
	// {
	// 	int x = 20;
	// 	printf("int x : %d\n", x);
	// }

	// printf("int x : %d\n", x);

#pragma endregion

#pragma region 전역 변수
	// 함수 외부에서 선언한 변수로 프로그램이 실행될 때
	// 메모리에 올라가게되며, 프로그램이 종료되면 메모리에서 해체되는 변수
	
	health = health - 1;
	render();
	
#pragma endregion


}
