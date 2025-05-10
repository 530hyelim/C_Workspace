/* Chapter 4. 연산자 */
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void) {
	//buho();
	//sachic();
	//bigyo();
	//nonri();
	//nonriBujong();
	//sizeCheck();
	//samHang();
	//incDec();
	//incDec2();
	//incDec3();
	//incDec4();
	
	char var1 = 42, var2 = 60;
	printf("cVar1 & cVar2 : %d\n\n", var1 & var2);
	printf("cVar1 | cVar2 : %d\n\n", var1 | var2);
	printf("cVar1 ^ cVar2 : %d\n\n", var1 ^ var2);
	char var3 = 21, var4 = 2;
	printf("cVar3 << cVar4 : %d\n\n", var3 << var4);
	printf("cVar3 >> cVar4 : %d\n\n", var3 >> var4);
	system("pause");

	intTypeConversion();
	floatTypeConversion();
	intFloatTypeConversion();
	system("pause");

	int iVar1 = 4;
	int iVar2 = 123, iVar3 = 123, iVar4 = 123, iVar5 = 123, iVar6 = 123;
	printf("iVar2 : %d\n\n", iVar2 += iVar1); // iVar2 = iVar2 + iVar1;
	printf("iVar3 : %d\n\n", iVar3 -= iVar1); // iVar2 = iVar2 - iVar1;
	printf("iVar4 : %d\n\n", iVar4 *= iVar1); // iVar2 = iVar2 * iVar1;
	printf("iVar5 : %d\n\n", iVar5 /= iVar1); // iVar2 = iVar2 / iVar1;
	printf("iVar6 : %d\n\n", iVar6 %= iVar1); // iVar2 = iVar2 % iVar1;

	char cVar1 = 42, cVar2 = 60;
	char cVar3 = 42, cVar4 = 60;
	char cVar5 = 42, cVar6 = 60;
	printf("cVar1 : %d\n\n", cVar1 &= cVar2); // cVar1 = cVar1 & cVar2;
	printf("cVar3 : %d\n\n", cVar3 |= cVar4); // cVar3 = cVar3 | cVar4;
	printf("cVar5 : %d\n\n", cVar5 ^= cVar6); // cVar5 = cVar5 ^ cVar6;

	char chVar1 = 21, chVar2 = 2;
	char chVar3 = 21, chVar4 = 2;
	printf("chVar1 : %d\n\n", chVar1 <<= chVar2); // chVar1 = chVar1 << chVar2
	printf("chVar3 : %d\n\n", chVar3 >>= chVar4); // chVar3 = chVar3 >> chVar4
	return 0;
}

int buho(void) {
	// 부호 연산자: 값의 부호를 변경해주는 연산자
	int iVar = 123;
	printf("iVar : %d\n\n", iVar);
	printf("-iVar : %d\n\n", -iVar);
	printf("- -iVar : %d\n\n", - -iVar);
	return 0;
}

int sachic(void) {
	// 사칙 연산자: + - * / %(나머지)
	int iVar1 = 123, iVar2 = 4;
	printf("%d + %d = %d\n\n", iVar1, iVar2, iVar1 + iVar2);
	printf("%d - %d = %d\n\n", iVar1, iVar2, iVar1 - iVar2);
	printf("%d * %d = %d\n\n", iVar1, iVar2, iVar1 * iVar2);
	printf("%d / %d = %d\n\n", iVar1, iVar2, iVar1 / iVar2);
	printf("%d o/o %d = %d\n\n", iVar1, iVar2, iVar1 % iVar2);
	return 0;
}

int bigyo(void) {
	// 관계(비교) 연산자: > < >= <= == !=
	int iVar1 = 123, iVar2 = 4;
	printf("iVar1 > iVar2 : %d\n\n", iVar1 > iVar2); // 1 (참: 0이 아닌 수)
	printf("iVar1 < iVar2 : %d\n\n", iVar1 < iVar2); // 0 (거짓: 0)
	printf("iVar1 >= iVar2 : %d\n\n", iVar1 >= iVar2); // 1
	printf("iVar1 <= iVar2 : %d\n\n", iVar1 <= iVar2); // 0
	printf("iVar1 == iVar2 : %d\n\n", iVar1 == iVar2); // 0
	printf("iVar1 != iVar2 : %d\n\n", iVar1 != iVar2); // 1
	return 0;
}

int nonri(void) {
	// 논리 연산자: 참, 거짓을 판별 &&(and), ||(or)
	int iVar1 = 123, iVar2 = 4;
	printf("true && true : %d\n\n", iVar1 > iVar2 && iVar1 != iVar2); // true
	printf("true && false : %d\n\n", iVar1 > iVar2 && iVar1 == iVar2); // false
	printf("false && true : %d\n\n", iVar1 < iVar2 && iVar1 != iVar2); // false
	printf("false && false : %d\n\n", iVar1 < iVar2 && iVar1 == iVar2); // false

	printf("true || true : %d\n\n", iVar1 > iVar2 || iVar1 != iVar2); // true
	printf("true || false : %d\n\n", iVar1 > iVar2 || iVar1 == iVar2); // true
	printf("false || true : %d\n\n", iVar1 < iVar2 || iVar1 != iVar2); // true
	printf("false || false : %d\n\n", iVar1 < iVar2 || iVar1 == iVar2); // false
	return 0;
}

int nonriBujong(void) {
	// 논리 부정: ! 논리연산의 결과를 반대로 만든다
	printf("123 > 4 : %d\n\n", (123 > 4)); // 1
	printf("!(123 > 4) : %d\n\n", !(123 > 4)); // 0
	printf("!!(123 > 4) : %d\n\n", !!(123 > 4)); // 1
	return 0;
}

int sizeCheck(void) {
	// sizeof 연산자: 변수의 크기(byte) 확인
	int iVar = 123;
	double dVar = 3.14;
	char cVar = 'A';
	char cArr[20] = "hello";

	printf("size of iVar : %d\n\n", sizeof iVar); // 4
	printf("size of dVar : %d\n\n", sizeof dVar); // 8
	printf("size of cVar : %d\n\n", sizeof cVar); // 1
	printf("size of cArr : %d\n\n", sizeof cArr); // 20

	printf("size of 정수상수 : %d\n\n", sizeof 123); // 4
	printf("size of 실수상수 : %d\n\n", sizeof 3.14); // 8
	printf("size of 문자상수 : %d\n\n", sizeof 'A'); // 4
	printf("size of 문자열상수 : %d\n\n", sizeof "hello"); // 6 => 마지막에 종결문자가 들어가기 때문에
	return 0;
}

int samHang(void) {
	// 삼항(조건) 연산자 a ? b : c
	// a가 참이면 b를 수행, a가 거짓이면 c를 수행
	int var1 = 77, var2 = 99, var3 = 55;
	int min = var1 < var2 ? var1 : var2;
	printf("var1 < var2 ? : %d\n\n", min);
	min = min < var3 ? min : var3;
	printf("min < var3 ? : %d\n\n", min);
	return 0;
}

int incDec(void) {
	// 증감 연산자: ++(자기 자신의 값을 하나 올림), --(자기 자신의 값을 하나 내림)
	int iVar = 123;
	iVar++;
	printf("iVar++ : %d\n\n", iVar); // 124
	iVar++;
	printf("iVar++ : %d\n\n", iVar); // 125
	iVar--;
	printf("iVar-- : %d\n\n", iVar); // 124
	return 0;
}

int incDec2(void) {
	// 증감 연산의 전위와 후위
	int iVar1 = 123, iVar2 = 123, iVar3, iVar4;
	iVar3 = iVar1++; // 후위 연산
	iVar4 = ++iVar2; // 전위 연산
	printf("iVar1 : %d, iVar2 : %d, iVar3 : %d, iVar4 : %d\n\n", iVar1, iVar2, iVar3, iVar4); // 124, 124, 123, 124
	// 전위연산일 때에는 증감연산을 가장 먼저 실행
	// 후위연산일 때에는 증감연산을 가장 마지막에 실행
	// => iVar3에 iVar1의 대입연산이 먼저 실행되고 iVar1의 값이 증가됨
	// => iVar2는 iVar4에 대입연산을 하기 전에 값을 먼저 증가시킴
	return 0;
}

int incDec3(void) {
	// 전위: 증감 연산을 먼저 수행하고 나머지 연산을 수행한다
	// 후위: 증감 연산을 가장 나중에 수행하고 나머지 연산을 먼저 수행한다
	int intA = 123, intB = 123, intC, intD;
	intC = intA--;
	printf("intA : %d, intC : %d\n\n", intA, intC); // = 먼저 실행, -- 나중에 실행
	intD = --intB;
	printf("intB : %d, intD : %d\n\n", intB, intD); // -- 먼저 실행, = 나중에 실행
	return 0;
}

int incDec4(void) {
	int intA = 3, intB = 3, intC, intD;
	intC = ++intA * 3; // intA가 4로 변경 후, 4 * 3 수행 결과가 intC에 대입
	printf("intA : %d, intC : %d\n\n", intA, intC); // 4, 12
	intD = intB++ * 3; // intB가 3인 상태로 3 * 3을 수행 후 intD에 대입하고, intB가 4로 변경
	printf("intB : %d, intD : %d\n\n", intB, intD); // 4, 9
	return 0;
}

/*
비트 연산자
	- 부호비트	2^6	2^5	2^4	2^3	2^2	2^1	2^0
	- 정수에서만 사용한다
	- 비트 논리 연산자
		-> & (and): 1 & 1은 1, 나머지는 0
		-> | (or): 0 | 0은 0, 나머지는 1
		-> ^ (xor): 0 ^ 1, 1 ^ 0은 1, 나머지는 0
	- 쉬프트 연산자
		-> << (left shift): bit를 좌로 이동
		-> >> (right shift): bit를 우로 이동

	ex) 		+	64	32	16	8	4	2	1
			42: +	0	1	0	1	0	1	0
			60: +	0	1	1	1	1	0	0
	   42 & 60: +	0	1	0	1	0	0	0	=> 40
	   42 | 60: +	0	1	1	1	1	1	0	=> 62
	   42 ^ 60: +	0	0	1	0	1	1	0	=> 22

	ex) 		+	64	32	16	8	4	2	1
			21: +	0	0	1	0	1	0	1
	   21 << 2: +	1	0	1	0	1	0	0	=> 84
	   21 >> 2: +	0	0	0	0	1	0	1	=> 5

형 변환 연산자
	- 데이터의 형태를 바꾼다
	- 예를들면 16bit 정수 저장공간에 담긴 값을 32bit 정수 저장공간으로 옮긴다
	- 정수<=>정수, 실수<=>실수, 정수<=>실수

	- 자동 형태 변환
		- 작은 저장공간 => 큰 저장 공간
		- 부작용이 없다
	- 강제 형태 변환
		- 큰 저장공간 => 작은 저장 공간
		- 형태 변환 연산자를 사용하여 강제로 형태를 변환한다
		- 데이터의 손실이 발생할 수 있다

복합 대입 연산자
	- a += b; == a = a + b;
	- a -- b; == a = a - b;
	- a *= b; == a = a * b;
	- a /= b; == a = a / b;
	- a %= b; == a = a % b;
	- a &= b; == a = a & b;
	- a |= b; == a = a | b;
	- a ^= b; == a = a ^ b;
	- a <<= b; == a = a << b;
	- a >>= b; == a = a >> b;
*/

int intTypeConversion(void) {
	short sVar1 = 32000;
	int iVar1 = sVar1; // 16bit -> 32bit 자동형태변환
	printf("iVar1 : %d, sVar1 : %d\n\n", iVar1, sVar1);

	int iVar2 = 2100000000;
	short sVar2 = (short)iVar2; // 32bit -> 16bit 형변환 연산자를 사용하여 강제형태변환
	printf("iVar2 : %d, sVar2 : %d\n\n", iVar2, sVar2);
	return 0;
}

int floatTypeConversion(void) {
	float fVar1 = 3.14;
	double dVar1 = fVar1; // 16bit -> 32bit 자동형태변환
	printf("fVar1 : %f, dVar1 : %lf\n\n", fVar1, dVar1);

	double dVar2 = DBL_MAX; 
	float fVar2 = (float)dVar2; // 64bit -> 32bit 형변환 연산자를 사용하여 강제형태변환
	printf("fVar2 : %e, dVar2 : %e\n\n", fVar2, dVar2); // inf: float의 표현범위를 벗어났다는 표현
	return 0;
}

int intFloatTypeConversion(void) {
	int iVar1 = 2100000000;
	double dVar1 = (double)iVar1; // 서로 다른 타입의 경우 형변환 연산자 사용 권장
	printf("iVar1 : %d, dVar1 : %lf\n\n", iVar1, dVar1);

	double dVar2 = 42.195;
	int iVar2 = (int)dVar2; // 소수점 손실 (강제 형변환)
	printf("iVar2 : %d, dVar2 : %lf\n\n", iVar2, dVar2);
	return 0;
}