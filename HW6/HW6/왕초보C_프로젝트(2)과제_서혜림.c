#include <stdio.h>
#include <stdlib.h>

struct Node {
	int coefficient;
	int exponent;
	struct Node* next;
};

int main(void) {
	struct Node* first = NULL;
	while (1) {
		struct Node* n = (struct Node*)malloc(sizeof(struct Node));
		if (scanf_s("%d %d", &n->coefficient, &n->exponent) != 2) {
			break;
		}
		n->next = NULL;
		if (first == NULL) {
			first = n;
			continue;
		}
		struct Node* curr = first;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = n;
	}
	while (first != NULL) {
		printf("(coef : %d, exp : %d)\n", first->coefficient, first->exponent);
		first = first->next;
	}
	return 0;
}