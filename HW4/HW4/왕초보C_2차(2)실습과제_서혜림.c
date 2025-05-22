#include <stdio.h>

int main(void) {
	int array[5][5] = {0,};
	int num = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 4 - i; j < 5; j++) {
			array[i][j] = num++;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
}