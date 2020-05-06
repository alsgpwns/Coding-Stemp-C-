#include <stdio.h>

#include <string.h>
#include <stdbool.h>

void main() {

	char s1[31];
	int length;
	bool re = true;

	printf("문자열을 입력하세요. \n");
	scanf_s("%s", s1,31);

	length = strlen(s1);

	for (int i = 0; i < length / 2; i++) {

		if (s1[i] != s1[length - i - 1]) {
			re = false;
			break;
		}
	}
	printf("%d", re);

}