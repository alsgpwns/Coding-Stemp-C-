#include <stdio.h>
#include <string.h>

void main() {

	char s1[1001]= "";
	char s2[] = "the";
	char* test = NULL;

	int count=0;

	printf("문자열을 입력해주세요.\n");
	scanf_s("%[^\n]", s1,1001);

	char* ptr = strtok_s(s1, "'., ",&test);

	while (ptr != NULL) {

		
		if (!strcmp(ptr,s2)) {
			count = count + 1;
		}
		ptr = strtok_s(NULL, "'., ",&test);
		

	}



	printf("%d", count);
}
