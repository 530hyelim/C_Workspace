/*
Data의 개념
- 어떠한 사실, 개념, 명령
- 과학적인 실험이나 관측 결과로 얻은 수치나 정상적인 값
- 실체의 속성을 숫자, 문자, 기호 등으로 표현한 것
- 데이터에 특정한 의미가 부여될 때 정보가 됨
- 데이터 자체는 단순한 사실(우리 주변에 존재하는 모든 사물들의 속성)에 불과하지만,
- 일련의 처리과정에 따라 특정한 목적에 소용되는 정보가 됨

Data의 종류(Type)
- 인류의 문명은 문자와 숫자 체계
- C언어에서 다루는 데이터도 문자와 숫자 체계(문자, 문자열, 정수, 실수, ...)
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// 정수 타입 변수의 최소값과 최대값을 쉽게 구할 수 있음(대소문자에 주의)
#include <float.h>
// 실수 타입 변수의 최소값과 최대값을 쉽게 구할 수 있음

int main(void) {
	printf("문자열 데이터 출력\n");
	printf("%s\n", "문자열 데이터 출력");
	printf("%c\n", 'a');
	printf("%d\n", 123);
	printf("%f\n", 0.123456);

	printf("이름 : %s\n", "홍길동");
	printf("나이 : %d\n", 25);
	printf("%d학년 %d반 %d번 홍길동\n", 3, 1, 17);
	printf("키 : %.1fcm, 몸무게 : %.20fkg, 혈액형 : %c형\n", 180.0, 80.0, 'A');
	system("pause");

	/*
	변수의 개념
		- 메모리에 데이터를 위한 공간을 만들면서, 이 공간에 이름을 붙임으로써,
		  이 공간에 들어가 있는 값을 재활용 할 수 있도록 만든 것
		- 컴퓨터가 작업을 수행하기 위해 필요한 데이터를 담는 저장 공간
		  (변수: 저장공간, data: 저장 공간에 담긴 내용물)
		- 필요에 따라 변수가 가리키는 저장 공간의 값을 바꿀 수 있다
		  (variable: 바뀔 수 있는 data를 가진 저장 공간)

	변수의 생성
		1. 변수의 선언
			- 만들고자 하는 변수의 데이터 타입과 변수 이름을 정하는 과정
			- 데이터타입 변수이름;
		2. 변수의 초기화
			- 데이터 타입과 이름이 정해진 변수에 최초의 값을 대입하는 행위
			- 변수이름 = 값;
	*/
	int data1; // 변수의 선언
	data1 = 9876; // 변수의 초기화
	// = 은 우항의 값을 좌항에 대입하라는 대입 연산자
	printf("%d\n", data1);

	int data2 = 8765; // 변수의 선언과 초기화를 한번에
	printf("%d\n", data2);

	printf("%d + %d = %d\n", data1, data2, data1 + data2);
	printf("%d - %d = %d\n", data1, data2, data1 - data2);
	printf("%d * %d = %d\n", data1, data2, data1 * data2);
	system("pause");

	/*
	정수 Type 변수의 종류 (표현할 수 있는 수의 크기에 따라)
		- short: 2byte (16bit)만을 사용하여 수를 표현(-2^15 ~ 2^15-1)
			1bit는 음수/양수를 표현하는 부호 비트
			연산 속도가 int보다 느림
		- int: 4byte (32bit)를 사용하여 수를 표현(-2^31 ~ 2^31-1)
			정수 연산의 기본 단위
			연산 속도가 가장 빠르다는 장점
		- long: 4byte (32bit를 사용하여 수를 표현(-2^31 ~ 2^31-1)
			printf함수의 서식 문자: %ld
			int를 2바이트로 취급하는 컴퓨팅 시스템에서 4바이트 정수 공간을 확보하기 위해 사용
		- long long: 8byte (64bit) 사용하여 수를 표현(-2^63 ~ 2^63-1)
			printf함수의 서식 문자: %lld
			엄청나게 큰 값을 저장하는 용도로 사용
	*/
	short sVar1 = 32767;
	short sVar2 = 50000; // 출력하면 엉뚱한 값이 나옴
	int iVar1 = 2147483647;
	int iVar2 = 2200000000; // 출력하면 엉뚱한 값
	long lVar1 = 2147483647;
	long lVar2 = 2200000000; // 엉뚱한 값
	// long type의 변수는 int가 4바이트 정수를 표현하지 못하는 컴퓨터에서(예전 16비트 이하 컴퓨터)
	// 명시적으로 4바이트의 정수를 표현하기 위해 사용됨
	long long llVar1 = 9220000000000000000;
	long long llVar2 = 9300000000000000000; // 엉뚱
	printf("%lld\n", llVar2);
	system("pause");

	/*
	unsigned
		음의 정수를 사용하지 않고, 음의 정수를 표현하는 만큼, 양의 정수로 표현하는 것
		short(-32768 ~ 32767) / unsigned short(0 ~ 65535)
		int(-2147483648 ~ 2147483647) / unsigned int(0 ~ 4294967295)
	*/
	unsigned short usVar1 = 65535;
	unsigned short usVar2 = 70000;
	unsigned int uiVar1 = 4294967295;
	unsigned int uiVar2 = 4300000000;
	unsigned long ulVar1 = 4294967295;
	unsigned long ulVar2 = 4300000000;
	unsigned long long ullVar1 = 18446744073709551615;
	//unsigned long long ullVar2 = 18446744073709551616; => 빌드 실패!
	printf("%lu : %lu\n", ulVar1, ulVar2);
	system("pause");

	printf("short min : %d, max : %d\n\n", SHRT_MIN, SHRT_MAX);
	printf("int min : %d, max : %d\n\n", INT_MIN, INT_MAX);
	printf("long min : %ld, max : %ld\n\n", LONG_MIN, LONG_MAX);
	printf("long long min : %lld, max : %lld\n\n", LLONG_MIN, LLONG_MAX);

	printf("unsigned short max : %u\n\n", USHRT_MAX);
	printf("unsigned int max : %u\n\n", UINT_MAX);
	printf("unsigned long max : %lu\n\n", ULONG_MAX);
	printf("unsigned long long max : %llu\n\n", ULLONG_MAX);
	// unsigned의 최소값은 항상 0이기 때문에 출력X
	system("pause");

	/*
	실수 Type 변수의 종류 (표현할 수 있는 수의 크기에 따라)
		- float: 4byte (32bit)만을 사용하여 수를 표현
			1bit는 부호비트(+/-)
			8bit는 지수부(정수 표현), 23bit는 가수부(소수점 이하)
		- double: 8byte (64bit)를 사용하여 수를 표현
			1bit는 부호비트
			11bit는 지수부, 52bit는 가수부
		- long double: double보다 더 큰 수의 표현이 필요할 때, 상황에 따라 다르게 쓰임
	*/
	printf("float min : %e, max : %e\n\n", FLT_MIN, FLT_MAX);
	// %e는 10의 승수로 출력하는 서식 문자
	double dMin = DBL_MIN, dMax = DBL_MAX;
	printf("double min : %e, max : %e\n\n", dMin, dMax);
	system("pause");

	/*
	char
		메모리를 1byte(8bit) 사용하여 정수와 문자를 표현(%c or %d)
		1bit는 부호비트, -2^7 ~ 2^7-1까지의 수를 표현(-128 ~ 127)
		ASCII Code: 키보드 입력 값을 0~127의 정수로 처리, 문자에 대응
		unsigned char: 0 ~ 255 (%u)
	*/
	char charVar1 = 'A', charVar2 = 66;
	printf("charVar1: %c, %d\n\n", charVar1, charVar1); // A, 65
	printf("charVar2: %c, %d\n\n", charVar2, charVar2); // B, 66
	char chMin = CHAR_MIN, chMax = CHAR_MAX;
	printf("char min: %d, max : %d\n\n", chMin, chMax); // -128, 127
	unsigned char uChMax = UCHAR_MAX;
	printf("unsigned char max : %d\n\n", chMax);
	system("pause");

	// sizeof : 변수가 몇 바이트의 메모리르 차지하는지 알려주는 연산자
	char charVar = CHAR_MAX;
	short shortVar = SHRT_MAX;
	int intVar = INT_MAX;
	long longVar = LONG_MAX;
	long long longlongVar = LLONG_MAX;
	int chSize = sizeof charVar, shSize = sizeof shortVar, iSize = sizeof intVar, lSize = sizeof longVar, llSize = sizeof longlongVar;
	printf("%d, %d, %d, %d, %d\n\n", chSize, shSize, iSize, lSize, llSize);

	return 0;
}