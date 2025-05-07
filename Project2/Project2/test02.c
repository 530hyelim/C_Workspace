/*
Data�� ����
- ��� ���, ����, ���
- �������� �����̳� ���� ����� ���� ��ġ�� �������� ��
- ��ü�� �Ӽ��� ����, ����, ��ȣ ������ ǥ���� ��
- �����Ϳ� Ư���� �ǹ̰� �ο��� �� ������ ��
- ������ ��ü�� �ܼ��� ���(�츮 �ֺ��� �����ϴ� ��� �繰���� �Ӽ�)�� �Ұ�������,
- �Ϸ��� ó�������� ���� Ư���� ������ �ҿ�Ǵ� ������ ��

Data�� ����(Type)
- �η��� ������ ���ڿ� ���� ü��
- C���� �ٷ�� �����͵� ���ڿ� ���� ü��(����, ���ڿ�, ����, �Ǽ�, ...)
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// ���� Ÿ�� ������ �ּҰ��� �ִ밪�� ���� ���� �� ����(��ҹ��ڿ� ����)
#include <float.h>
// �Ǽ� Ÿ�� ������ �ּҰ��� �ִ밪�� ���� ���� �� ����

int main(void) {
	printf("���ڿ� ������ ���\n");
	printf("%s\n", "���ڿ� ������ ���");
	printf("%c\n", 'a');
	printf("%d\n", 123);
	printf("%f\n", 0.123456);

	printf("�̸� : %s\n", "ȫ�浿");
	printf("���� : %d\n", 25);
	printf("%d�г� %d�� %d�� ȫ�浿\n", 3, 1, 17);
	printf("Ű : %.1fcm, ������ : %.20fkg, ������ : %c��\n", 180.0, 80.0, 'A');
	system("pause");

	/*
	������ ����
		- �޸𸮿� �����͸� ���� ������ ����鼭, �� ������ �̸��� �������ν�,
		  �� ������ �� �ִ� ���� ��Ȱ�� �� �� �ֵ��� ���� ��
		- ��ǻ�Ͱ� �۾��� �����ϱ� ���� �ʿ��� �����͸� ��� ���� ����
		  (����: �������, data: ���� ������ ��� ���빰)
		- �ʿ信 ���� ������ ����Ű�� ���� ������ ���� �ٲ� �� �ִ�
		  (variable: �ٲ� �� �ִ� data�� ���� ���� ����)

	������ ����
		1. ������ ����
			- ������� �ϴ� ������ ������ Ÿ�԰� ���� �̸��� ���ϴ� ����
			- ������Ÿ�� �����̸�;
		2. ������ �ʱ�ȭ
			- ������ Ÿ�԰� �̸��� ������ ������ ������ ���� �����ϴ� ����
			- �����̸� = ��;
	*/
	int data1; // ������ ����
	data1 = 9876; // ������ �ʱ�ȭ
	// = �� ������ ���� ���׿� �����϶�� ���� ������
	printf("%d\n", data1);

	int data2 = 8765; // ������ ����� �ʱ�ȭ�� �ѹ���
	printf("%d\n", data2);

	printf("%d + %d = %d\n", data1, data2, data1 + data2);
	printf("%d - %d = %d\n", data1, data2, data1 - data2);
	printf("%d * %d = %d\n", data1, data2, data1 * data2);
	system("pause");

	/*
	���� Type ������ ���� (ǥ���� �� �ִ� ���� ũ�⿡ ����)
		- short: 2byte (16bit)���� ����Ͽ� ���� ǥ��(-2^15 ~ 2^15-1)
			1bit�� ����/����� ǥ���ϴ� ��ȣ ��Ʈ
			���� �ӵ��� int���� ����
		- int: 4byte (32bit)�� ����Ͽ� ���� ǥ��(-2^31 ~ 2^31-1)
			���� ������ �⺻ ����
			���� �ӵ��� ���� �����ٴ� ����
		- long: 4byte (32bit�� ����Ͽ� ���� ǥ��(-2^31 ~ 2^31-1)
			printf�Լ��� ���� ����: %ld
			int�� 2����Ʈ�� ����ϴ� ��ǻ�� �ý��ۿ��� 4����Ʈ ���� ������ Ȯ���ϱ� ���� ���
		- long long: 8byte (64bit) ����Ͽ� ���� ǥ��(-2^63 ~ 2^63-1)
			printf�Լ��� ���� ����: %lld
			��û���� ū ���� �����ϴ� �뵵�� ���
	*/
	short sVar1 = 32767;
	short sVar2 = 50000; // ����ϸ� ������ ���� ����
	int iVar1 = 2147483647;
	int iVar2 = 2200000000; // ����ϸ� ������ ��
	long lVar1 = 2147483647;
	long lVar2 = 2200000000; // ������ ��
	// long type�� ������ int�� 4����Ʈ ������ ǥ������ ���ϴ� ��ǻ�Ϳ���(���� 16��Ʈ ���� ��ǻ��)
	// ��������� 4����Ʈ�� ������ ǥ���ϱ� ���� ����
	long long llVar1 = 9220000000000000000;
	long long llVar2 = 9300000000000000000; // ����
	printf("%lld\n", llVar2);
	system("pause");

	/*
	unsigned
		���� ������ ������� �ʰ�, ���� ������ ǥ���ϴ� ��ŭ, ���� ������ ǥ���ϴ� ��
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
	//unsigned long long ullVar2 = 18446744073709551616; => ���� ����!
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
	// unsigned�� �ּҰ��� �׻� 0�̱� ������ ���X
	system("pause");

	/*
	�Ǽ� Type ������ ���� (ǥ���� �� �ִ� ���� ũ�⿡ ����)
		- float: 4byte (32bit)���� ����Ͽ� ���� ǥ��
			1bit�� ��ȣ��Ʈ(+/-)
			8bit�� ������(���� ǥ��), 23bit�� ������(�Ҽ��� ����)
		- double: 8byte (64bit)�� ����Ͽ� ���� ǥ��
			1bit�� ��ȣ��Ʈ
			11bit�� ������, 52bit�� ������
		- long double: double���� �� ū ���� ǥ���� �ʿ��� ��, ��Ȳ�� ���� �ٸ��� ����
	*/
	printf("float min : %e, max : %e\n\n", FLT_MIN, FLT_MAX);
	// %e�� 10�� �¼��� ����ϴ� ���� ����
	double dMin = DBL_MIN, dMax = DBL_MAX;
	printf("double min : %e, max : %e\n\n", dMin, dMax);
	system("pause");

	/*
	char
		�޸𸮸� 1byte(8bit) ����Ͽ� ������ ���ڸ� ǥ��(%c or %d)
		1bit�� ��ȣ��Ʈ, -2^7 ~ 2^7-1������ ���� ǥ��(-128 ~ 127)
		ASCII Code: Ű���� �Է� ���� 0~127�� ������ ó��, ���ڿ� ����
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

	// sizeof : ������ �� ����Ʈ�� �޸𸮸� �����ϴ��� �˷��ִ� ������
	char charVar = CHAR_MAX;
	short shortVar = SHRT_MAX;
	int intVar = INT_MAX;
	long longVar = LONG_MAX;
	long long longlongVar = LLONG_MAX;
	int chSize = sizeof charVar, shSize = sizeof shortVar, iSize = sizeof intVar, lSize = sizeof longVar, llSize = sizeof longlongVar;
	printf("%d, %d, %d, %d, %d\n\n", chSize, shSize, iSize, lSize, llSize);

	return 0;
}