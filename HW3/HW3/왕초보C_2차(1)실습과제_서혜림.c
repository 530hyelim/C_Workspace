#include <stdio.h>

int main(void) {
	srand((unsigned int)time(NULL));
	int arr[6];
	for (int i = 0; i < 6; i++) {
		arr[i] = rand() % 45 + 1;
	}
	for (int i = 0; i < 6; i++) {
		printf("%d	", arr[i]);
	}
}