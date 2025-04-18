#include <stdio.h>

int main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을 
	// 수행하도록 실행하는 명령문입니다.

#pragma region 관계연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
	// 1이라는 값으로 나타내는 연산자입니다.

//	int x = 10;
//	int y = 20;
//
//	printf("x < y: %d\n", x < y);
//	
//	printf("x > y: %d\n", x > y);
//	
//	printf("x >= y: %d\n", x >= y);
//	
//	printf("x <= y: %d\n", x <= y);
//	
//	printf("x != y: %d\n", x != y);
//	
//	printf("x == y: %d\n", x == y);


	// 관게 연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
	// 조건이 틀릴 때 0이라는 값으로 반환된다.
#pragma endregion

#pragma region if문
	// 어떤  특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문
//	int health = 1;
//	if (health<=0);
//	{
//		printf("Destroy");
//	}

	// if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않는다
#pragma endregion

#pragma region else if문
	// if문의 조건이 틀릴 때 else if문의 조건이 
	// 맞다면 실행되는 명령문이다


	// else if문은 여러번 정의할 수 있으며, if문이 
	// 존재할때 사용할 수 있다
#pragma endregion



#pragma endregion





#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문

#pragma region 증감 연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자

	// int code = 0;
	// int packet = ++code;
	// printf("packet 변수를 전위 증가한 값: %d\n", packet);
	// printf("code 변수 값: %d\n", code);
	// 
	// packet = --code;
	// 
	// printf("packet 변수 값: %d\n", packet);
	// printf("code 변수를 전위 감소한  값: %d\n", code);

	// 전위 증감 연산자는 변수의 값을 증감시킨 후에 
	// 연산을 수행합니다


//	int data=0;
//
//	int storage = data++;
//	
// printf("storage 변수를 후위 증가한 값: %d\n", storage);
//	printf("data 변수 값: %d\n", data);
//
//
//	storage = data--;
//	printf("storage 변수를 후위 감소한 값: %d\n", storage);
//	printf("data 변수 값: %d\n", data);

	// 후위 증감 연산자는 연산을 수행한 다음 변수의 값을 증감



#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 횟수만큼 반복하는 반복문입니다.

	//for문 뒤에는 세미클론 붙이면 한번만 안쪽 printf는 한번만 실행됨 

//	for (int i = 0; i!=10;i++ )
//	{
//		printf("Update\n");
//
//	}
#pragma endregion

#pragma region while문
// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 
// 실행하는 반복문입니다.

//int count = 5;
//
//while(count > 0)
//{
//	printf("%d\n", count);
//  count--;
//	
//	
//
//}

// while문으 ㅣ경우 위에서 아래로 실행되며, 아래에 있는
// 명령문의 실행이 다 끝나면 다시 위에 있는 명령문으로 
// 돌아가서 반복하는 구조입니다.
#pragma endregion

#pragma region do-while문
// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에 
//따라 명령문을 실행하는 반복문

//int life = 0;
//
//do
//{
//
//	printf("ALIVE");
//
//} while (life==0);





#pragma endregion

#pragma region countinue문
// 해당 조건문만 실행하지 않고, 반복문은 이어서
// 실행하는 제어문이다
//for (int i = 1; i <= 5; i++)
//{
//	if (i == 3)
//	{
//		continue;
//	}
//	printf("%d", i);
//}
#pragma endregion

#pragma region 중첩 반복문
// 반복문 안에 새로운 반복문이 들어 있는 형태의 반복문

	for (int a = 1;a < 10;a++)
	{
		printf("구구단 %d단\n", a);
		for (int b = 1;b < 10; b++)
		{
			printf("%d X %d = %d\n", a, b, a * b);
		}
		printf("\n");
	}
#pragma endregion



#pragma endregion



	system("pause");


}
