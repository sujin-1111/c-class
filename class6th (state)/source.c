#include <stdio.h>

void main()
{

#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로


#pragma region 증감 연산자 

#pragma region 전위 증감
	// 피연산자를 하나씩 증가시키거나 감소시킬 때

	// int myage = 1;
	// 
	// int sisterage = ++myage;
	// 
	// printf("myage = %d\n", myage);
	// printf("sisterage = %d\n", sisterage);
	// 
	// int sisterage = --myage;

	// printf("myage = %d\n", myage);
	// printf("sisterage = %d\n", sisterage);

#pragma endregion

#pragma region 후위 증감

	// int myage = 0;
	// int mysisterage = myage++;
	// 
	// printf("myage = %d\n", myage);
	// printf("sisterage = %d\n", mysisterage);
	// 
	// mysisterage = myage--;
	// 
	// printf("myage = %d\n", myage);
	// printf("sisterage = %d\n", mysisterage);

#pragma endregion




#pragma endregion

#pragma region for문
	// 초기식을 연산해

	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("start\n");
	// }

	// 반복문이 동작되는 순서는 초기화 - 조건검사 - 증감의 구조
#pragma endregion

#pragma region while문
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 

	// int i = 0;
	// 
	// while (i < 6)
	// {
	// 	i++;
	// 	printf("i = %d\n", i);
	// }

	// 반복문은 순차적으로 싫행하면서 조건 분기를 만나게 되면, 어느쪽으로
	// 실행 흐름이 갈지 미리 예측함

#pragma endregion

#pragma region do while문
	// 조건과 상관없이
	// int i = 0;
	// 
	// do
	// {
	// 	i++;
	// 		printf("i = %d\n", i);
	// } while (i < 8);

#pragma endregion

#pragma endregion

#pragma region continue문
	// 해당 조건문만 실행하지 않고, 반복문은 이어서
	// 

	// for (int i = 1; i < 8; i++)
	// {
	// 	if (i == 3)
	// 	{
	// 		continue;
	// 	}
	// 	printf("i = %d\n", i);
	// }

#pragma endregion

}