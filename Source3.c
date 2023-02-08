

#define _CRT_SECURE_NO_WARNINGS
#define NULL 0
#include <stdio.h>
#include <string.h>

int main() {

	char *st[100]={"bat","apple","banana"};

	char letter = 'b';

	//printf("enter a string:");
	//scanf("%s", st);

	int size = strlen(st);


	printf("the match ");


	for (int i = 0;i < size;i++) {

		printf(":%s\n", strchr(st[i], letter));


	}


	return 0;
}
