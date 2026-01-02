#include <stdio.h>
#include<stdlib.h>

void main()
{
#pragma region 동적 할당
	// 프로그램을 실행하는 중에 필요한 만큼 메모리를 할당하는 작업

	 int* pointer = malloc(sizeof(int));
	 
	 *pointer = 99;
	 
	 pritnf("pointer : %d\n", *pointer);

#pragma endregion

	 free(pointer);



}
