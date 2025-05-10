/* Chapter 5. ��� */
#include <stdio.h>
#include <stdlib.h>

/*
rand / srand �Լ�
	- 0 ~ 32767 ������ ���� �߻���Ų��
	- % (������)������ ����Ͽ� �߻���Ű�� ���� ���� ������ �����Ѵ�
	- ��) rand() % 3 + 1: 1, 2, 3�� �߻���Ų��
	- ��� ��ȭ�Ǵ� ���� ��������, srand()�� ���� rand()�� ���ذ��� ������ �־�� �Ѵ�
	- srand((unsigned int)time(NULL)): ���� �ð����� rand()�� ���ذ��� �����ϴ� ǥ��
	- #include <stdlib.h>

�б⹮(Branch Statement)
	- ����� ���� ���� ���α׷��� �帧�� ������ ����
	- �̷� ��쿡�� �̷���, ���� ��쿡�� ������ �����϶�
	- if (��������) {�����ڵ�}
		-> �������ǿ��� true/false�� ��Ÿ���� ǥ���� �´�
		-> ���������� true�� �����ڵ� ����, false�� ���� �� ��
	- switch (���Ϸ��� ��) {
		case ��: ���� ������ ����;
		case ��: ���� �ٸ��� ���� �� ��;
	  }
		-> (���Ϸ��� ��)���� ������ ���, ������ ����, ������� ������ ���ĸ� ��
		-> ������: case ���� �ش�Ǵ� ������ ��� ����
		-> �ذ���: break Ű���带 ����Ͽ� ������ ����
		-> default: ������ ��� ���
*/

int main(void) {
	//randTest();
	//codeTest();
	//codeTest2();

	int firstNum, secondNum;
	char giho = ' ';
	printf("���� �Է� : ");
	scanf_s("%d", &firstNum);
	printf("+ - * / �Է� : ");
	// ����Ű�� ��ȣ���� �Է¹��� �ʰ� �ϱ� ����
	scanf_s(" %c", &giho, 1);
	// �����̽��� ���Ͱ��� ��ġ�� ��
	printf("���� �Է� : ");
	scanf_s("%d", &secondNum);

	int resultNum = 0;
	if (giho == '+') {
		resultNum = firstNum + secondNum;
	} else if (giho == '-') {
		resultNum = firstNum - secondNum;
	} else if (giho == '*') {
		resultNum = firstNum * secondNum;
	} else if (giho == '/') {
		resultNum = firstNum / secondNum;
	}
	printf("%d %c %d = %d\n\n", firstNum, giho, secondNum, resultNum);
	system("pause");

	switch (giho) {
	case '+':
		printf("%d %c %d = %d\n\n", firstNum, giho, secondNum, firstNum + secondNum);
		break;
	case '-':
		printf("%d %c %d = %d\n\n", firstNum, giho, secondNum, firstNum - secondNum);
		break;
	case '*':
		printf("%d %c %d = %d\n\n", firstNum, giho, secondNum, firstNum * secondNum);
		break;
	case '/':
		printf("%d %c %d = %d\n\n", firstNum, giho, secondNum, firstNum / secondNum);
		break;
	default: printf("wrong input. try again!!!\n\n"); // else���� ����
	}
	system("pause");
	game123();
	return 0;
}

int randTest(void) {
	srand((unsigned int)time(NULL)); // ������ ������ �ٸ� ���� �߻���Ŵ
	int iVar = rand() % 3 + 1; // 1 ~ 3 ������ �������� �߻���Ŵ
	printf("%d\n\n", iVar);
	return 0;
}

int codeTest(void) {
	int iVar = 99;
	if (iVar >= 90) {
		printf("90�̻��� ��\n\n");
	}
	if (iVar >= 80) {
		printf("80�̻��� ��\n\n");
	}
	// if���� ���ķ� ����Ǿ� �����Ƿ� �� �ڵ尡 ��� ��µȴ�
	else if (iVar >= 70) {
		printf("70�̻��� ��\n\n");
	}
	return 0;
}

int codeTest2(void) {
	int iVar = 0;
	printf("1 2 3�� �ϳ��� ���� �Է� �ϼ���: ");
	scanf_s("%d", &iVar);

	if (iVar == 1) {
		printf("���� �Դϴ�.");
	}
	else if (iVar == 2) {
		printf("���� �Դϴ�.");
	}
	else if (iVar == 3) {
		printf("�� �Դϴ�.");
	}
	else {
		printf("�Է� ���� �ùٸ��� �ʽ��ϴ�");
	}
	return 0;
}

/*
if ~ else if ~ else ~
	if (if ��������) {if �����ڵ�}					=> if ���������� true�̸�, if �����ڵ带 �����ϰ� ������ else if �������� �˻�X
	else if (else if ��������) {else if �����ڵ�}	=> if ���������� false�̰�, ù��° else if ���������� true�̸� else if �ڵ����
	else {else �����ڵ�}							=> if �� else if ���������� �� �� false�̸� �ڵ����
	��, iVar = 1�̸� iVar�� 2�� 3�� ���� �˻��� �ʿ䰡 ���� ������ ȿ�������� �ڵ� �ۼ� ����
*/

int game123(void) {
	int user = 0, com = 0;
	printf("1����, 2����, 3�� �� �ϳ��� �Է��ϼ��� : ");
	scanf_s("%d", &user);

	srand((unsigned int)time(NULL));
	com = rand() % 3 + 1; // 120 % 3 = 0, 121 % 3 = 1, 122 % 3 = 2, 123 % 3 = 0
	printf("user : %d, com : %d\n\n", user, com);

	if (user == com) {
		printf("�����ϴ�.");
	}
	else if (user == 1) { //����
		if (com == 2) printf("�й��Դϴ�.");
		else if (com == 3) printf("�¸��Դϴ�.");
	}
	else if (user == 2) { //����
		if (com == 1) printf("�¸��Դϴ�.");
		else if (com == 3) printf("�й��Դϴ�.");
	}
	else if (user == 3) { //��
		if (com == 1) printf("�й��Դϴ�.");
		else if (com == 2) printf("�¸��Դϴ�.");
	}
	return 0;
}