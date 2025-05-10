/* Chapter 4. ������ */
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
	// ��ȣ ������: ���� ��ȣ�� �������ִ� ������
	int iVar = 123;
	printf("iVar : %d\n\n", iVar);
	printf("-iVar : %d\n\n", -iVar);
	printf("- -iVar : %d\n\n", - -iVar);
	return 0;
}

int sachic(void) {
	// ��Ģ ������: + - * / %(������)
	int iVar1 = 123, iVar2 = 4;
	printf("%d + %d = %d\n\n", iVar1, iVar2, iVar1 + iVar2);
	printf("%d - %d = %d\n\n", iVar1, iVar2, iVar1 - iVar2);
	printf("%d * %d = %d\n\n", iVar1, iVar2, iVar1 * iVar2);
	printf("%d / %d = %d\n\n", iVar1, iVar2, iVar1 / iVar2);
	printf("%d o/o %d = %d\n\n", iVar1, iVar2, iVar1 % iVar2);
	return 0;
}

int bigyo(void) {
	// ����(��) ������: > < >= <= == !=
	int iVar1 = 123, iVar2 = 4;
	printf("iVar1 > iVar2 : %d\n\n", iVar1 > iVar2); // 1 (��: 0�� �ƴ� ��)
	printf("iVar1 < iVar2 : %d\n\n", iVar1 < iVar2); // 0 (����: 0)
	printf("iVar1 >= iVar2 : %d\n\n", iVar1 >= iVar2); // 1
	printf("iVar1 <= iVar2 : %d\n\n", iVar1 <= iVar2); // 0
	printf("iVar1 == iVar2 : %d\n\n", iVar1 == iVar2); // 0
	printf("iVar1 != iVar2 : %d\n\n", iVar1 != iVar2); // 1
	return 0;
}

int nonri(void) {
	// �� ������: ��, ������ �Ǻ� &&(and), ||(or)
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
	// �� ����: ! �������� ����� �ݴ�� �����
	printf("123 > 4 : %d\n\n", (123 > 4)); // 1
	printf("!(123 > 4) : %d\n\n", !(123 > 4)); // 0
	printf("!!(123 > 4) : %d\n\n", !!(123 > 4)); // 1
	return 0;
}

int sizeCheck(void) {
	// sizeof ������: ������ ũ��(byte) Ȯ��
	int iVar = 123;
	double dVar = 3.14;
	char cVar = 'A';
	char cArr[20] = "hello";

	printf("size of iVar : %d\n\n", sizeof iVar); // 4
	printf("size of dVar : %d\n\n", sizeof dVar); // 8
	printf("size of cVar : %d\n\n", sizeof cVar); // 1
	printf("size of cArr : %d\n\n", sizeof cArr); // 20

	printf("size of ������� : %d\n\n", sizeof 123); // 4
	printf("size of �Ǽ���� : %d\n\n", sizeof 3.14); // 8
	printf("size of ���ڻ�� : %d\n\n", sizeof 'A'); // 4
	printf("size of ���ڿ���� : %d\n\n", sizeof "hello"); // 6 => �������� ���Ṯ�ڰ� ���� ������
	return 0;
}

int samHang(void) {
	// ����(����) ������ a ? b : c
	// a�� ���̸� b�� ����, a�� �����̸� c�� ����
	int var1 = 77, var2 = 99, var3 = 55;
	int min = var1 < var2 ? var1 : var2;
	printf("var1 < var2 ? : %d\n\n", min);
	min = min < var3 ? min : var3;
	printf("min < var3 ? : %d\n\n", min);
	return 0;
}

int incDec(void) {
	// ���� ������: ++(�ڱ� �ڽ��� ���� �ϳ� �ø�), --(�ڱ� �ڽ��� ���� �ϳ� ����)
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
	// ���� ������ ������ ����
	int iVar1 = 123, iVar2 = 123, iVar3, iVar4;
	iVar3 = iVar1++; // ���� ����
	iVar4 = ++iVar2; // ���� ����
	printf("iVar1 : %d, iVar2 : %d, iVar3 : %d, iVar4 : %d\n\n", iVar1, iVar2, iVar3, iVar4); // 124, 124, 123, 124
	// ���������� ������ ���������� ���� ���� ����
	// ���������� ������ ���������� ���� �������� ����
	// => iVar3�� iVar1�� ���Կ����� ���� ����ǰ� iVar1�� ���� ������
	// => iVar2�� iVar4�� ���Կ����� �ϱ� ���� ���� ���� ������Ŵ
	return 0;
}

int incDec3(void) {
	// ����: ���� ������ ���� �����ϰ� ������ ������ �����Ѵ�
	// ����: ���� ������ ���� ���߿� �����ϰ� ������ ������ ���� �����Ѵ�
	int intA = 123, intB = 123, intC, intD;
	intC = intA--;
	printf("intA : %d, intC : %d\n\n", intA, intC); // = ���� ����, -- ���߿� ����
	intD = --intB;
	printf("intB : %d, intD : %d\n\n", intB, intD); // -- ���� ����, = ���߿� ����
	return 0;
}

int incDec4(void) {
	int intA = 3, intB = 3, intC, intD;
	intC = ++intA * 3; // intA�� 4�� ���� ��, 4 * 3 ���� ����� intC�� ����
	printf("intA : %d, intC : %d\n\n", intA, intC); // 4, 12
	intD = intB++ * 3; // intB�� 3�� ���·� 3 * 3�� ���� �� intD�� �����ϰ�, intB�� 4�� ����
	printf("intB : %d, intD : %d\n\n", intB, intD); // 4, 9
	return 0;
}

/*
��Ʈ ������
	- ��ȣ��Ʈ	2^6	2^5	2^4	2^3	2^2	2^1	2^0
	- ���������� ����Ѵ�
	- ��Ʈ �� ������
		-> & (and): 1 & 1�� 1, �������� 0
		-> | (or): 0 | 0�� 0, �������� 1
		-> ^ (xor): 0 ^ 1, 1 ^ 0�� 1, �������� 0
	- ����Ʈ ������
		-> << (left shift): bit�� �·� �̵�
		-> >> (right shift): bit�� ��� �̵�

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

�� ��ȯ ������
	- �������� ���¸� �ٲ۴�
	- ������� 16bit ���� ��������� ��� ���� 32bit ���� ����������� �ű��
	- ����<=>����, �Ǽ�<=>�Ǽ�, ����<=>�Ǽ�

	- �ڵ� ���� ��ȯ
		- ���� ������� => ū ���� ����
		- ���ۿ��� ����
	- ���� ���� ��ȯ
		- ū ������� => ���� ���� ����
		- ���� ��ȯ �����ڸ� ����Ͽ� ������ ���¸� ��ȯ�Ѵ�
		- �������� �ս��� �߻��� �� �ִ�

���� ���� ������
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
	int iVar1 = sVar1; // 16bit -> 32bit �ڵ����º�ȯ
	printf("iVar1 : %d, sVar1 : %d\n\n", iVar1, sVar1);

	int iVar2 = 2100000000;
	short sVar2 = (short)iVar2; // 32bit -> 16bit ����ȯ �����ڸ� ����Ͽ� �������º�ȯ
	printf("iVar2 : %d, sVar2 : %d\n\n", iVar2, sVar2);
	return 0;
}

int floatTypeConversion(void) {
	float fVar1 = 3.14;
	double dVar1 = fVar1; // 16bit -> 32bit �ڵ����º�ȯ
	printf("fVar1 : %f, dVar1 : %lf\n\n", fVar1, dVar1);

	double dVar2 = DBL_MAX; 
	float fVar2 = (float)dVar2; // 64bit -> 32bit ����ȯ �����ڸ� ����Ͽ� �������º�ȯ
	printf("fVar2 : %e, dVar2 : %e\n\n", fVar2, dVar2); // inf: float�� ǥ�������� ����ٴ� ǥ��
	return 0;
}

int intFloatTypeConversion(void) {
	int iVar1 = 2100000000;
	double dVar1 = (double)iVar1; // ���� �ٸ� Ÿ���� ��� ����ȯ ������ ��� ����
	printf("iVar1 : %d, dVar1 : %lf\n\n", iVar1, dVar1);

	double dVar2 = 42.195;
	int iVar2 = (int)dVar2; // �Ҽ��� �ս� (���� ����ȯ)
	printf("iVar2 : %d, dVar2 : %lf\n\n", iVar2, dVar2);
	return 0;
}