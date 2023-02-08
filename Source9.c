

#define _CRT_SECURE_NO_WARNINGS
#define NULL 0
#include <stdio.h>
#include <string.h>

void  stcomptWithPointer( char *s1,char *s2) {
	
	int counter = 0;
	int count = 0;
	int i ;
	for (i = 0;*(s1 + i) != '\0';i++) {
		
		count++;

	}*s1 != '\0';

	
	for (i = 0;*(s2 + i) != '\0';i++) {

		counter++;

	}*s2 != '\0';

	if (count > counter) {


		printf("\nBY POINTER the string1' %s' is greater than to string2 % s", s1, s2);

	}
	else if (count < counter) {

		printf("\n BY POINTER the string1 %s is smaller than string2 %s", s1, s2);

	}
	else {

		printf("\nBY POINTER the string1 %s is equal to string2 %s", s1, s2);

	}


	
}

void stcomptWithArray(char s1[],char s2[]) {




	int counter = 0;
	int count = 0;
	int i;
	for (i = 0;s1[i] != '\0';i++) {

		count++;

	}*s1 != '\0';


	for (i = 0;s2[i] != '\0';i++) {

		counter++;

	}*s2 != '\0';

	if (count > counter) {

		printf("\nBY ARRAY the string1 %s is greater than string2 %s", s1, s2);
	
	}
	else if (count < counter) {
		

		printf("\nBY ARRAY the string1 %s is smaller than string2 %s", s1, s2);

	}
	else {

		printf("\n BY ARRAY the string1 %s is equal to string2 %s", s1, s2);

	}



}




int main() {


	//initailizing of string

	char s1[100];
	
	char s2[100];

	printf("enter a string:");
	fgets(s1, 100, stdin);


	printf("enter a 2nd string:");
	fgets(s2, 100, stdin);

	
	//function call

	stcomptWithPointer(s1,s2);

		
	  stcomptWithArray( s1,s2);
	


	return 0;
}
