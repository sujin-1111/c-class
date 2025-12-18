#include <stdio.h>

void main()
{


#pragma region if문

#pragma endregion


#pragma region else if문

#pragma endregion


#pragma region else문

#pragma endregion

#pragma region switch문

	// 어떤 결과에 따라 그

	// char grade = 'g';

	// 문은 해당 조건이 완료되었을 때, break문이 없으면
	// 나머지 밑에 있는 case 문 까지 계속 실행시키다기 종료함

	// switch (grade)
	// {
	// 	case 'A': printf(" 90 ~ 100 score\n ");
	// 		break;
	// 	case 'B': printf(" 80 ~ 89 score\n ");
	// 		break;
	// 	case 'C': printf(" 70 ~ 79 score\n ");
	// 		break;
	// 	case 'D': printf(" 60 ~ 69 score\n ");
	// 		break;
	// 	case 'F': printf(" 60점 미만\n ");
	// 		break;
	// 	default : printf("exception\n");
	// 		break;
	// }

	// swith 문의 경우 조건에 해당하는 값에 

#pragma endregion

#pragma region 논리연산자

#pragma region AND 연산자

	// 두개의 조건이 다 성립될 때 실행되는 연산자

	// int a = 10;
	// int b = 12;

	// if (a >= 0 & b == 8)
	// 	printf("true");

	// 조건문에서 하나 이상의 조건이 있다면 왼쪽부터 조건을 검사

#pragma endregion


#pragma region OR 연산자
	// 두 개의 조건 중 하나라도 조건이 성립될 때 실행되는 연산자

	// int a = 5;
	// int b = -9;
	// 
	// if (a > 0 || b > 0)
	// {
	// 	printf("true");
	// }

	// 조건문의 논리 표현식을 평가하는 도중에 결과가 이미 확정이 났다면, 그 이후의 평가는 생략함

#pragma endregion

#pragma region NOT 연산자
	// 하나의 조건을 반전시키는 연산자

	// int power = 0;
	// 
	// if (!power)
	// {
	// 	printf("the power is on");
	// }
	// else
	// {
	// 	printf("the power is off");
	// }
#pragma endregion

#pragma region 사분면

	// int x = 0;
	// int y = 9;
	// 
	// if (x > 0 && y > 0)
	// {
	// 	printf("제 1사분면입니다.");
	// }
	// 
	// else if (x < 0 && y > 0)
	// {
	// 	printf("제 2사분면입니다.");
	// }
	// 
	// else if (x < 0 && y < 0)
	// {
	// 	printf("제 3사분면입니다.");
	// }
	// 
	// else if (x > 0 && y < 0)
	// {
	// 	printf("제 4사분면입니다.");
	// }
	// 
	// else if ( x>0 && y == 0 )
	// {
	// 	printf(" x절편입니다. ");
	// }
	// 
	// else if ( x == 0 && y>0 )
	// {
	// 	printf(" y절편입니다. ");
	// }
	// 
	// else (x == 0 && y == 0)
	// {
	// 	printf("원점입니다.");
	// }

#pragma endregion


#pragma endregion



}
