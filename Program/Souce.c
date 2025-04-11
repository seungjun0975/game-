/*



*/

#include <stdio.h>

void main()
{
#pragma region 변수
	// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것 

#pragma region 자료형
	//데이터를 저장하기 위해 데이터의 형태를 정해주는 것

	//자료형은 각각의 자료형마다 크기가 정해져 있으며 자료형의
	//크기는 바이트 단위로 이루어져 있으며, 자료형의 경우 
	//자료형에 따라 저장할 수있는 값의 종류와 범위가 결정
	
#pragma endregion

#pragma region 대입 연산자
	//변수에 값을 저장할 수 있는 연산자 
	
	//대입 연산자의 기준으로 왼쪽에 있는 변수는 식별자를 
	//가지고 있기 때문에 다른 값을 복사 받을 수 있다

#pragma endregion

#pragma region 변수의 이름 규칙

	// 1. 변수의 이름 대소문자를 구분한다
	// ex) int health; 
	// ex) int Health;

	//2. 변수의 이름으로 예약어를 사용할 수 없다
	// ex) int int; 

	//3. 변수의 이름에는 공백이 포함될 수 없다
	// ex) int time Delta;

	//4. 변수의 이름으로 특수 문자는 "_"와"$"만 사용가능
	// ex) int under_Score; int current$room;

	//5. 변수의 이름은 숫자로 시작할 수 없다.
	// ex) int 5error; (에러남)
	// ex) int error5; (에러안남)
	
	
#pragma endregion

#pragma region 서식 지정자 
	//변수의 값을 출력하기 위한 자료형의 정보를 명시적으로 
	//지정해주는 것

	//서식 지정자의 경우 하나의 표준 출력 함수에 여러 개의
	//서식을 넣을 수 있으며, 서식 지정자의 순서는 왼쪽에서
	//부터 시작

	//서식 지정자는 각각의 서식에 따라 원하는 데이터를 출력
	//할수있으며, 서식과 변수의 형태가 일치하지 않으면 
	//원하는 값이 출력되지 않는다

#pragma endregion
#include <stdio.h>

	//char character = 'A';
	//
	//int integer = 10;
	//
	//float decimal = 5.5f;
	//printf("LOL\n");
	//
	//printf("Hello World~\n");
	//                   
	//printf("character : %c\ninterger : %d\ndecimal : %f\n" , character, integer, decimal);
	//
	//character = 'B';
	//integer = 25;
	//decimal = 7.25f;
	//
	//printf("\n");

	//변수는 프로그램이 실현되는 동안 값을 바꿀 수 있다
	//원래 저장되어 잇는 값을 새로 저장되는 값에 의해 지워진다
	//
	//printf("character : %c\n", character);
	//printf("interger : %d\n", integer);
	//printf("decimal : %f\n", decimal);

	//변수의 메모리 공간을 프로그램이 실행될 떄마다 여러
	// 개의 변수가 있을때 서로 고유의 메모리 공간을 가짐

#pragma endregion
	
#pragma region 상수
	//프로그램이 실행되는 동안 더 이상 변경할 수 없는 
	//메모리 공간

	const float pi = 3.141592f;

	//상수의 경우 메모리 공간을 가지고 있지 않은 상수를 
	//리터럴 상수라고 하며 메모리 공간을 가지고 있는
	//상수를 심볼릭 상수라고 한다 

	//ex)pi = 6.125f;(오류남)

	printf("상수의 값 : %f\n", pi);

	//상수는 메모리 공간을 생성하는 동시에 초기화해야 하며,
	//한 번 저장된 값은 더 이상 변경할 수 없습니다. 
#pragma endregion


	system("pause");

}