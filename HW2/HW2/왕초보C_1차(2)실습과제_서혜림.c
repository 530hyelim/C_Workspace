#include <stdio.h>

int main(void) {
	int count = 1;
	for (int row = 9; row > 0; row -= 2) {
		for (int space = 0; space < row / 2; space++) {
			printf(" ");
		}
		for (int star = 0; star < count; star++) {
			printf("*");
		}
		for (int space = 0; space < row / 2; space++) {
			printf(" ");
		}
		printf("\n");
		count += 2;
	}
	printf("\n");
	for (int row = 0; row < 9; row += 2) {
		count -= 2;
		for (int space = 0; space < row / 2; space++) {
			printf(" ");
		}
		for (int star = 0; star < count; star++) {
			printf("*");
		}
		for (int space = 0; space < row / 2; space++) {
			printf(" ");
		}
		printf("\n");
	}
}