#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	/*
	상수
		- 변수의 반대 개념(변하지 않는 수를 저장하는 공간)
		- 저장된 공간에 새로운 값을 담을 수 없다
		- 처음 대입된 값을 바꿀 수 없다

	일반상수
		- 일회성으로 재사용 불가
		- 문자 상수: 4byte
		- 정수 상수: 4byte
		- 실수 상수: 8byte

	const
		- 재사용이 가능한 상수를 만드는 방법
		- 저장 공간을 상수 공간으로 만드는 방법
		- 선언 및 초기화된 저장 공간의 값이 변경되는 것을 막아주는 키워드
		- 선언과 동시에 초기화 필요
		- 선언 이후에 대입 연산을 통해 값 변경 불가
		- 변경할 필요가 없는 고정된 값을 만들 때 사용
		- 예) INT_MAX

	상수의 이름
		- 의미가 명확한 이름으로 만든다
		- 모두 대문자
		- 단어와 단어가 이어질 때는 _사용
	*/
	printf("%d + %d = %d\n\n", 9876, 8765, 9876 + 8765); 
	printf("%d - %d = %d\n\n", 9876, 8765, 9876 - 8765);
	// 일반상수는 위치값을 알지 못하기 때문에 메모리 공간의 값을 바꿀 수 없음

	const double MARATHON_LENGTH = 42.195;
	//MARATHON_LENGTH = 55.195;
	//const를 붙인 순간 상수가 되기 때문에 값을 바꿀 수 없다
	//변경될 필요가 없는 값을 재사용하기 위해 선언
	printf("MARATHON_LENGTH : %lf\n\n", MARATHON_LENGTH);
	printf("MARATHON_LENGTH 재사용 : %lf\n\n", MARATHON_LENGTH);

	const MARATHON_LENGTH2;
	//MARATHON_LENGTH2 = 42.195;
	//const변수는 선언과 함께 값을 초기화 해야 함
	system("pause");

	/*
	문자열(character string %s)
		- string은 줄을 의미. 문자를 줄지어 놓았다는 뜻
		- 문자 배열의 형태로 선언하고 초기화
		- 선언된 크기보다 하나 작은 문자열 입력
		- 문자열의 끝에는 문자열 종료 문자가 들어간다

	문자열은 대입 연산이 불가능!
		=> strcpy_s 함수를 사용해야 함
		- 문자열의 초기화 이후에, 다시 문자열 입력이 필요할 때
		- #include<string.h> 필요
	*/
	char chArray[30] = "nice to meet you, too.";
	printf("문자열 변수 : %s, 상수 : %s\n\n", chArray, "일반 문자열 상수");

	//chArray = "how are you???";
	char chArray2[30];
	//chArray2 = "how are you???";

	strcpy_s(chArray, sizeof chArray, "how are you???");
	printf("chArray : %s\n\n", chArray);
	strcpy_s(chArray2, 30, "i am fine, thank you.");
	printf("chArray2 : %s\n\n", chArray2);
	system("pause");

	/*
	* scanf_s 함수
	*	- 콘솔 창을 통한 입력 방법
	*	- 입력 서식 문자를 사용해 입력을 받는다
	*	- 입력된 값을 변수에 저장한다
	*	- 사용하기 위해 #include<stdio.h> 필요
	*	- &변수명: 변수의 주소값을 리턴해주는 역할
	* 
	* 입력 서식 문자
	*	- 정수 타입(short: %hd, int: %d, long: %ld, longlong: %lld)
	*	- unsigned 정수 타입(unsigned short: %hu, unsigned int: %u, unsigned long: %lu, unsigned longlong: %llu)
	*	- 실수 타입(float: %f, double: %lf)
	*	- 문자 타입(문자: %c, 문자열: %s)
	*		-> 단, 입력 받을 문자열의 길이를 미리 지정한다
	*		-> 지정된 길이보다 긴 문자열 입력시 에러발생, 아무 값도 입력받지 않는다
	*		-> 문자열을 띄어쓰기 하는 경우, 띄어쓰기 전까지만 입력된다
	*/
	int iVar;
	printf("int input : ");
	scanf_s("%d", &iVar);
	printf("int output : %d\n\n", iVar);

	float fVar;
	printf("float input : ");
	scanf_s("%f", &fVar);
	printf("float output : %f\n\n", fVar);

	unsigned long uLongVar;
	printf("unsigned long input : ");
	scanf_s("%lu", &uLongVar);
	printf("unsigned long output : %lu\n\n", uLongVar);

	getchar(); // 개행문자 처리

	char cVar;
	printf("문자 하나 입력 : ");
	scanf_s("%c", &cVar, 1);
	printf("cVar1 : %c\n\n", cVar);

	char cArr[30];
	printf("문자열(30자) 입력 : ");
	scanf_s("%s", cArr, 30); // 문자열을 입력 받을 때는 & 사용X
	printf("cArr : %s\n\n", cArr);
	system("pause");

	return 0;
}