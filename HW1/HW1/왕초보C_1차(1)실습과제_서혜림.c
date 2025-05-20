#include <stdio.h>

int main(void) {
	int firstNum, secondNum;
	char giho;

	while (1) {
		printf("firstNum 입력 : ");
		scanf_s("%d", &firstNum);

		printf("giho 입력 : ");
		scanf_s(" %c", &giho, 1);

		printf("secondNum 입력 : ");
		scanf_s("%d", &secondNum);

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
		default: return 0;
		}
	}
}