#include <stdio.h>

void main()
{
#pragma region 산술 연산자
	// const numberS = 10;
	// 
	// int x = 20;
	// int y = 5;
	// int sum;

	// // 1. 변수 = 변수 + 변수
	// sum = x + y;
	// 
	// printf("sum 변수 + 변수 = %d\n", sum);
	// 
	// // 2. 변수 = 변수 - 리터럴 상수
	// sum = y - 1;
	// printf("sum 변수 - 리터럴 상수 = %d\n", sum);
	// 
	// // 3. 변수 = 변수 * 심볼릭 상수
	// sum = x * numberS;
	// printf("sum 변수 * 심볼릭 상수 = %d\n", sum);
	// 
	// // 4. 변수 = 리터럴 상수 / 리터럴 상수
	// sum = 80 / 4;
	// printf("sum 리터럴 상수 / 리터럴 상수 = %d\n", sum);
	// 
	// // 5. 변수 = 심볼릭 상수 % 리터럴 상수
	// sum = sum = numberS % 3;
	// printf("sum 심볼릭 상수 %% 리터럴 상수 = %d\n", sum);

#pragma endregion

#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의 조합으로 논리 계산을 수행하는 단위

#pragma region  (10)진수를 (2)진수로 변환하는 과정
	// 10진수을 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬

	//  2 23
	//  2 11 -1
	//  2 5  -1
	//  2 2  -1
	//  2 1  0
	// 10111


#pragma endregion

#pragma region  (2)진수를 (10)진수로 변환하는 과정
	// 1byte에 2진수로 저장된 값을 2의 제곱으로 나다냄

	//  각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	// 다음 각각의 비트를 모두 더해 10진수로 나타냄



#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해

#pragma region AND 연산자
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자 &

	// int wisdom = 10;    // 0000 1010
	// int dexterity = 6;  // 0000 0110
	//                     // ---- ----
	//                     // 0000 0010
	// 
	// printf("wisdom & dexterity : %d\n", wisdom & dexterity);

#pragma endregion

#pragma region OR 연산자
	// 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반한하는 연산자 |

	// int poison = 8;    // 0000 1000
	// int freeze = 12;   // 0000 1100
	//                    // ---- ----
	//                    // 0000 1100
	// 
	// printf("poison | freeze : %d\n", poison | freeze);

#pragma endregion

#pragma region XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면
	// 1을 반환하는 연산자입니다.

	// int idle = 15;     // 0000 1111
	// int	battle = 6;    // 0000 0110
	// 				   // ---- ----
	//                    // 0000 1001
	// 
	// printf("idle ^ battle : %d\n", idle ^ battle);

#pragma endregion

#pragma region NOT연산자
	// 하나의 비트를 반전시키는 연산자입니다.

	// int status = 13;    // 0000 1101
	// 				    // ---- ----
	// 				    // 1111 0010
	// 
	// printf("~status ! = %d\n", ~status );

	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에
	// 1이 있다면 값은 음수가 됩니다.
#pragma endregion

#pragma region 시프트 연산자
	// 비트를 특정한 위치로 정해진 수만큼 이동시키는 연산자
	// << >>

	// int packet = 5; // 0000 0101
	// 			    // 0001 0100
	// 
	// printf("packet 변수를 왼쪽으로 2칸 이동한 결과 : %d\n", packet << 2);
	// 
	// 
	// 				// 0000 0101
	// 				// 0000 0010
	// 
	// printf("packet 변수를 오른쪽으로 1칸 이동한 결과 : %d\n", packet >> 1);
#pragma endregion

	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 한 개의 비트에는 0 또는 1의 값만 저장할 수 있음
#pragma endregion


#pragma endregion

#pragma endregion

}