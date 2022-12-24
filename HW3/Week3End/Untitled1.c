#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	char c[100] = {};
	char tmp[100];
	char chuaDau[100];
	char* p;
	gets(c);
	int k = 0;
	for (int i = 0; i < strlen(c); i++) {
		c[i] = tolower(c[i]);
	}
	p = strtok(c, " ");
	while(p) {
		c[0] = toupper(c[0]);
		strcpy(tmp, p);
		chuaDau[k++] = p[0];
		p = strtok(NULL, " ");
	}
	printf("%s", tmp);
	for(int i = 0; i < strlen(chuaDau) - 1; i++) {
		printf("%c", chuaDau[i]);
	}
	printf("@stu.ptit.edu.vn");
}
