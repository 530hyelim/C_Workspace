#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	/*
	���
		- ������ �ݴ� ����(������ �ʴ� ���� �����ϴ� ����)
		- ����� ������ ���ο� ���� ���� �� ����
		- ó�� ���Ե� ���� �ٲ� �� ����

	�Ϲݻ��
		- ��ȸ������ ���� �Ұ�
		- ���� ���: 4byte
		- ���� ���: 4byte
		- �Ǽ� ���: 8byte

	const
		- ������ ������ ����� ����� ���
		- ���� ������ ��� �������� ����� ���
		- ���� �� �ʱ�ȭ�� ���� ������ ���� ����Ǵ� ���� �����ִ� Ű����
		- ����� ���ÿ� �ʱ�ȭ �ʿ�
		- ���� ���Ŀ� ���� ������ ���� �� ���� �Ұ�
		- ������ �ʿ䰡 ���� ������ ���� ���� �� ���
		- ��) INT_MAX

	����� �̸�
		- �ǹ̰� ��Ȯ�� �̸����� �����
		- ��� �빮��
		- �ܾ�� �ܾ �̾��� ���� _���
	*/
	printf("%d + %d = %d\n\n", 9876, 8765, 9876 + 8765); 
	printf("%d - %d = %d\n\n", 9876, 8765, 9876 - 8765);
	// �Ϲݻ���� ��ġ���� ���� ���ϱ� ������ �޸� ������ ���� �ٲ� �� ����

	const double MARATHON_LENGTH = 42.195;
	//MARATHON_LENGTH = 55.195;
	//const�� ���� ���� ����� �Ǳ� ������ ���� �ٲ� �� ����
	//����� �ʿ䰡 ���� ���� �����ϱ� ���� ����
	printf("MARATHON_LENGTH : %lf\n\n", MARATHON_LENGTH);
	printf("MARATHON_LENGTH ���� : %lf\n\n", MARATHON_LENGTH);

	const MARATHON_LENGTH2;
	//MARATHON_LENGTH2 = 42.195;
	//const������ ����� �Բ� ���� �ʱ�ȭ �ؾ� ��
	system("pause");

	/*
	���ڿ�(character string %s)
		- string�� ���� �ǹ�. ���ڸ� ������ ���Ҵٴ� ��
		- ���� �迭�� ���·� �����ϰ� �ʱ�ȭ
		- ����� ũ�⺸�� �ϳ� ���� ���ڿ� �Է�
		- ���ڿ��� ������ ���ڿ� ���� ���ڰ� ����

	���ڿ��� ���� ������ �Ұ���!
		=> strcpy_s �Լ��� ����ؾ� ��
		- ���ڿ��� �ʱ�ȭ ���Ŀ�, �ٽ� ���ڿ� �Է��� �ʿ��� ��
		- #include<string.h> �ʿ�
	*/
	char chArray[30] = "nice to meet you, too.";
	printf("���ڿ� ���� : %s, ��� : %s\n\n", chArray, "�Ϲ� ���ڿ� ���");

	//chArray = "how are you???";
	char chArray2[30];
	//chArray2 = "how are you???";

	strcpy_s(chArray, sizeof chArray, "how are you???");
	printf("chArray : %s\n\n", chArray);
	strcpy_s(chArray2, 30, "i am fine, thank you.");
	printf("chArray2 : %s\n\n", chArray2);
	system("pause");

	/*
	* scanf_s �Լ�
	*	- �ܼ� â�� ���� �Է� ���
	*	- �Է� ���� ���ڸ� ����� �Է��� �޴´�
	*	- �Էµ� ���� ������ �����Ѵ�
	*	- ����ϱ� ���� #include<stdio.h> �ʿ�
	*	- &������: ������ �ּҰ��� �������ִ� ����
	* 
	* �Է� ���� ����
	*	- ���� Ÿ��(short: %hd, int: %d, long: %ld, longlong: %lld)
	*	- unsigned ���� Ÿ��(unsigned short: %hu, unsigned int: %u, unsigned long: %lu, unsigned longlong: %llu)
	*	- �Ǽ� Ÿ��(float: %f, double: %lf)
	*	- ���� Ÿ��(����: %c, ���ڿ�: %s)
	*		-> ��, �Է� ���� ���ڿ��� ���̸� �̸� �����Ѵ�
	*		-> ������ ���̺��� �� ���ڿ� �Է½� �����߻�, �ƹ� ���� �Է¹��� �ʴ´�
	*		-> ���ڿ��� ���� �ϴ� ���, ���� �������� �Էµȴ�
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

	getchar(); // ���๮�� ó��

	char cVar;
	printf("���� �ϳ� �Է� : ");
	scanf_s("%c", &cVar, 1);
	printf("cVar1 : %c\n\n", cVar);

	char cArr[30];
	printf("���ڿ�(30��) �Է� : ");
	scanf_s("%s", cArr, 30); // ���ڿ��� �Է� ���� ���� & ���X
	printf("cArr : %s\n\n", cArr);
	system("pause");

	return 0;
}