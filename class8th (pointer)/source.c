#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 변환하는 연산자입니다.

	// int data = 10;
	// 
	// printf("data = %p", &data);

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를 
	// 의미하며, 메모리의 공간은 1 byte의 크기로 나누어 표현합니다.
#pragma endregion

#pragma region 표준 입력 함수
	// 여러 종류의 데이터를 다양한 서식에 맞추어
	//입력해주는 함수입니다.

	// int x = 0;
	// 
	// printf(" 아무 숫자를 입력해주세요\n");

	// 표준입력 함수는 입력을 수행할 때까지 다음 작업으로 넘어갈수없습니다.
	// scanf_s("%d", &x);

	// 버퍼는 데이터가 이동할 때 임시로 ㅈ저장되는 공간이며,
	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됨.
	// printf("x의 값 : %d입니다.", x);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관
	//  
#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	// int age = 8;
	// int room = 20;
	// int * pointer = &age;
	// 
	// // 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로
	// // 포인터가 가리키는 메모리의 자료형을 선언해주어야함.
	// printf("age = %p\n", &age);
	// printf("pointer의 값 = %p\n", pointer);
	// printf("pointer의 주소 = %p\n\n", &pointer);
	// 
	// *pointer = 99;
	// printf("pointer가 가리키는 값 = %d\n\n", *pointer);
	// 
	// 
	// pointer = &room;
	// 
	// printf("pointer의 값 = %p\n", pointer);
	// printf("room의 주소 = %d\n\n", *pointer);
	// 
	// // 포인터 변수도 자신의 메모리 공간을 가지고 있으며, 포인터 변수에
	// // 변수의 주소를 저장되면 해당 변수의 시작 주소를 가리킵니다.
	// 
	// printf("int의 크기 = %u\n\n", sizeof(int));
	// printf("pointer 변수의 크기 = %p\n", sizeof(pointer));
	// 
	// // 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 이쓴ㄴ 
	// // 크기로 정해지며, 한번에 처리할 수 있는 크기는 운영체제에 따라 크기가 변경됨
#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을 
	// 저장할 수 있는 포인터.

	// char rank = 'A';
	// int age = 10;
	// float weight = 35.75f;
	// 
	// void * reference = NULL;
	// 
	// reference = &rank;
	// *(char *)reference = 'B';
	// 
	// reference = &age;
	// *(int*)reference = 20;
	// 
	// reference = &weight;
	// *(float*)reference = 65.6;
	// 
	// printf("rank = %c\n", rank);
	// printf("age = %d\n", age);
	// printf("weight = %.1f\n", weight);

	// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없음.

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가
	// 가리키는 변수의 자료형으로 변환해주어야함.

#pragma endregion

#pragma region 상수 지시 포인터
	// 포인터가 가리키는 주소에 지정되어 있는

	// int z = 20;
	// int y = 10;
	// 
	// const int* fixedPointer = &y;
	// 
	// // *fixedPointer = 99;
	// 
	// printf("y의 주소 값 : %p\n", &y);
	// printf("fixedPointer : % p\n\n", fixedPointer);
	// 
	// fixedPointer = &z;
	// 
	// printf("z의 주소 값 : %p\n", &z);
	// printf("fixedPointer : % p\n\n", fixedPointer);

#pragma endregion

#pragma region 포인터 상수
// 포인터 변수가 가리키고 있는 주소 값을 변경할 수 없는 포인터

	// int x = 5;
	// int y = 9;
	// 
	// int* const fixedreference = &x;
	// 
	// *fixedreference = 40;
	// 
	// 
	// printf("x의 값 : %d\n", x);
	// printf("pointer가 가리키는 값 : %d\n\n", *fixedreference);
	// 
	// // fixedreference = &y;
	// 
	// // 상수로 선언한 포언티는 해당 변수의 값을 변경할 수 있지만, 다른 변수의
	// // 주소를 새로 저장할 수는 없다.
#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터
	
    // int* address = NULL;
    // {
    // 	int packet = 0;
    // 
    // 	address = &packet;
    // 	
    // 	*address = 30;
    // 
    // 	pritnf("address가 가리키고 있는 값 : %d\n", *address);
    // }
    // 
    // pritnf("address가 가리키고 있는 값 : %d\n", *address);

#pragma endregion

}