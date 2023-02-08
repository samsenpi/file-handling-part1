
#define _CRT_SECURE_NO_WARNINGS
#define NULL 0
#include <stdio.h>
#include <string.h>


int main() {

	char st[200];




	printf("enter a telephone no.(555)555-5555\n:");
	scanf("%s", st);

	char* p = strtok(st, "( )");

	char* p1 = strtok(NULL," -");

	char* p2 = strtok(NULL, "-");

	printf("first token :%s\n", p);

	printf("second token :%s\n", p1);

	printf("third token :%s\n", p2);

	//	printf("%s",p1);

	int* c1 = strcat(p, p1);
	int* c2 = strcat(c1, p2);

	printf(" the phone number is:%s", c2);


	return 0;
}