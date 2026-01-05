#include <stdio.h>
#include<stdlib.h>

void main()
{
#pragma region 동적 할당
	// 프로그램을 실행하는 중에 필요한 만큼 메모리를 할당하는 작업

	 // int* pointer = malloc(sizeof(int));
	 // 
	 // *pointer = 99;
	 // 
	 // printf("pointer : %d\n\n", *pointer);
	 // 
	 // free(pointer);
	 // 
	 // 
	 // pointer = (int*)malloc(sizeof(int) * 3);
	 // 
	 // for (int i = 0; i < 3; i++) 
	 // {
	 //  pointer[i] = (1 + i) * 10;
	 //  printf("pointer : %d\n", i, pointer[i]);
	 // }

	 //  free(pointer);

	 // 메모리를 동적으로 할당한 상태에서 해제하지 않으면
	 // 메모리 누수 현상이 일어나므로,  메모리 누수가 일어나면
	 //더이상 메모리를 할당할수없음
#pragma endregion


}
