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


	int age = 5;
	char name = 'm';
	float weight = 3.5f;

	
	// 서식지정자의 경우 하나의 표준 출력 함수에 여러개의
	// 서식을 넣을 수 있으며, 서식 지정자의 순서는 왼쪽부터 시작함

	// printf("%c\n", name);
	// printf("%d\n", age);
	// printf("%f\n", weight);

	printf("mio\n name : %c\n age : %d\n weight : %.1f\n", name, age, weight);



	// 서식지정자는 각각의 서식에 따라 원하는 값을


#pragma endregion

#pragma endregion











}
