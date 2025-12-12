#include <stdio.h>

void main()
{
#pragma region 변수

	// 데이터를 저장할 수 있는 메모릭 공간을 생성라는 것

#pragma region 자료형
	// 데이터를 저장하기위해 데이터의 형채를 정해주는 곳
	// 자료형은 각의 자료형마다 크기가 정해져 있으며, 자료형의 
	// 크기는 바이트단위로  이루어져 있으며
	// 따라 저장할수있는 값의 종류와 범위가 결정
#pragma endregion

#pragma region 변수의 이름규칙
	// 1. 변수의 이름은 대소문자를 구분
	// ex) int health;
	// ex) int HEALTH;

	// 2. 변수의 이름으로 예약어 사용할수없음
	// ex) char char;

	// 3. 변수의 이름에는 공백이 포함될수없음
	// ex) float time Delta;

	// 4. 변수의 이름으로 툭수문자 "_", "$"만 사용가능
	// ex) short under_score;
	// ex) long currency$;

	// 5. 변수의 이름은 숫자로 시작할수없음
	// ex) int 5day;
	// ex) int year2025;


#pragma endregion

#pragma region 서식 지정자
	// 변수의 값을 출력하기 위한 자료형의 전보를 명시적으로 지정해주는 것

	// int age = 5;
	// char name = 'm';
	// float weight = 3.5f;

	// 서식지정자의 경우 하나의 표준 출력 함수에 여러개의
	// 서식을 넣을 수 있으며, 서식 지정자의 순서는 왼쪽부터 시작함

	// printf("%c\n", name);
	// printf("%d\n", age);
	// printf("%f\n", weight);

	// printf("mio\n name : %c\n age : %d\n weight : %.1f\n", name, age, weight);

	// 서식지정자는 각각의 서식에 따라 원하는 데이터를 출력
	// 할수있으며, 서식과 변수의 형태가 일치하지 않으면
	// 원하는 값이 출력돠지 않습니다.

	// age = 25;
	// name = 'n';
	// weight = 7.25f;

	// printf("age : %d\n name : %c\n weight : %.2f\n", age, name, weight);

	// 변수는 프로그램이실행되는 동안 값을 바꿀ㄹ수 있으며,
	// 원래 저장되어 있는값은 새로 저장되는 값에 의해 지워짐

	// 변수의메모리 공간은 프로그램이 실행된 때마다 바뀌며, 여러
	// 개의변수가 있을 때 서로 고유의 메모리 공간을 가지고있음
#pragma endregion

#pragma endregion

#pragma region 상수
	// 프로그램이 실행되는 동안 더 이상 변경할 수 없는 메모리 공간

	const float pi = 3.141592f;

	// 상수의 경우 메모리 공간을 가지고있지않은 상수를
	// 리터럴 상수라고 하며,메모리 공간을 가지고있는
	// 심볼릭 상수라고 합니다.

	printf("상수의 값 : %f\n", pi);

	// 상수는 메모리 공간을 생성하는 동시에 초기화 해야 하며,
	// 한 번 저장된 값을 더이상 변경할 수 없습니다.    
#pragma endregion
}
