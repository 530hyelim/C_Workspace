#include <stdio.h>
#include <stdlib.h>

void fileRead() {
	FILE* file;
	fopen_s(&file, "C://Users//Administrator//source//repos//C_Workspace//HW5//HW5//lorem_ipsum.txt", "r");
	if (file == NULL) {
		printf("file not opened!!!");
		return;
	}
	int charRead = 0;
	while (charRead != EOF) { // EOF(End Of File) = -1
		charRead = fgetc(file);
		putchar(charRead);
	}
	printf("\n\n");
	fclose(file);
}

void fileWrite() {
	FILE* file;
	fopen_s(&file, "C://Users//Administrator//source//repos//C_Workspace//HW5//HW5//writeTest.txt", "w");
	if (file == NULL) {
		printf("file not opened!!!");
		return;
	}
	char str[20] = "nice to meet you~";
	for (int i = 0; str[i] != '\0'; i++) {
		fputc(str[i], file);
	}
	printf("save complete!\n");
	fclose(file);
}

void fileCopy() {
	FILE* readFile;
	FILE* writeFile;
	fopen_s(&readFile, "C://Users//Administrator//source//repos//C_Workspace//HW5//HW5//lorem_ipsum.txt", "r");
	if (readFile == NULL) {
		printf("open file failed!!");
		return;
	}
	fopen_s(&writeFile, "C://Users//Administrator//source//repos//C_Workspace//HW5//HW5//loremCopy.txt", "w");
	if (writeFile == NULL) {
		printf("write file failed!!");
		return;
	}
	/*int readChar = 0;
	while (readChar != EOF) {
		readChar = fgetc(readFile);
		fputc(readChar, writeFile);
	}*/
	char str[128];
	char* readStr = fgets(str, 128, readFile);
	while (readStr != NULL) {
		fputs(str, writeFile);
		readStr = fgets(str, 128, readFile);
	}
	printf("copy complete!!\n\n");
	fclose(readFile);
	fclose(writeFile);
}

int main(void) {
	fileRead();
	system("pause");
	fileWrite();
	system("pause");
	fileCopy();
	return 0;
}