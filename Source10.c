

#define _CRT_SECURE_NO_WARNINGS
#define NULL 0
#include <stdio.h>
#include <string.h>

void stlenghtWithPointer( char *s1) {

	int count = 0;
	int i = 0;
	while (*(  s1 + i) != '\0') {
		i++;
		count++;

	}
	printf("\nthe length of string %s with pointer is %d", s1,count);

}

void stlenghtWithArray(char s1[]) {


	int count2 = 0;

	while (s1[count2] != '\0') {

		count2++;

	}
	printf("\nthe length of string %s with array is%d", s1, count2);

}




int main() {


	//initailizing of string

	char s1[100];
	


	printf("enter a string:");
	fgets(s1, 100, stdin);

	
	//function call

	stlenghtWithPointer(s1);

	 stlenghtWithArray( s1);
	
	return 0;
}
