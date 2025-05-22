#include <stdio.h>
#include <stdlib.h>

void fileRead() {
	FILE* file;
	fopen_s(&file, "", "r");
	fclose(file);
}

void fileWrite() {

}

void fileCopy() {

}

int main(void) {
	fileRead();
	system("pause");
	fileWrite();
	system("pause");
	fileCopy();
	return 0;
}