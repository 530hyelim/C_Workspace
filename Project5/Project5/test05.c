/* Chapter 5. 제어문 */
#include <stdio.h>
#include <stdlib.h>

/*
rand / srand 함수
	- 0 ~ 32767 사이의 수를 발생시킨다
	- % (나머지)연산을 사용하여 발생시키고 싶은 수의 범위를 제한한다
	- 예) rand() % 3 + 1: 1, 2, 3을 발생시킨다
	- 계속 변화되는 값을 얻으려면, srand()를 통해 rand()의 기준값을 변경해 주어야 한다
	- srand((unsigned int)time(NULL)): 현재 시간으로 rand()의 기준값을 변경하는 표현
	- #include <stdlib.h>

분기문(Branch Statement)
	- 경우의 수에 따라 프로그램의 흐름을 나누는 문법
	- 이런 경우에는 이렇게, 저런 경우에는 저렇게 수행하라
	- if (수행조건) {수행코드}
		-> 수행조건에는 true/false를 나타내는 표현이 온다
		-> 수행조건이 true면 수행코드 실행, false면 실행 안 함
	- switch (비교하려는 값) {
		case 값: 값이 같으면 수행;
		case 값: 같이 다르면 수행 안 함;
	  }
		-> (비교하려는 값)에는 정수형 상수, 정수형 변수, 결과값이 정수인 수식만 들어감
		-> 문제점: case 값이 해당되는 곳부터 모두 실행
		-> 해결방법: break 키워드를 사용하여 실행을 정지
		-> default: 나머지 모든 경우
*/

int main(void) {
	//randTest();
	//codeTest();
	//codeTest2();

	int firstNum, secondNum;
	char giho = ' ';
	printf("정수 입력 : ");
	scanf_s("%d", &firstNum);
	printf("+ - * / 입력 : ");
	// 엔터키가 기호에서 입력받지 않게 하기 위함
	scanf_s(" %c", &giho, 1);
	// 스페이스가 엔터값의 위치가 됨
	printf("정수 입력 : ");
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
	default: printf("wrong input. try again!!!\n\n"); // else문과 같음
	}
	system("pause");
	game123();
	return 0;
}

int randTest(void) {
	srand((unsigned int)time(NULL)); // 수행할 때마다 다른 값을 발생시킴
	int iVar = rand() % 3 + 1; // 1 ~ 3 사이의 랜덤값을 발생시킴
	printf("%d\n\n", iVar);
	return 0;
}

int codeTest(void) {
	int iVar = 99;
	if (iVar >= 90) {
		printf("90이상의 값\n\n");
	}
	if (iVar >= 80) {
		printf("80이상의 값\n\n");
	}
	// if문이 병렬로 선언되어 있으므로 두 코드가 모두 출력된다
	else if (iVar >= 70) {
		printf("70이상의 값\n\n");
	}
	return 0;
}

int codeTest2(void) {
	int iVar = 0;
	printf("1 2 3중 하나의 수를 입력 하세요: ");
	scanf_s("%d", &iVar);

	if (iVar == 1) {
		printf("가위 입니다.");
	}
	else if (iVar == 2) {
		printf("바위 입니다.");
	}
	else if (iVar == 3) {
		printf("보 입니다.");
	}
	else {
		printf("입력 값이 올바르지 않습니다");
	}
	return 0;
}

/*
if ~ else if ~ else ~
	if (if 수행조건) {if 수행코드}					=> if 수행조건이 true이면, if 수행코드를 실행하고 나머지 else if 수행조건 검사X
	else if (else if 수행조건) {else if 수행코드}	=> if 수행조건이 false이고, 첫번째 else if 수행조건이 true이면 else if 코드실행
	else {else 수행코드}							=> if 와 else if 수행조건이 둘 다 false이면 코드실행
	즉, iVar = 1이면 iVar가 2나 3인 경우는 검사할 필요가 없기 때문에 효율적으로 코드 작성 가능
*/

int game123(void) {
	int user = 0, com = 0;
	printf("1가위, 2바위, 3보 중 하나를 입력하세요 : ");
	scanf_s("%d", &user);

	srand((unsigned int)time(NULL));
	com = rand() % 3 + 1; // 120 % 3 = 0, 121 % 3 = 1, 122 % 3 = 2, 123 % 3 = 0
	printf("user : %d, com : %d\n\n", user, com);

	if (user == com) {
		printf("비겼습니다.");
	}
	else if (user == 1) { //가위
		if (com == 2) printf("패배입니다.");
		else if (com == 3) printf("승리입니다.");
	}
	else if (user == 2) { //바위
		if (com == 1) printf("승리입니다.");
		else if (com == 3) printf("패배입니다.");
	}
	else if (user == 3) { //보
		if (com == 1) printf("패배입니다.");
		else if (com == 2) printf("승리입니다.");
	}
	return 0;
}