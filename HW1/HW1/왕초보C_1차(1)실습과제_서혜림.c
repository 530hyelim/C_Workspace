#include <stdio.h>

int main(void) {
	int firstNum, secondNum;
	char giho;

	while (1) {
		printf("firstNum �Է� : ");
		scanf_s("%d", &firstNum);

		printf("giho �Է� : ");
		scanf_s(" %c", &giho, 1);

		printf("secondNum �Է� : ");
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